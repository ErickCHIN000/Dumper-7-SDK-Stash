#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Spell.BPInv_Spell_C
// (None)

class UClass* UBPInv_Spell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Spell_C");

	return Clss;
}


// BPInv_Spell_C BPInv_Spell.Default__BPInv_Spell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Spell_C* UBPInv_Spell_C::GetDefaultObj()
{
	static class UBPInv_Spell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Spell_C*>(UBPInv_Spell_C::StaticClass()->DefaultObject);

	return Default;
}

}


