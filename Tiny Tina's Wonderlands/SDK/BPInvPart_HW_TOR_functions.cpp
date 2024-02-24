#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_HW_TOR.BPInvPart_HW_TOR_C
// (None)

class UClass* UBPInvPart_HW_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_HW_TOR_C");

	return Clss;
}


// BPInvPart_HW_TOR_C BPInvPart_HW_TOR.Default__BPInvPart_HW_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_HW_TOR_C* UBPInvPart_HW_TOR_C::GetDefaultObj()
{
	static class UBPInvPart_HW_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_HW_TOR_C*>(UBPInvPart_HW_TOR_C::StaticClass()->DefaultObject);

	return Default;
}

}


