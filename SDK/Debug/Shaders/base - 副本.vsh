attribute vec4  vVerCoordsIn;
attribute vec2  vTexCoordsIn;
varying   vec2  vTexCoords;
void main() {
	vTexCoords = vTexCoordsIn;
	gl_Position = vVerCoordsIn;//gl_Vertex;
}
