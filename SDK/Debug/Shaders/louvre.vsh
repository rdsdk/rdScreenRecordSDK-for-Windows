uniform     float   VertexScale;
attribute   vec4    vVerCoordsIn;
attribute   vec2    vTexCoordsIn;
varying     vec2    vTextueCoords;
varying     vec2    vVertexCoords;
void main() {
        vTextueCoords   = vTexCoordsIn;
        vVertexCoords   = gl_Vertex.xy;
        if ( VertexScale > 1.0 )
            vVertexCoords.x *= VertexScale;
        else
            vVertexCoords.y /= VertexScale;
        gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}
