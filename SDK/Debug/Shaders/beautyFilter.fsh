#version 330
precision highp float;
uniform sampler2D textureUniformRGBA;	//纹理
varying vec2 textureCoordinate;			//坐标
uniform float texelWidthOffset;			//纹理宽
uniform float texelHeightOffset;		//纹理高
uniform int beauty_level;				//美颜等级

float beauty_filter_r = 0.0f;
float beauty_filter_g = 0.0f;
float beauty_filter_b = 0.0f;
float beauty_filter_a = 0.0f;

 
const  vec3 W = vec3(0.299,0.587,0.114);
const mat3 saturateMatrix = mat3(
		1.1102,-0.0598,-0.061,
		-0.0774,1.0826,-0.1186,
		-0.0228,-0.0228,1.1772);
		
int setBeautyLevel(int level)
{
	switch(level)
	{
		case 1:
			beauty_filter_r = 1.0f;
			beauty_filter_g = 1.0f;
			beauty_filter_b = 0.15f;
			beauty_filter_a = 0.15f;
			break;
		case 2:
			beauty_filter_r = 0.8f;
			beauty_filter_g = 0.9f;
			beauty_filter_b = 0.2f;
			beauty_filter_a = 0.2f;
			break;
		case 3:
			beauty_filter_r = 0.6f;
			beauty_filter_g = 0.8f;
			beauty_filter_b = 0.25f;
			beauty_filter_a = 0.25f;
			break;
		case 4:
			beauty_filter_r = 0.4f;
			beauty_filter_g = 0.7f;
			beauty_filter_b = 0.38f;
			beauty_filter_a = 0.3f;
			break;
		case 5:
			beauty_filter_r = 0.33f;
			beauty_filter_g = 0.63f;
			beauty_filter_b = 0.4f;
			beauty_filter_a = 0.35f;
			break;
		default:
			beauty_filter_r = 1.0f;
			beauty_filter_g = 1.0f;
			beauty_filter_b = 0.15f;
			beauty_filter_a = 0.15f;
			break;
			
			
	}
	return 1;
}
float hardlight(float color)
{
	if(color <= 0.5)
	{
		color = color * color * 2.0;
	}
	else
	{
		color = 1.0 - ((1.0 - color)*(1.0 - color) * 2.0);
	}
	return color;
}

