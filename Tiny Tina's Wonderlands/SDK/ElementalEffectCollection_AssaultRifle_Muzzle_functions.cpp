#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_AssaultRifle_Muzzle.ElementalEffectCollection_AssaultRifle_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_AssaultRifle_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_AssaultRifle_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_AssaultRifle_Muzzle_C ElementalEffectCollection_AssaultRifle_Muzzle.Default__ElementalEffectCollection_AssaultRifle_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_AssaultRifle_Muzzle_C* UElementalEffectCollection_AssaultRifle_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_AssaultRifle_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_AssaultRifle_Muzzle_C*>(UElementalEffectCollection_AssaultRifle_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


