#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_PS_Jakobs.BPInv_PS_Jakobs_C
// (None)

class UClass* UBPInv_PS_Jakobs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_PS_Jakobs_C");

	return Clss;
}


// BPInv_PS_Jakobs_C BPInv_PS_Jakobs.Default__BPInv_PS_Jakobs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_PS_Jakobs_C* UBPInv_PS_Jakobs_C::GetDefaultObj()
{
	static class UBPInv_PS_Jakobs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_PS_Jakobs_C*>(UBPInv_PS_Jakobs_C::StaticClass()->DefaultObject);

	return Default;
}

}


