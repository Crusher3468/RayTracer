#pragma once
#include "Math/MathUtils.h"

struct RaycastHit
{
	float distance = 0;

	glm::vec3 point{ 0 };
	glm::vec3 normal{ 0 };

	class Material* material{ nullptr };
};

struct Ray
{
	Ray() = default;
	Ray(const glm::vec3& origin, const glm::vec3& direction) : origin{ origin }, direction{ direction } {}

	glm::vec3 getPoint(float distance) const { return origin + (direction * direction); }

	glm::vec3 origin{ 0 };
	glm::vec3 direction{ 0 };

};