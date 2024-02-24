#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake.ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C
// (None)

class UClass* UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C");

	return Clss;
}


// ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake.Default__ElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C* UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C::GetDefaultObj()
{
	static class UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C*>(UElementalEffectCollection_VLA_Barrel_02_B_MuzzleBrake_C::StaticClass()->DefaultObject);

	return Default;
}

}


