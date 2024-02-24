#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_VLA_AR.BPInvPartSet_VLA_AR_C
// (None)

class UClass* UBPInvPartSet_VLA_AR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_VLA_AR_C");

	return Clss;
}


// BPInvPartSet_VLA_AR_C BPInvPartSet_VLA_AR.Default__BPInvPartSet_VLA_AR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_VLA_AR_C* UBPInvPartSet_VLA_AR_C::GetDefaultObj()
{
	static class UBPInvPartSet_VLA_AR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_VLA_AR_C*>(UBPInvPartSet_VLA_AR_C::StaticClass()->DefaultObject);

	return Default;
}

}


