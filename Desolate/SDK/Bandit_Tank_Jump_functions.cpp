#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Tank_Jump.Bandit_Tank_Jump_C
// (Actor)

class UClass* ABandit_Tank_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Tank_Jump_C");

	return Clss;
}


// Bandit_Tank_Jump_C Bandit_Tank_Jump.Default__Bandit_Tank_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Tank_Jump_C* ABandit_Tank_Jump_C::GetDefaultObj()
{
	static class ABandit_Tank_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Tank_Jump_C*>(ABandit_Tank_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


