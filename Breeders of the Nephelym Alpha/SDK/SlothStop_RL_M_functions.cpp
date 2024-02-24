#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStop_RL_M.SlothStop_RL_M_C
// (None)

class UClass* USlothStop_RL_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStop_RL_M_C");

	return Clss;
}


// SlothStop_RL_M_C SlothStop_RL_M.Default__SlothStop_RL_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStop_RL_M_C* USlothStop_RL_M_C::GetDefaultObj()
{
	static class USlothStop_RL_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStop_RL_M_C*>(USlothStop_RL_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


