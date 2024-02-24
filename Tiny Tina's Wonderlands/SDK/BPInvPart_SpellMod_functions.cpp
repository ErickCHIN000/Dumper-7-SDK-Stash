#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_SpellMod.BPInvPart_SpellMod_C
// (None)

class UClass* UBPInvPart_SpellMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_SpellMod_C");

	return Clss;
}


// BPInvPart_SpellMod_C BPInvPart_SpellMod.Default__BPInvPart_SpellMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_SpellMod_C* UBPInvPart_SpellMod_C::GetDefaultObj()
{
	static class UBPInvPart_SpellMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_SpellMod_C*>(UBPInvPart_SpellMod_C::StaticClass()->DefaultObject);

	return Default;
}

}


