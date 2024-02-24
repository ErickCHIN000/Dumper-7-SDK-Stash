#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_SG_TED.BPInvPartSet_SG_TED_C
// (None)

class UClass* UBPInvPartSet_SG_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_SG_TED_C");

	return Clss;
}


// BPInvPartSet_SG_TED_C BPInvPartSet_SG_TED.Default__BPInvPartSet_SG_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_SG_TED_C* UBPInvPartSet_SG_TED_C::GetDefaultObj()
{
	static class UBPInvPartSet_SG_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_SG_TED_C*>(UBPInvPartSet_SG_TED_C::StaticClass()->DefaultObject);

	return Default;
}

}


