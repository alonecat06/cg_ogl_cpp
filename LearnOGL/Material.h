#pragma once

#include <GL\glew.h>

class Material
{
public:
	Material();
	Material(GLfloat sIntensity, GLfloat shine);

	void UseMaterial(GLint specularIntensityLocation, GLint shininessLocation);

	~Material();

private:
	GLfloat specularIntensity;
	GLfloat shininess;

};

