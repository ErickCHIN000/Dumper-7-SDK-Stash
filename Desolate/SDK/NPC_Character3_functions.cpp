#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Character3.NPC_Character3_C
// (Actor, Pawn)

class UClass* ANPC_Character3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Character3_C");

	return Clss;
}


// NPC_Character3_C NPC_Character3.Default__NPC_Character3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Character3_C* ANPC_Character3_C::GetDefaultObj()
{
	static class ANPC_Character3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Character3_C*>(ANPC_Character3_C::StaticClass()->DefaultObject);

	return Default;
}

}


