#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_SpellMod.BPInvPartSet_SpellMod_C
// (None)

class UClass* UBPInvPartSet_SpellMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_SpellMod_C");

	return Clss;
}


// BPInvPartSet_SpellMod_C BPInvPartSet_SpellMod.Default__BPInvPartSet_SpellMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_SpellMod_C* UBPInvPartSet_SpellMod_C::GetDefaultObj()
{
	static class UBPInvPartSet_SpellMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_SpellMod_C*>(UBPInvPartSet_SpellMod_C::StaticClass()->DefaultObject);

	return Default;
}

}


