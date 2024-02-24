#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Pauldron.BPInvPart_Pauldron_C
// (None)

class UClass* UBPInvPart_Pauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Pauldron_C");

	return Clss;
}


// BPInvPart_Pauldron_C BPInvPart_Pauldron.Default__BPInvPart_Pauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Pauldron_C* UBPInvPart_Pauldron_C::GetDefaultObj()
{
	static class UBPInvPart_Pauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Pauldron_C*>(UBPInvPart_Pauldron_C::StaticClass()->DefaultObject);

	return Default;
}

}


