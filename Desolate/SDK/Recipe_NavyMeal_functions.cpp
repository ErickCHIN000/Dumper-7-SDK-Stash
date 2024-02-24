#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_NavyMeal.Recipe_NavyMeal_C
// (Actor)

class UClass* ARecipe_NavyMeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_NavyMeal_C");

	return Clss;
}


// Recipe_NavyMeal_C Recipe_NavyMeal.Default__Recipe_NavyMeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_NavyMeal_C* ARecipe_NavyMeal_C::GetDefaultObj()
{
	static class ARecipe_NavyMeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_NavyMeal_C*>(ARecipe_NavyMeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


