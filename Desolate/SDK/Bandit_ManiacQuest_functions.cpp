#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_ManiacQuest.Bandit_ManiacQuest_C
// (Actor, Pawn)

class UClass* ABandit_ManiacQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_ManiacQuest_C");

	return Clss;
}


// Bandit_ManiacQuest_C Bandit_ManiacQuest.Default__Bandit_ManiacQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_ManiacQuest_C* ABandit_ManiacQuest_C::GetDefaultObj()
{
	static class ABandit_ManiacQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_ManiacQuest_C*>(ABandit_ManiacQuest_C::StaticClass()->DefaultObject);

	return Default;
}

}


