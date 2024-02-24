#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_ReverendQuest.Bandit_ReverendQuest_C
// (Actor, Pawn)

class UClass* ABandit_ReverendQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_ReverendQuest_C");

	return Clss;
}


// Bandit_ReverendQuest_C Bandit_ReverendQuest.Default__Bandit_ReverendQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_ReverendQuest_C* ABandit_ReverendQuest_C::GetDefaultObj()
{
	static class ABandit_ReverendQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_ReverendQuest_C*>(ABandit_ReverendQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


