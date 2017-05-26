//这是每个 Action Shader 都有的参数。
uniform	sampler2D   TextureRGBA;
uniform float       VertexScale;      //矩形的缩放比例，宽 / 高。
uniform	vec2        SinglePixelSize;  //单个像素在纹理矩形中的宽高。通常为 ( 1/图像宽度(像素数), 1/图像高度(像素数))。也可以把图像宽高换成渲染到屏幕的宽高。
uniform float       ActionProgress;   //动作/动画 完成的进度。值为 0 到 1。或更大。
//这是当前 Shader 专有的参数
uniform float       LimitMin;         //
uniform float       LimitMax;         //

uniform	sampler2D   TextureWipe;
//易变变量
varying vec2        vTextueCoords;      //当前的纹理坐标。
varying vec2        vVertexCoords;      //当前的顶点坐标，这是以 inVertexScale 缩放后的值。

void main() {

    vec4    texRGBA     = texture2D( TextureRGBA, vTextueCoords );
    vec4    texAlpha    = texture2D( TextureWipe, vec2(vVertexCoords.x * 0.5 + 0.5, -vVertexCoords.y * 0.5 + 0.5) );

    if ( texAlpha.r < LimitMin )
    {
        texRGBA.a   = 0.0;
    }
    else if ( texAlpha.r > LimitMax )
    {
        texRGBA.a = 1.0;
    }
    else
    {
        texRGBA.a = ( texAlpha.r - LimitMin ) / ( LimitMax - LimitMin );
    }
    gl_FragColor    = texRGBA;
}
