#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangedWeaponHomingComponent.BP_RangedWeaponHomingComponent_C
// (None)

class UClass* UBP_RangedWeaponHomingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangedWeaponHomingComponent_C");

	return Clss;
}


// BP_RangedWeaponHomingComponent_C BP_RangedWeaponHomingComponent.Default__BP_RangedWeaponHomingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RangedWeaponHomingComponent_C* UBP_RangedWeaponHomingComponent_C::GetDefaultObj()
{
	static class UBP_RangedWeaponHomingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RangedWeaponHomingComponent_C*>(UBP_RangedWeaponHomingComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


