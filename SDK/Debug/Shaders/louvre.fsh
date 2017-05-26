//这是每个 Action Shader 都有的参数。
uniform	sampler2D   TextureRGBA;
uniform float       VertexScale;      //矩形的缩放比例，宽 / 高。
uniform	vec2        SinglePixelSize;  //单个像素在纹理矩形中的宽高。通常为 ( 1/图像宽度(像素数), 1/图像高度(像素数))。也可以把图像宽高换成渲染到屏幕的宽高。
uniform float       ActionProgress;   //动作/动画 完成的进度。值为 0 到 1。
//这是当前 Shader 专有的参数
uniform float       CellSize;         //百页窗的大小，0 到 1
uniform float       ActionAngle;      //动作的角度。值为 0 到 360。
uniform bool        IsStepByStep;     //渐进的，百页窗从第一页到到后一页逐渐增加翻转角度。
uniform bool        IsFullFilp;       //完全翻转，需要第二纹理。
uniform	sampler2D   TextureRGBA2;
//易变变量
varying vec2        vTextueCoords;      //当前的纹理坐标。
varying vec2        vVertexCoords;      //当前的顶点坐标，这是以 inVertexScale 缩放后的值。

vec4 vColorRGBA;
void main() {

    vec2    texCoords       = vTextueCoords;
    float   fDoneProgress   = ActionProgress;
    float   fDoneProgress2  = 0.0;

    float   fCellIndex      = floor( vTextueCoords.y / CellSize );
    float   fCellOffset     = mod( vTextueCoords.y, CellSize ) / CellSize;

    if ( IsStepByStep )
    {
        //fDoneProgress   = 0.9;


        fDoneProgress   = ( ActionProgress - 0.5 ) * 3.6;

        fDoneProgress   = mix( max( fDoneProgress - 0.8, -1.0 ), min( fDoneProgress + 0.8, 1.0 ), ( fCellIndex + 1.0 ) * CellSize );


        //if ( fDoneProgress < 0.0 )
        //{
        //    fDoneProgress   = ( 1.0 + fDoneProgress ) * ( fCellIndex + 1.0 ) * CellSize - 1.0;
        //}
        //else if ( fDoneProgress > 1.0 )
        //{
        //    fDoneProgress   = ( 2.0 - fDoneProgress ) * ( fCellIndex + 1.0 ) * CellSize + ( fDoneProgress - 1.0 );
        //}
        //else
        //{
        //    fDoneProgress   = ( fDoneProgress ) - ( 1.0 - ( fCellIndex + 1.0 ) * CellSize );
        //}
        //fDoneProgress   = ( fCellIndex + 1.0 ) * CellSize * vTextueCoords.y + fDoneProgress;// + ( 1.0 - vTextueCoords.y ) * 0.4;

    }
    fDoneProgress2  = ( 1.0 - abs(fDoneProgress) );

   // fDoneProgress   = ( fCellIndex + 1.0 ) / 4.0 * fDoneProgress * 2.0 - 1.0;

    //fCellOffset = ( 1.0 - fCellOffset);

    float   fScaleY     = ( fCellOffset - 0.5 ) / abs( fDoneProgress );

    if ( fScaleY < -0.5 || fScaleY > 0.5 ) discard;
    texCoords.y = ( fCellIndex + 0.5 + fScaleY ) * CellSize;
    float   fScaleX     = ( CellSize * 4.0 * fDoneProgress2 / VertexScale ) / fDoneProgress;
    float   fOffsetX    = ( 1.0 - fScaleX ) + fCellOffset * fScaleX + ( fScaleX * 0.5 );

    texCoords.x = (vTextueCoords.x - 0.5) / fOffsetX + 0.5;
    if ( texCoords.x < 0.0 || texCoords.x > 1.0 )
        discard;
    vColorRGBA      = vec4( texture2D( fDoneProgress < 0.0 ? TextureRGBA : TextureRGBA2, texCoords) );

    gl_FragColor    = vColorRGBA;
}
