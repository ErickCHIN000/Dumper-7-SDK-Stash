#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStop_RL_T.SlothStop_RL_T_C
// (None)

class UClass* USlothStop_RL_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStop_RL_T_C");

	return Clss;
}


// SlothStop_RL_T_C SlothStop_RL_T.Default__SlothStop_RL_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStop_RL_T_C* USlothStop_RL_T_C::GetDefaultObj()
{
	static class USlothStop_RL_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStop_RL_T_C*>(USlothStop_RL_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


