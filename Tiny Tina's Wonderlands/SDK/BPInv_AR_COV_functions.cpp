#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_AR_COV.BPInv_AR_COV_C
// (None)

class UClass* UBPInv_AR_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_AR_COV_C");

	return Clss;
}


// BPInv_AR_COV_C BPInv_AR_COV.Default__BPInv_AR_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_AR_COV_C* UBPInv_AR_COV_C::GetDefaultObj()
{
	static class UBPInv_AR_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_AR_COV_C*>(UBPInv_AR_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


