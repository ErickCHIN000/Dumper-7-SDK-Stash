#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Melee_Sword.BPInv_Melee_Sword_C
// (None)

class UClass* UBPInv_Melee_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Melee_Sword_C");

	return Clss;
}


// BPInv_Melee_Sword_C BPInv_Melee_Sword.Default__BPInv_Melee_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Melee_Sword_C* UBPInv_Melee_Sword_C::GetDefaultObj()
{
	static class UBPInv_Melee_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Melee_Sword_C*>(UBPInv_Melee_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


