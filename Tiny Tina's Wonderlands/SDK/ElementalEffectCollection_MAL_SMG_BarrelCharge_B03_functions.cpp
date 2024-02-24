#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MAL_SMG_BarrelCharge_B03.ElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C
// (None)

class UClass* UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C");

	return Clss;
}


// ElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C ElementalEffectCollection_MAL_SMG_BarrelCharge_B03.Default__ElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C* UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C*>(UElementalEffectCollection_MAL_SMG_BarrelCharge_B03_C::StaticClass()->DefaultObject);

	return Default;
}

}


