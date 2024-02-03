#include "pch.h"

#include "ClassLibrary1.h"
#include "../StaticLib1/framework.h"

System::String^ ClassLibrary1::Class1::bar()
{
  return gcnew System::String(get_something().c_str());
}
