#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStopTentacles.SlothStopTentacles_C
// (None)

class UClass* USlothStopTentacles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStopTentacles_C");

	return Clss;
}


// SlothStopTentacles_C SlothStopTentacles.Default__SlothStopTentacles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStopTentacles_C* USlothStopTentacles_C::GetDefaultObj()
{
	static class USlothStopTentacles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStopTentacles_C*>(USlothStopTentacles_C::StaticClass()->DefaultObject);

	return Default;
}

}


