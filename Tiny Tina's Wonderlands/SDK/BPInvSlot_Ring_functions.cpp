#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_Ring.BPInvSlot_Ring_C
// (None)

class UClass* UBPInvSlot_Ring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_Ring_C");

	return Clss;
}


// BPInvSlot_Ring_C BPInvSlot_Ring.Default__BPInvSlot_Ring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_Ring_C* UBPInvSlot_Ring_C::GetDefaultObj()
{
	static class UBPInvSlot_Ring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_Ring_C*>(UBPInvSlot_Ring_C::StaticClass()->DefaultObject);

	return Default;
}

}


