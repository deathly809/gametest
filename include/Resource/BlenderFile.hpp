
#ifndef _BLENDERFILE_HPP_
#define _BLENDERFILE_HPP_

#include <string>

namespace jerobins {
    namespace resource {

        enum Endianess { BigEndian , LittleEndian };
        class BlenderFile {
        public:

            int PointerSize;
			Endianess WordEndianess;
            std::string Version;
        };
    }
}

#endif