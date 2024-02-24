#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Melee.BPInv_Melee_C
// (None)

class UClass* UBPInv_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Melee_C");

	return Clss;
}


// BPInv_Melee_C BPInv_Melee.Default__BPInv_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Melee_C* UBPInv_Melee_C::GetDefaultObj()
{
	static class UBPInv_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Melee_C*>(UBPInv_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


