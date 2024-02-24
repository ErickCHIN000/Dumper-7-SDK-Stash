#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Sniper_Muzzle.ElementalEffectCollection_Sniper_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_Sniper_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Sniper_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_Sniper_Muzzle_C ElementalEffectCollection_Sniper_Muzzle.Default__ElementalEffectCollection_Sniper_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Sniper_Muzzle_C* UElementalEffectCollection_Sniper_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Sniper_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Sniper_Muzzle_C*>(UElementalEffectCollection_Sniper_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


