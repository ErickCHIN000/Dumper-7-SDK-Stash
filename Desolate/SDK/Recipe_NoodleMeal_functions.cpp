#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_NoodleMeal.Recipe_NoodleMeal_C
// (Actor)

class UClass* ARecipe_NoodleMeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_NoodleMeal_C");

	return Clss;
}


// Recipe_NoodleMeal_C Recipe_NoodleMeal.Default__Recipe_NoodleMeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_NoodleMeal_C* ARecipe_NoodleMeal_C::GetDefaultObj()
{
	static class ARecipe_NoodleMeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_NoodleMeal_C*>(ARecipe_NoodleMeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


