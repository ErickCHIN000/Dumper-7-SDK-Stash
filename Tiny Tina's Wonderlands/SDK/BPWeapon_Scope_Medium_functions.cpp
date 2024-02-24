#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeapon_Scope_Medium.BPWeapon_Scope_Medium_C
// (None)

class UClass* UBPWeapon_Scope_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeapon_Scope_Medium_C");

	return Clss;
}


// BPWeapon_Scope_Medium_C BPWeapon_Scope_Medium.Default__BPWeapon_Scope_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeapon_Scope_Medium_C* UBPWeapon_Scope_Medium_C::GetDefaultObj()
{
	static class UBPWeapon_Scope_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeapon_Scope_Medium_C*>(UBPWeapon_Scope_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


