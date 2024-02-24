#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_Amulet.BPInvSlot_Amulet_C
// (None)

class UClass* UBPInvSlot_Amulet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_Amulet_C");

	return Clss;
}


// BPInvSlot_Amulet_C BPInvSlot_Amulet.Default__BPInvSlot_Amulet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_Amulet_C* UBPInvSlot_Amulet_C::GetDefaultObj()
{
	static class UBPInvSlot_Amulet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_Amulet_C*>(UBPInvSlot_Amulet_C::StaticClass()->DefaultObject);

	return Default;
}

}


