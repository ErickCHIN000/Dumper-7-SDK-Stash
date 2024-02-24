#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Tank.Bandit_Tank_C
// (Actor, Pawn)

class UClass* ABandit_Tank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Tank_C");

	return Clss;
}


// Bandit_Tank_C Bandit_Tank.Default__Bandit_Tank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Tank_C* ABandit_Tank_C::GetDefaultObj()
{
	static class ABandit_Tank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Tank_C*>(ABandit_Tank_C::StaticClass()->DefaultObject);

	return Default;
}

}


