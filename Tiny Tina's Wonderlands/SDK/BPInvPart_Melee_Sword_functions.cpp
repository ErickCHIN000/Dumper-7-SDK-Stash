#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Melee_Sword.BPInvPart_Melee_Sword_C
// (None)

class UClass* UBPInvPart_Melee_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Melee_Sword_C");

	return Clss;
}


// BPInvPart_Melee_Sword_C BPInvPart_Melee_Sword.Default__BPInvPart_Melee_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Melee_Sword_C* UBPInvPart_Melee_Sword_C::GetDefaultObj()
{
	static class UBPInvPart_Melee_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Melee_Sword_C*>(UBPInvPart_Melee_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


