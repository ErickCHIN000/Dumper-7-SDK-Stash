#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Pauldron.BPInv_Pauldron_C
// (None)

class UClass* UBPInv_Pauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Pauldron_C");

	return Clss;
}


// BPInv_Pauldron_C BPInv_Pauldron.Default__BPInv_Pauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Pauldron_C* UBPInv_Pauldron_C::GetDefaultObj()
{
	static class UBPInv_Pauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Pauldron_C*>(UBPInv_Pauldron_C::StaticClass()->DefaultObject);

	return Default;
}

}


