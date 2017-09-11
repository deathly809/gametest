
#ifndef _SPHERE_HPP_
#define _SPHERE_HPP_

#include <vector>

#include <Render/IRenderable.hpp>

namespace jerobins {
  namespace render {
    class Sphere : public IRenderable {
    public:
      // Construct a new spehere
      Sphere(float radius, size_t subdivisions);

      // Raw underlying data
      virtual const float *Data() const = 0;
      virtual size_t DataCount() const = 0;

      // Indices, if specified, null if not.
      virtual const size_t *Indices() const = 0;
      virtual size_t IndicesCount() const = 0;

      // The structure of the data
      virtual RenderType Type() const = 0;

    private:
      std::vector<float> data;
      std::vector<size_t> indices;
    };
  }
}

#endif