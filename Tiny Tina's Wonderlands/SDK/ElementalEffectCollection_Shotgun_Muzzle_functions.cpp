#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Shotgun_Muzzle.ElementalEffectCollection_Shotgun_Muzzle_C
// (None)

class UClass* UElementalEffectCollection_Shotgun_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Shotgun_Muzzle_C");

	return Clss;
}


// ElementalEffectCollection_Shotgun_Muzzle_C ElementalEffectCollection_Shotgun_Muzzle.Default__ElementalEffectCollection_Shotgun_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Shotgun_Muzzle_C* UElementalEffectCollection_Shotgun_Muzzle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Shotgun_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Shotgun_Muzzle_C*>(UElementalEffectCollection_Shotgun_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


