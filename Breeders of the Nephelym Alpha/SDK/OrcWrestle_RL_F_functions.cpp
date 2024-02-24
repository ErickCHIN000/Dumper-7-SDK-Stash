#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcWrestle_RL_F.OrcWrestle_RL_F_C
// (None)

class UClass* UOrcWrestle_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcWrestle_RL_F_C");

	return Clss;
}


// OrcWrestle_RL_F_C OrcWrestle_RL_F.Default__OrcWrestle_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcWrestle_RL_F_C* UOrcWrestle_RL_F_C::GetDefaultObj()
{
	static class UOrcWrestle_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcWrestle_RL_F_C*>(UOrcWrestle_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


