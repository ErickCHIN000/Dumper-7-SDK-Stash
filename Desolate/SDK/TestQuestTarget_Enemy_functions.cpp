#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TestQuestTarget_Enemy.TestQuestTarget_Enemy_C
// (Actor, Pawn)

class UClass* ATestQuestTarget_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestQuestTarget_Enemy_C");

	return Clss;
}


// TestQuestTarget_Enemy_C TestQuestTarget_Enemy.Default__TestQuestTarget_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATestQuestTarget_Enemy_C* ATestQuestTarget_Enemy_C::GetDefaultObj()
{
	static class ATestQuestTarget_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATestQuestTarget_Enemy_C*>(ATestQuestTarget_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


