#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStartTentacles.SlothStartTentacles_C
// (None)

class UClass* USlothStartTentacles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStartTentacles_C");

	return Clss;
}


// SlothStartTentacles_C SlothStartTentacles.Default__SlothStartTentacles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStartTentacles_C* USlothStartTentacles_C::GetDefaultObj()
{
	static class USlothStartTentacles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStartTentacles_C*>(USlothStartTentacles_C::StaticClass()->DefaultObject);

	return Default;
}

}


