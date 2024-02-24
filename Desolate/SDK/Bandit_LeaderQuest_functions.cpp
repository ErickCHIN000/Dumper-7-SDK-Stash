#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_LeaderQuest.Bandit_LeaderQuest_C
// (Actor, Pawn)

class UClass* ABandit_LeaderQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_LeaderQuest_C");

	return Clss;
}


// Bandit_LeaderQuest_C Bandit_LeaderQuest.Default__Bandit_LeaderQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_LeaderQuest_C* ABandit_LeaderQuest_C::GetDefaultObj()
{
	static class ABandit_LeaderQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_LeaderQuest_C*>(ABandit_LeaderQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


