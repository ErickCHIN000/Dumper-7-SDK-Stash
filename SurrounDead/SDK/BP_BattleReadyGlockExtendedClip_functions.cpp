#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockExtendedClip.BP_BattleReadyGlockExtendedClip_C
// (Actor)

class UClass* ABP_BattleReadyGlockExtendedClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockExtendedClip_C");

	return Clss;
}


// BP_BattleReadyGlockExtendedClip_C BP_BattleReadyGlockExtendedClip.Default__BP_BattleReadyGlockExtendedClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockExtendedClip_C* ABP_BattleReadyGlockExtendedClip_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockExtendedClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockExtendedClip_C*>(ABP_BattleReadyGlockExtendedClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


