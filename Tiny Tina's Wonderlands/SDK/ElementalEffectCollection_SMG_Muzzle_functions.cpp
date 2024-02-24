#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_SMG_Muzzle.ElementalEffectCollection_SMG_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_SMG_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_SMG_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_SMG_Muzzle_C ElementalEffectCollection_SMG_Muzzle.Default__ElementalEffectCollection_SMG_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_SMG_Muzzle_C* UElementalEffectCollection_SMG_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_SMG_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_SMG_Muzzle_C*>(UElementalEffectCollection_SMG_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


