#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvSlot_BaseSpellMod.BPInvSlot_BaseSpellMod_C
// (None)

class UClass* UBPInvSlot_BaseSpellMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvSlot_BaseSpellMod_C");

	return Clss;
}


// BPInvSlot_BaseSpellMod_C BPInvSlot_BaseSpellMod.Default__BPInvSlot_BaseSpellMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvSlot_BaseSpellMod_C* UBPInvSlot_BaseSpellMod_C::GetDefaultObj()
{
	static class UBPInvSlot_BaseSpellMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvSlot_BaseSpellMod_C*>(UBPInvSlot_BaseSpellMod_C::StaticClass()->DefaultObject);

	return Default;
}

}


