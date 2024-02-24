#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Melee_Axe.BPInv_Melee_Axe_C
// (None)

class UClass* UBPInv_Melee_Axe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Melee_Axe_C");

	return Clss;
}


// BPInv_Melee_Axe_C BPInv_Melee_Axe.Default__BPInv_Melee_Axe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Melee_Axe_C* UBPInv_Melee_Axe_C::GetDefaultObj()
{
	static class UBPInv_Melee_Axe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Melee_Axe_C*>(UBPInv_Melee_Axe_C::StaticClass()->DefaultObject);

	return Default;
}

}


