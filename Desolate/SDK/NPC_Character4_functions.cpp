#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Character4.NPC_Character4_C
// (Actor, Pawn)

class UClass* ANPC_Character4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Character4_C");

	return Clss;
}


// NPC_Character4_C NPC_Character4.Default__NPC_Character4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Character4_C* ANPC_Character4_C::GetDefaultObj()
{
	static class ANPC_Character4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Character4_C*>(ANPC_Character4_C::StaticClass()->DefaultObject);

	return Default;
}

}


