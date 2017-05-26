uniform	sampler2D	tex;
varying	vec2		vTexCoords;

vec4	vColorRGBA;
uniform	float		fTransparency;	//Í¸Ã÷¶È£º0~1

void ChangByHSV();

void main() {
	vColorRGBA = vec4( texture2D(tex, vTexCoords) );
	ChangByHSV();
	vColorRGBA.a	*= ( 1.0 - fTransparency );
	gl_FragColor	= vColorRGBA;
}

