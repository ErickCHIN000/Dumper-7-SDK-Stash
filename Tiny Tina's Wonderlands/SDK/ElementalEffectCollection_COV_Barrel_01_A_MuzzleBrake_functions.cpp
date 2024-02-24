#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake.ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C
// (None)

class UClass* UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C");

	return Clss;
}


// ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake.Default__ElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C* UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C::GetDefaultObj()
{
	static class UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C*>(UElementalEffectCollection_COV_Barrel_01_A_MuzzleBrake_C::StaticClass()->DefaultObject);

	return Default;
}

}


