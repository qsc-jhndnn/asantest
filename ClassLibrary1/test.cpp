#include "pch.h"
#include "test.h"
#include "../StaticLib1/framework.h"
namespace ClassLibrary1
{
  System::String^ Foo::Bar()
  {
    return gcnew System::String(get_something().c_str());
  }
}
