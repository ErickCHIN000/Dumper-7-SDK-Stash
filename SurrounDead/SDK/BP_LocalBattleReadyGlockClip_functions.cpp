#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockClip.BP_LocalBattleReadyGlockClip_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockClip_C");

	return Clss;
}


// BP_LocalBattleReadyGlockClip_C BP_LocalBattleReadyGlockClip.Default__BP_LocalBattleReadyGlockClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockClip_C* ABP_LocalBattleReadyGlockClip_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockClip_C*>(ABP_LocalBattleReadyGlockClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


