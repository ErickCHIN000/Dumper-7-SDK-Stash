#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_BaseWeapon.BPInvSlot_BaseWeapon_C
// (None)

class UClass* UBPInvSlot_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_BaseWeapon_C");

	return Clss;
}


// BPInvSlot_BaseWeapon_C BPInvSlot_BaseWeapon.Default__BPInvSlot_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_BaseWeapon_C* UBPInvSlot_BaseWeapon_C::GetDefaultObj()
{
	static class UBPInvSlot_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_BaseWeapon_C*>(UBPInvSlot_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


