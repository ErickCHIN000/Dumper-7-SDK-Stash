#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Ring.BPInv_Ring_C
// (None)

class UClass* UBPInv_Ring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Ring_C");

	return Clss;
}


// BPInv_Ring_C BPInv_Ring.Default__BPInv_Ring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Ring_C* UBPInv_Ring_C::GetDefaultObj()
{
	static class UBPInv_Ring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Ring_C*>(UBPInv_Ring_C::StaticClass()->DefaultObject);

	return Default;
}

}


