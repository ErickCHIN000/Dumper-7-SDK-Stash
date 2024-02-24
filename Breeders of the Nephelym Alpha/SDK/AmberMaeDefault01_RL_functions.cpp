#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDefault01_RL.AmberMaeDefault01_RL_C
// (None)

class UClass* UAmberMaeDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDefault01_RL_C");

	return Clss;
}


// AmberMaeDefault01_RL_C AmberMaeDefault01_RL.Default__AmberMaeDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDefault01_RL_C* UAmberMaeDefault01_RL_C::GetDefaultObj()
{
	static class UAmberMaeDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDefault01_RL_C*>(UAmberMaeDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


