#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Character6.NPC_Character6_C
// (Actor, Pawn)

class UClass* ANPC_Character6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Character6_C");

	return Clss;
}


// NPC_Character6_C NPC_Character6.Default__NPC_Character6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Character6_C* ANPC_Character6_C::GetDefaultObj()
{
	static class ANPC_Character6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Character6_C*>(ANPC_Character6_C::StaticClass()->DefaultObject);

	return Default;
}

}


