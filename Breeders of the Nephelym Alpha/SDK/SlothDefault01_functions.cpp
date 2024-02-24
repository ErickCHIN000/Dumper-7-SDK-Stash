#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothDefault01.SlothDefault01_C
// (None)

class UClass* USlothDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothDefault01_C");

	return Clss;
}


// SlothDefault01_C SlothDefault01.Default__SlothDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothDefault01_C* USlothDefault01_C::GetDefaultObj()
{
	static class USlothDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothDefault01_C*>(USlothDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


