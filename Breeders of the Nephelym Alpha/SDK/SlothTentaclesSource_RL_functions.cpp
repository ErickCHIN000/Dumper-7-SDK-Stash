#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothTentaclesSource_RL.SlothTentaclesSource_RL_C
// (None)

class UClass* USlothTentaclesSource_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothTentaclesSource_RL_C");

	return Clss;
}


// SlothTentaclesSource_RL_C SlothTentaclesSource_RL.Default__SlothTentaclesSource_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothTentaclesSource_RL_C* USlothTentaclesSource_RL_C::GetDefaultObj()
{
	static class USlothTentaclesSource_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothTentaclesSource_RL_C*>(USlothTentaclesSource_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


