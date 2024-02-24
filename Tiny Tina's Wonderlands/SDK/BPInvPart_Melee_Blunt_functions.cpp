#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Melee_Blunt.BPInvPart_Melee_Blunt_C
// (None)

class UClass* UBPInvPart_Melee_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Melee_Blunt_C");

	return Clss;
}


// BPInvPart_Melee_Blunt_C BPInvPart_Melee_Blunt.Default__BPInvPart_Melee_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Melee_Blunt_C* UBPInvPart_Melee_Blunt_C::GetDefaultObj()
{
	static class UBPInvPart_Melee_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Melee_Blunt_C*>(UBPInvPart_Melee_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


