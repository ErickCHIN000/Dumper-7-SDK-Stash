#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_ShieldData.BPInv_ShieldData_C
// (None)

class UClass* UBPInv_ShieldData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_ShieldData_C");

	return Clss;
}


// BPInv_ShieldData_C BPInv_ShieldData.Default__BPInv_ShieldData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_ShieldData_C* UBPInv_ShieldData_C::GetDefaultObj()
{
	static class UBPInv_ShieldData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_ShieldData_C*>(UBPInv_ShieldData_C::StaticClass()->DefaultObject);

	return Default;
}

}


