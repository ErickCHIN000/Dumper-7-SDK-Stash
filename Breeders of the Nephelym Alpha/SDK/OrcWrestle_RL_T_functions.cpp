#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcWrestle_RL_T.OrcWrestle_RL_T_C
// (None)

class UClass* UOrcWrestle_RL_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcWrestle_RL_T_C");

	return Clss;
}


// OrcWrestle_RL_T_C OrcWrestle_RL_T.Default__OrcWrestle_RL_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcWrestle_RL_T_C* UOrcWrestle_RL_T_C::GetDefaultObj()
{
	static class UOrcWrestle_RL_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcWrestle_RL_T_C*>(UOrcWrestle_RL_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


