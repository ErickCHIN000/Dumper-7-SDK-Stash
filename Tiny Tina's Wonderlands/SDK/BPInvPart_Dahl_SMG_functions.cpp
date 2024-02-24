#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Dahl_SMG.BPInvPart_Dahl_SMG_C
// (None)

class UClass* UBPInvPart_Dahl_SMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Dahl_SMG_C");

	return Clss;
}


// BPInvPart_Dahl_SMG_C BPInvPart_Dahl_SMG.Default__BPInvPart_Dahl_SMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Dahl_SMG_C* UBPInvPart_Dahl_SMG_C::GetDefaultObj()
{
	static class UBPInvPart_Dahl_SMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Dahl_SMG_C*>(UBPInvPart_Dahl_SMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


