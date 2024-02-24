#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureEffect_NPCHeal.GE_CreatureEffect_NPCHeal_C
// (None)

class UClass* UGE_CreatureEffect_NPCHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureEffect_NPCHeal_C");

	return Clss;
}


// GE_CreatureEffect_NPCHeal_C GE_CreatureEffect_NPCHeal.Default__GE_CreatureEffect_NPCHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureEffect_NPCHeal_C* UGE_CreatureEffect_NPCHeal_C::GetDefaultObj()
{
	static class UGE_CreatureEffect_NPCHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureEffect_NPCHeal_C*>(UGE_CreatureEffect_NPCHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


