#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_WeaponFire_SR.BPCS_WeaponFire_SR_C
// (None)

class UClass* UBPCS_WeaponFire_SR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_WeaponFire_SR_C");

	return Clss;
}


// BPCS_WeaponFire_SR_C BPCS_WeaponFire_SR.Default__BPCS_WeaponFire_SR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_WeaponFire_SR_C* UBPCS_WeaponFire_SR_C::GetDefaultObj()
{
	static class UBPCS_WeaponFire_SR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_WeaponFire_SR_C*>(UBPCS_WeaponFire_SR_C::StaticClass()->DefaultObject);

	return Default;
}

}


