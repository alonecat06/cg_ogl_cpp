#version 330

layout (location = 0) in vec3 pos;

uniform mat4 model;
uniform mat4 directionalLightTransform; // projection * view of light source

void main()
{
	gl_Position = directionalLightTransform * model * vec4(pos, 1.0);
}