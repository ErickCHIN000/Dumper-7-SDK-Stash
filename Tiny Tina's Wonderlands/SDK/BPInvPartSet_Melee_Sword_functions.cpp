#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Melee_Sword.BPInvPartSet_Melee_Sword_C
// (None)

class UClass* UBPInvPartSet_Melee_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Melee_Sword_C");

	return Clss;
}


// BPInvPartSet_Melee_Sword_C BPInvPartSet_Melee_Sword.Default__BPInvPartSet_Melee_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Melee_Sword_C* UBPInvPartSet_Melee_Sword_C::GetDefaultObj()
{
	static class UBPInvPartSet_Melee_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Melee_Sword_C*>(UBPInvPartSet_Melee_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


