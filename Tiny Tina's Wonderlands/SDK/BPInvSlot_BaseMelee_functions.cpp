#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_BaseMelee.BPInvSlot_BaseMelee_C
// (None)

class UClass* UBPInvSlot_BaseMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_BaseMelee_C");

	return Clss;
}


// BPInvSlot_BaseMelee_C BPInvSlot_BaseMelee.Default__BPInvSlot_BaseMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_BaseMelee_C* UBPInvSlot_BaseMelee_C::GetDefaultObj()
{
	static class UBPInvSlot_BaseMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_BaseMelee_C*>(UBPInvSlot_BaseMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


