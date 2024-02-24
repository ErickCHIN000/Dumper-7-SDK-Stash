#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeaponAimAssist.BP_RangedWeaponAimAssist_C
// (None)

class UClass* UBP_RangedWeaponAimAssist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeaponAimAssist_C");

	return Clss;
}


// BP_RangedWeaponAimAssist_C BP_RangedWeaponAimAssist.Default__BP_RangedWeaponAimAssist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RangedWeaponAimAssist_C* UBP_RangedWeaponAimAssist_C::GetDefaultObj()
{
	static class UBP_RangedWeaponAimAssist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RangedWeaponAimAssist_C*>(UBP_RangedWeaponAimAssist_C::StaticClass()->DefaultObject);

	return Default;
}

}


