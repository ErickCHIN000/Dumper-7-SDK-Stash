#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Pistol_Muzzle.ElementalEffectCollection_Pistol_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_Pistol_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Pistol_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_Pistol_Muzzle_C ElementalEffectCollection_Pistol_Muzzle.Default__ElementalEffectCollection_Pistol_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Pistol_Muzzle_C* UElementalEffectCollection_Pistol_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Pistol_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Pistol_Muzzle_C*>(UElementalEffectCollection_Pistol_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


