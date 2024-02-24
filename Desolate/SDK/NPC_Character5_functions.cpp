#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Character5.NPC_Character5_C
// (Actor, Pawn)

class UClass* ANPC_Character5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Character5_C");

	return Clss;
}


// NPC_Character5_C NPC_Character5.Default__NPC_Character5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Character5_C* ANPC_Character5_C::GetDefaultObj()
{
	static class ANPC_Character5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Character5_C*>(ANPC_Character5_C::StaticClass()->DefaultObject);

	return Default;
}

}


