#version 330 core
layout(location = 0) in vec4 in_position;
layout(location = 1) in vec2 in_tex_coord;
out vec2 vs_tex_coord;
void main() {
	gl_Position.x = in_position.x;
	gl_Position.y = in_position.y;
	vs_tex_coord.x = in_tex_coord.x;
	vs_tex_coord.y = in_tex_coord.y;
};
