#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcWrestle_RL_M.OrcWrestle_RL_M_C
// (None)

class UClass* UOrcWrestle_RL_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcWrestle_RL_M_C");

	return Clss;
}


// OrcWrestle_RL_M_C OrcWrestle_RL_M.Default__OrcWrestle_RL_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcWrestle_RL_M_C* UOrcWrestle_RL_M_C::GetDefaultObj()
{
	static class UOrcWrestle_RL_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcWrestle_RL_M_C*>(UOrcWrestle_RL_M_C::StaticClass()->DefaultObject);

	return Default;
}

}


