#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockExtendedClip.BP_LocalBattleReadyGlockExtendedClip_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockExtendedClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockExtendedClip_C");

	return Clss;
}


// BP_LocalBattleReadyGlockExtendedClip_C BP_LocalBattleReadyGlockExtendedClip.Default__BP_LocalBattleReadyGlockExtendedClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockExtendedClip_C* ABP_LocalBattleReadyGlockExtendedClip_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockExtendedClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockExtendedClip_C*>(ABP_LocalBattleReadyGlockExtendedClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


