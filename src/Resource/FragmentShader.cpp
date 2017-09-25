
// STL
#include <fstream>
#include <sstream>
#include <streambuf>

// lib
#include <Common/Json.hpp>

// Mine
#include <Resource/FragmentShader.hpp>
#include <Resource/ShaderFactory.hpp>

namespace jerobins {
  namespace resource {

    FragmentShader::FragmentShader(std::string name, std::string description, std::string version, std::string contents) {
      
    }

    bool FragmentShader::Compile() {
      return compile(GL_FRAGMENT_SHADER);      
    }

    FragmentShader FragmentShader::Load(std::string filename) {
      return ShaderFactory::LoadShader<FragmentShader>(filename);
    }
    
  }
}