#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponChargeComponent_MAL.BPWeaponChargeComponent_MAL_C
// (None)

class UClass* UBPWeaponChargeComponent_MAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponChargeComponent_MAL_C");

	return Clss;
}


// BPWeaponChargeComponent_MAL_C BPWeaponChargeComponent_MAL.Default__BPWeaponChargeComponent_MAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponChargeComponent_MAL_C* UBPWeaponChargeComponent_MAL_C::GetDefaultObj()
{
	static class UBPWeaponChargeComponent_MAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponChargeComponent_MAL_C*>(UBPWeaponChargeComponent_MAL_C::StaticClass()->DefaultObject);

	return Default;
}

}