void main()
{		
		if(0 == beauty_level )
		{
			gl_FragColor = vec4(texture2D(textureUniformRGBA,textureCoordinate));
		}
		else
		{
			vec2 blurCoordinates[24];
			vec2 singleStepOffset = vec2(texelWidthOffset,texelHeightOffset);
		
			setBeautyLevel(beauty_level);
	 
			blurCoordinates[0] = textureCoordinate.xy + singleStepOffset * vec2(0.0, -10.0);
			blurCoordinates[1] = textureCoordinate.xy + singleStepOffset * vec2(0.0, 10.0);
			blurCoordinates[2] = textureCoordinate.xy + singleStepOffset * vec2(-10.0, 0.0);
			blurCoordinates[3] = textureCoordinate.xy + singleStepOffset * vec2(10.0, 0.0);
	
			blurCoordinates[4] = textureCoordinate.xy + singleStepOffset * vec2(5.0, -8.0);
			blurCoordinates[5] = textureCoordinate.xy + singleStepOffset * vec2(5.0, 8.0);
			blurCoordinates[6] = textureCoordinate.xy + singleStepOffset * vec2(-5.0, 8.0);
			blurCoordinates[7] = textureCoordinate.xy + singleStepOffset * vec2(-5.0, -8.0);
		
			blurCoordinates[8] = textureCoordinate.xy + singleStepOffset * vec2(8.0, -5.0);
			blurCoordinates[9] = textureCoordinate.xy + singleStepOffset * vec2(8.0, 5.0);
			blurCoordinates[10] = textureCoordinate.xy + singleStepOffset * vec2(-8.0, 5.0);
			blurCoordinates[11] = textureCoordinate.xy + singleStepOffset * vec2(-8.0, -5.0);
	
			blurCoordinates[12] = textureCoordinate.xy + singleStepOffset * vec2(0.0, -6.0);
			blurCoordinates[13] = textureCoordinate.xy + singleStepOffset * vec2(0.0, 6.0);
			blurCoordinates[14] = textureCoordinate.xy + singleStepOffset * vec2(6.0, 0.0);
			blurCoordinates[15] = textureCoordinate.xy + singleStepOffset * vec2(-6.0, 0.0);
		
			blurCoordinates[16] = textureCoordinate.xy + singleStepOffset * vec2(-4.0, -4.0);
			blurCoordinates[17] = textureCoordinate.xy + singleStepOffset * vec2(-4.0, 4.0);
			blurCoordinates[18] = textureCoordinate.xy + singleStepOffset * vec2(4.0, -4.0);
			blurCoordinates[19] = textureCoordinate.xy + singleStepOffset * vec2(4.0, 4.0);
	
			blurCoordinates[20] = textureCoordinate.xy + singleStepOffset * vec2(-2.0, -2.0);
			blurCoordinates[21] = textureCoordinate.xy + singleStepOffset * vec2(-2.0, 2.0);
			blurCoordinates[22] = textureCoordinate.xy + singleStepOffset * vec2(2.0, -2.0);
			blurCoordinates[23] = textureCoordinate.xy + singleStepOffset * vec2(2.0, 2.0);
	
	
			float sampleColor = texture2D(textureUniformRGBA, textureCoordinate).g * 22.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[0]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[1]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[2]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[3]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[4]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[5]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[6]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[7]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[8]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[9]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[10]).g;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[11]).g;
	
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[12]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[13]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[14]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[15]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[16]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[17]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[18]).g * 2.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[19]).g * 2.0;
	
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[20]).g * 3.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[21]).g * 3.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[22]).g * 3.0;
			sampleColor += texture2D(textureUniformRGBA, blurCoordinates[23]).g * 3.0;

			sampleColor = sampleColor / 62.0;

			vec4 textureColor = vec4(texture2D(textureUniformRGBA,textureCoordinate));
			vec3 centralColor = vec3(textureColor);//texture2D(textureUniformRGBA, textureCoordinate).rgb;		

			float highpass = centralColor.g - sampleColor + 0.5;

			for(int i = 0; i < 5;i++)
			{
				highpass = hardlight(highpass);
			}
			float lumance = dot(centralColor, W);

			float alpha = pow(lumance, beauty_filter_r);
			
 			vec3 smoothColor = centralColor + (centralColor-vec3(highpass))*alpha*0.1;
 		
 
 			smoothColor.r = clamp(pow(smoothColor.r, beauty_filter_g),0.0,1.0);
 			smoothColor.g = clamp(pow(smoothColor.g, beauty_filter_g),0.0,1.0);
 			smoothColor.b = clamp(pow(smoothColor.b, beauty_filter_g),0.0,1.0);
 		
 		
 
			vec3 lvse = vec3(1.0)-(vec3(1.0)-smoothColor)*(vec3(1.0)-centralColor);
			vec3 bianliang = max(smoothColor, centralColor);
			vec3 rouguang = 2.0*centralColor*smoothColor + centralColor*centralColor - 2.0*centralColor*centralColor*smoothColor;

			gl_FragColor = vec4(mix(centralColor, lvse, alpha), 1.0);
			gl_FragColor.rgb = mix(gl_FragColor.rgb, bianliang, alpha);
			gl_FragColor.rgb = mix(gl_FragColor.rgb, rouguang, beauty_filter_b);

			vec3 satcolor = gl_FragColor.rgb * saturateMatrix;
			gl_FragColor.rgb = mix(gl_FragColor.rgb, satcolor, beauty_filter_a);
		}
		
}