#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_PS_COV.BPInv_PS_COV_C
// (None)

class UClass* UBPInv_PS_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_PS_COV_C");

	return Clss;
}


// BPInv_PS_COV_C BPInv_PS_COV.Default__BPInv_PS_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_PS_COV_C* UBPInv_PS_COV_C::GetDefaultObj()
{
	static class UBPInv_PS_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_PS_COV_C*>(UBPInv_PS_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


