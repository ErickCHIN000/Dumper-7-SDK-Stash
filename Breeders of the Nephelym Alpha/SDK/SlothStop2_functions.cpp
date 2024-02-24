#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStop2.SlothStop2_C
// (None)

class UClass* USlothStop2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStop2_C");

	return Clss;
}


// SlothStop2_C SlothStop2.Default__SlothStop2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStop2_C* USlothStop2_C::GetDefaultObj()
{
	static class USlothStop2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStop2_C*>(USlothStop2_C::StaticClass()->DefaultObject);

	return Default;
}

}


