#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_SG_Torgue.BPInvPart_SG_Torgue_C
// (None)

class UClass* UBPInvPart_SG_Torgue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_SG_Torgue_C");

	return Clss;
}


// BPInvPart_SG_Torgue_C BPInvPart_SG_Torgue.Default__BPInvPart_SG_Torgue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_SG_Torgue_C* UBPInvPart_SG_Torgue_C::GetDefaultObj()
{
	static class UBPInvPart_SG_Torgue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_SG_Torgue_C*>(UBPInvPart_SG_Torgue_C::StaticClass()->DefaultObject);

	return Default;
}

}


