#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_HW_COV.BPInvPartSet_HW_COV_C
// (None)

class UClass* UBPInvPartSet_HW_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_HW_COV_C");

	return Clss;
}


// BPInvPartSet_HW_COV_C BPInvPartSet_HW_COV.Default__BPInvPartSet_HW_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_HW_COV_C* UBPInvPartSet_HW_COV_C::GetDefaultObj()
{
	static class UBPInvPartSet_HW_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_HW_COV_C*>(UBPInvPartSet_HW_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


