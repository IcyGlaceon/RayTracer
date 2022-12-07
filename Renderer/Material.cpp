#include "Material.h"

bool Lambertian::Scatter(const Ray& ray, const RaycastHit& hit, color3& attenuation, Ray& scattered) const
{
    glm::vec3 direciton = glm::normalize(hit.normal + randomInUnitSphere());
    scattered = { hit.point, direciton };
    attenuation = m_albedo;

    return true;
}
