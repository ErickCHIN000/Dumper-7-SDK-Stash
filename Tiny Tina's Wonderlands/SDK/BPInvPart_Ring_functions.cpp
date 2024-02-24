#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Ring.BPInvPart_Ring_C
// (None)

class UClass* UBPInvPart_Ring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Ring_C");

	return Clss;
}


// BPInvPart_Ring_C BPInvPart_Ring.Default__BPInvPart_Ring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Ring_C* UBPInvPart_Ring_C::GetDefaultObj()
{
	static class UBPInvPart_Ring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Ring_C*>(UBPInvPart_Ring_C::StaticClass()->DefaultObject);

	return Default;
}

}


