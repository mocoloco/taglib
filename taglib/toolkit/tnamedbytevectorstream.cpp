#include <tfile.h>
#include <tnamedbytevectorstream.h>

using namespace TagLib;

FileName NamedByteVectorStream::name() const
{
  return fileName;
}