#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothTentaclesSource2.SlothTentaclesSource2_C
// (None)

class UClass* USlothTentaclesSource2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothTentaclesSource2_C");

	return Clss;
}


// SlothTentaclesSource2_C SlothTentaclesSource2.Default__SlothTentaclesSource2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothTentaclesSource2_C* USlothTentaclesSource2_C::GetDefaultObj()
{
	static class USlothTentaclesSource2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothTentaclesSource2_C*>(USlothTentaclesSource2_C::StaticClass()->DefaultObject);

	return Default;
}

}


