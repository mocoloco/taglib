#include <tbytevectorstream.h>
#include <tbytevector.h>
#include <tfile.h>

namespace TagLib {

    class NamedByteVectorStream : public ByteVectorStream {
      public:
        FileName fileName;
        FileName name() const;
        NamedByteVectorStream(const ByteVector &data, FileName fileName) : ByteVectorStream(data), fileName(fileName) {}
    };
}
