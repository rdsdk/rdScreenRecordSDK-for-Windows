#version 330
attribute vec4 in_position;

attribute vec2 inputTextureCoordinate;

varying vec2 textureCoordinate;
void main()
{

	gl_Position = in_position;

	textureCoordinate = inputTextureCoordinate;

}
 