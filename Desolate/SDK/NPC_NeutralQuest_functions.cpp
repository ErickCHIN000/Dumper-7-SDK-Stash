#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_NeutralQuest.NPC_NeutralQuest_C
// (Actor, Pawn)

class UClass* ANPC_NeutralQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_NeutralQuest_C");

	return Clss;
}


// NPC_NeutralQuest_C NPC_NeutralQuest.Default__NPC_NeutralQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_NeutralQuest_C* ANPC_NeutralQuest_C::GetDefaultObj()
{
	static class ANPC_NeutralQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_NeutralQuest_C*>(ANPC_NeutralQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


