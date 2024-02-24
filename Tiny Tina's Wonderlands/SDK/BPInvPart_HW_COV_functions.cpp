#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_HW_COV.BPInvPart_HW_COV_C
// (None)

class UClass* UBPInvPart_HW_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_HW_COV_C");

	return Clss;
}


// BPInvPart_HW_COV_C BPInvPart_HW_COV.Default__BPInvPart_HW_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_HW_COV_C* UBPInvPart_HW_COV_C::GetDefaultObj()
{
	static class UBPInvPart_HW_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_HW_COV_C*>(UBPInvPart_HW_COV_C::StaticClass()->DefaultObject);

	return Default;
}

}


