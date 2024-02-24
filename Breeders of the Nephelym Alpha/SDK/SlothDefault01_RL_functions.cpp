#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothDefault01_RL.SlothDefault01_RL_C
// (None)

class UClass* USlothDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothDefault01_RL_C");

	return Clss;
}


// SlothDefault01_RL_C SlothDefault01_RL.Default__SlothDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothDefault01_RL_C* USlothDefault01_RL_C::GetDefaultObj()
{
	static class USlothDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothDefault01_RL_C*>(USlothDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


