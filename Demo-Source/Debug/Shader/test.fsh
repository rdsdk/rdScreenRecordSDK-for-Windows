#version 330 core
uniform sampler2D tex;
in vec2 vs_tex_coord;
layout(location = 0) out vec4 fColor;
void main() {
	vec4 c = texture( tex,vs_tex_coord );
	fColor = vec4( floor(c.r*8)/8, floor(c.g*8)/8, floor(c.b*8)/8, c.a );
};