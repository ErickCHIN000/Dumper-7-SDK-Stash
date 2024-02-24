#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_BaseShield.BPInvSlot_BaseShield_C
// (None)

class UClass* UBPInvSlot_BaseShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_BaseShield_C");

	return Clss;
}


// BPInvSlot_BaseShield_C BPInvSlot_BaseShield.Default__BPInvSlot_BaseShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_BaseShield_C* UBPInvSlot_BaseShield_C::GetDefaultObj()
{
	static class UBPInvSlot_BaseShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_BaseShield_C*>(UBPInvSlot_BaseShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


