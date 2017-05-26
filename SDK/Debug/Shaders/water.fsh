//这是每个 Action Shader 都有的参数。
uniform	sampler2D   TextureRGBA;
uniform float       VertexScale;      //矩形的缩放比例，宽 / 高。
uniform	vec2        SinglePixelSize;  //单个像素在纹理矩形中的宽高。通常为 ( 1/图像宽度(像素数), 1/图像高度(像素数))。也可以把图像宽高换成渲染到屏幕的宽高。
uniform float       ActionProgress;   //动作/动画 完成的进度。值为 0 到 1。或更大。
//这是当前 Shader 专有的参数
uniform int         PeriodCount;      //周期的数量。
uniform float       Oscillation;      //振动的幅度。值为 0 到 1 或更大。
uniform float       OffsetCount;      //移动的周期数量。

uniform	sampler2D   TextureRGBA2;
//易变变量
varying vec2        vTextueCoords;      //当前的纹理坐标。
varying vec2        vVertexCoords;      //当前的顶点坐标，这是以 inVertexScale 缩放后的值。

void main() {

    vec2    texCoords       = vTextueCoords;
    float   fPeriodCount    = float(PeriodCount);
    texCoords.x     += sin( ( vVertexCoords.y * fPeriodCount + OffsetCount ) * 3.1415926 )
                            * Oscillation * 0.25 / fPeriodCount;
    texCoords.y     += sin( ( ( vVertexCoords.x + vVertexCoords.y * 0.5 ) * fPeriodCount + OffsetCount ) * 3.1415926 )
                            * Oscillation * ( vVertexCoords.y + 1.0 ) * 0.25 / fPeriodCount;
    texCoords.y     += sin( ( ( vVertexCoords.x + vVertexCoords.y * 0.5 ) * fPeriodCount * 0.5 + OffsetCount ) * 3.1415926 )
                            * Oscillation * ( 1.0 - vVertexCoords.y ) * 0.25 / fPeriodCount;
    gl_FragColor    = mix( texture2D( TextureRGBA, texCoords), texture2D( TextureRGBA2, texCoords), ActionProgress );
}
