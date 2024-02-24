#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NoodleMeal.NoodleMeal_C
// (Actor)

class UClass* ANoodleMeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoodleMeal_C");

	return Clss;
}


// NoodleMeal_C NoodleMeal.Default__NoodleMeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANoodleMeal_C* ANoodleMeal_C::GetDefaultObj()
{
	static class ANoodleMeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANoodleMeal_C*>(ANoodleMeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


