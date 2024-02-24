#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_HW_VLA.BPInvPartSet_HW_VLA_C
// (None)

class UClass* UBPInvPartSet_HW_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_HW_VLA_C");

	return Clss;
}


// BPInvPartSet_HW_VLA_C BPInvPartSet_HW_VLA.Default__BPInvPartSet_HW_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_HW_VLA_C* UBPInvPartSet_HW_VLA_C::GetDefaultObj()
{
	static class UBPInvPartSet_HW_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_HW_VLA_C*>(UBPInvPartSet_HW_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}


