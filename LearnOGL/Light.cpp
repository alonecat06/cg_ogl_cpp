#include "Light.h"



Light::Light()
{
	colour = glm::vec3(1.0f, 1.0f, 1.0f);
	ambinentIntensity = 1.0f;
	diffuseIntensity = 0.0f;

}

Light::Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity)
{
	colour = glm::vec3(red, green, blue);
	ambinentIntensity = aIntensity;
	diffuseIntensity = dIntensity;
}

Light::~Light()
{
}
