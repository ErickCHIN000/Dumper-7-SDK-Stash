#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_SM_Hyperion.BPInvPartSet_SM_Hyperion_C
// (None)

class UClass* UBPInvPartSet_SM_Hyperion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_SM_Hyperion_C");

	return Clss;
}


// BPInvPartSet_SM_Hyperion_C BPInvPartSet_SM_Hyperion.Default__BPInvPartSet_SM_Hyperion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_SM_Hyperion_C* UBPInvPartSet_SM_Hyperion_C::GetDefaultObj()
{
	static class UBPInvPartSet_SM_Hyperion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_SM_Hyperion_C*>(UBPInvPartSet_SM_Hyperion_C::StaticClass()->DefaultObject);

	return Default;
}

}


