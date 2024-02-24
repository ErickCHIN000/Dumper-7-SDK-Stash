#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_SM_TED.BPInvPart_SM_TED_C
// (None)

class UClass* UBPInvPart_SM_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_SM_TED_C");

	return Clss;
}


// BPInvPart_SM_TED_C BPInvPart_SM_TED.Default__BPInvPart_SM_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_SM_TED_C* UBPInvPart_SM_TED_C::GetDefaultObj()
{
	static class UBPInvPart_SM_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_SM_TED_C*>(UBPInvPart_SM_TED_C::StaticClass()->DefaultObject);

	return Default;
}

}


