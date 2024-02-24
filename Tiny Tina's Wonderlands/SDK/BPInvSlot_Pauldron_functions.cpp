#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_Pauldron.BPInvSlot_Pauldron_C
// (None)

class UClass* UBPInvSlot_Pauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_Pauldron_C");

	return Clss;
}


// BPInvSlot_Pauldron_C BPInvSlot_Pauldron.Default__BPInvSlot_Pauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_Pauldron_C* UBPInvSlot_Pauldron_C::GetDefaultObj()
{
	static class UBPInvSlot_Pauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_Pauldron_C*>(UBPInvSlot_Pauldron_C::StaticClass()->DefaultObject);

	return Default;
}

}


