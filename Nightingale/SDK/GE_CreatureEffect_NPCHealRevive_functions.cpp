#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureEffect_NPCHealRevive.GE_CreatureEffect_NPCHealRevive_C
// (None)

class UClass* UGE_CreatureEffect_NPCHealRevive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureEffect_NPCHealRevive_C");

	return Clss;
}


// GE_CreatureEffect_NPCHealRevive_C GE_CreatureEffect_NPCHealRevive.Default__GE_CreatureEffect_NPCHealRevive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureEffect_NPCHealRevive_C* UGE_CreatureEffect_NPCHealRevive_C::GetDefaultObj()
{
	static class UGE_CreatureEffect_NPCHealRevive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureEffect_NPCHealRevive_C*>(UGE_CreatureEffect_NPCHealRevive_C::StaticClass()->DefaultObject);

	return Default;
}

}


