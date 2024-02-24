#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlothStop_RL_F.SlothStop_RL_F_C
// (None)

class UClass* USlothStop_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlothStop_RL_F_C");

	return Clss;
}


// SlothStop_RL_F_C SlothStop_RL_F.Default__SlothStop_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlothStop_RL_F_C* USlothStop_RL_F_C::GetDefaultObj()
{
	static class USlothStop_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlothStop_RL_F_C*>(USlothStop_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


