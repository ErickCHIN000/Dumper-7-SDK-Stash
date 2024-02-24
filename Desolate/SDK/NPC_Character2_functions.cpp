#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Character2.NPC_Character2_C
// (Actor, Pawn)

class UClass* ANPC_Character2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Character2_C");

	return Clss;
}


// NPC_Character2_C NPC_Character2.Default__NPC_Character2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Character2_C* ANPC_Character2_C::GetDefaultObj()
{
	static class ANPC_Character2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Character2_C*>(ANPC_Character2_C::StaticClass()->DefaultObject);

	return Default;
}

}


