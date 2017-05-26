uniform     float   VertexScale;
attribute   vec4    vVerCoordsIn;
attribute   vec2    vTexCoordsIn;
varying     vec2    vTextueCoords;
varying     vec2    vVertexCoords;
void main() {
        vTextueCoords   = vTexCoordsIn;
        vVertexCoords   = gl_Vertex.xy;

        gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
}
