#version 330
attribute vec4 in_position;
attribute vec2 in_tex_coord;
varying vec2 vs_tex_coord;
void main() {
	gl_Position = in_position;
	vs_tex_coord = in_tex_coord;
};
