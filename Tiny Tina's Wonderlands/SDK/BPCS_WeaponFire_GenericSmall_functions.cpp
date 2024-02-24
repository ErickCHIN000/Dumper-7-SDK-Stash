#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_WeaponFire_GenericSmall.BPCS_WeaponFire_GenericSmall_C
// (None)

class UClass* UBPCS_WeaponFire_GenericSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_WeaponFire_GenericSmall_C");

	return Clss;
}


// BPCS_WeaponFire_GenericSmall_C BPCS_WeaponFire_GenericSmall.Default__BPCS_WeaponFire_GenericSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_WeaponFire_GenericSmall_C* UBPCS_WeaponFire_GenericSmall_C::GetDefaultObj()
{
	static class UBPCS_WeaponFire_GenericSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_WeaponFire_GenericSmall_C*>(UBPCS_WeaponFire_GenericSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


