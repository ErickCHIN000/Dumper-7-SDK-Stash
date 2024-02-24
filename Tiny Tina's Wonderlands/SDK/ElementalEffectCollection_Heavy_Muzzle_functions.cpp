#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Heavy_Muzzle.ElementalEffectCollection_Heavy_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_Heavy_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Heavy_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_Heavy_Muzzle_C ElementalEffectCollection_Heavy_Muzzle.Default__ElementalEffectCollection_Heavy_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Heavy_Muzzle_C* UElementalEffectCollection_Heavy_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Heavy_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Heavy_Muzzle_C*>(UElementalEffectCollection_Heavy_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


