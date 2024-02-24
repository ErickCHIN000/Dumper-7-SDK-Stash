#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Shield.BPInvPart_Shield_C
// (None)

class UClass* UBPInvPart_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Shield_C");

	return Clss;
}


// BPInvPart_Shield_C BPInvPart_Shield.Default__BPInvPart_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Shield_C* UBPInvPart_Shield_C::GetDefaultObj()
{
	static class UBPInvPart_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Shield_C*>(UBPInvPart_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


