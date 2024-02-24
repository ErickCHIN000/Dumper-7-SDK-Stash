#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_HW_VLA.BPInv_HW_VLA_C
// (None)

class UClass* UBPInv_HW_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_HW_VLA_C");

	return Clss;
}


// BPInv_HW_VLA_C BPInv_HW_VLA.Default__BPInv_HW_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_HW_VLA_C* UBPInv_HW_VLA_C::GetDefaultObj()
{
	static class UBPInv_HW_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_HW_VLA_C*>(UBPInv_HW_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}


