#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStop.SlothStop_C
// (None)

class UClass* USlothStop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStop_C");

	return Clss;
}


// SlothStop_C SlothStop.Default__SlothStop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStop_C* USlothStop_C::GetDefaultObj()
{
	static class USlothStop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStop_C*>(USlothStop_C::StaticClass()->DefaultObject);

	return Default;
}

}


