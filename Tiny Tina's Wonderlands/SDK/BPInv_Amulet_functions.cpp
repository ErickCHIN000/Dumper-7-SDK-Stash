#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Amulet.BPInv_Amulet_C
// (None)

class UClass* UBPInv_Amulet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Amulet_C");

	return Clss;
}


// BPInv_Amulet_C BPInv_Amulet.Default__BPInv_Amulet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Amulet_C* UBPInv_Amulet_C::GetDefaultObj()
{
	static class UBPInv_Amulet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Amulet_C*>(UBPInv_Amulet_C::StaticClass()->DefaultObject);

	return Default;
}

}


