#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Weapon.BPInv_Weapon_C
// (None)

class UClass* UBPInv_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Weapon_C");

	return Clss;
}


// BPInv_Weapon_C BPInv_Weapon.Default__BPInv_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Weapon_C* UBPInv_Weapon_C::GetDefaultObj()
{
	static class UBPInv_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Weapon_C*>(UBPInv_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


