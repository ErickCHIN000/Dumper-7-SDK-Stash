#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Amulet.BPInvPart_Amulet_C
// (None)

class UClass* UBPInvPart_Amulet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Amulet_C");

	return Clss;
}


// BPInvPart_Amulet_C BPInvPart_Amulet.Default__BPInvPart_Amulet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Amulet_C* UBPInvPart_Amulet_C::GetDefaultObj()
{
	static class UBPInvPart_Amulet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Amulet_C*>(UBPInvPart_Amulet_C::StaticClass()->DefaultObject);

	return Default;
}

}


