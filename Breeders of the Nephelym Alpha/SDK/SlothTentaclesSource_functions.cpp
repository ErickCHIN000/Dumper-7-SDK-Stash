#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothTentaclesSource.SlothTentaclesSource_C
// (None)

class UClass* USlothTentaclesSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothTentaclesSource_C");

	return Clss;
}


// SlothTentaclesSource_C SlothTentaclesSource.Default__SlothTentaclesSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothTentaclesSource_C* USlothTentaclesSource_C::GetDefaultObj()
{
	static class USlothTentaclesSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothTentaclesSource_C*>(USlothTentaclesSource_C::StaticClass()->DefaultObject);

	return Default;
}

}


