#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_AR_COV.BPInvPart_AR_COV_C
// (None)

class UClass* UBPInvPart_AR_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_AR_COV_C");

	return Clss;
}


// BPInvPart_AR_COV_C BPInvPart_AR_COV.Default__BPInvPart_AR_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_AR_COV_C* UBPInvPart_AR_COV_C::GetDefaultObj()
{
	static class UBPInvPart_AR_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_AR_COV_C*>(UBPInvPart_AR_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


