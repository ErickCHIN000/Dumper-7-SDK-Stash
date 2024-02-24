#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Leader.Bandit_Leader_C
// (Actor, Pawn)

class UClass* ABandit_Leader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Leader_C");

	return Clss;
}


// Bandit_Leader_C Bandit_Leader.Default__Bandit_Leader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Leader_C* ABandit_Leader_C::GetDefaultObj()
{
	static class ABandit_Leader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Leader_C*>(ABandit_Leader_C::StaticClass()->DefaultObject);

	return Default;
}

}


