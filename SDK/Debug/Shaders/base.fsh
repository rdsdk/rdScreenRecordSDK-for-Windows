uniform sampler2D   TextureRGBA;
uniform     bool    IsOnlyDrawOrg;
uniform     float   Transparency;	//透明度：0~1
varying     vec2    vTextueCoords;
varying     vec2    vVertexCoords;

vec4 vColorRGBA;
void ChangByHSV();

void main() {
    if ( IsOnlyDrawOrg )
    {
        gl_FragColor    = vec4( texture2D(TextureRGBA, vTextueCoords) );
    }
    else
    {
        vColorRGBA      = vec4( texture2D(TextureRGBA, vTextueCoords) );
        ChangByHSV();
        vColorRGBA.a    *= ( 1.0 - Transparency );
        gl_FragColor    = vColorRGBA;
    }
}

