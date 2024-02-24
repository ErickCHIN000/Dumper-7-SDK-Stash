#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Dodger2.Bandit_Dodger2_C
// (Actor, Pawn)

class UClass* ABandit_Dodger2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Dodger2_C");

	return Clss;
}


// Bandit_Dodger2_C Bandit_Dodger2.Default__Bandit_Dodger2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Dodger2_C* ABandit_Dodger2_C::GetDefaultObj()
{
	static class ABandit_Dodger2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Dodger2_C*>(ABandit_Dodger2_C::StaticClass()->DefaultObject);

	return Default;
}

}


