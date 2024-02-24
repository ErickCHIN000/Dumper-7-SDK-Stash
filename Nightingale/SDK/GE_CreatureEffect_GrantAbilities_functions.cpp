#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureEffect_GrantAbilities.GE_CreatureEffect_GrantAbilities_C
// (None)

class UClass* UGE_CreatureEffect_GrantAbilities_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureEffect_GrantAbilities_C");

	return Clss;
}


// GE_CreatureEffect_GrantAbilities_C GE_CreatureEffect_GrantAbilities.Default__GE_CreatureEffect_GrantAbilities_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureEffect_GrantAbilities_C* UGE_CreatureEffect_GrantAbilities_C::GetDefaultObj()
{
	static class UGE_CreatureEffect_GrantAbilities_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureEffect_GrantAbilities_C*>(UGE_CreatureEffect_GrantAbilities_C::StaticClass()->DefaultObject);

	return Default;
}

}


