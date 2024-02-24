#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_CorkscrewCocktail.Recipe_CorkscrewCocktail_C
// (Actor)

class UClass* ARecipe_CorkscrewCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_CorkscrewCocktail_C");

	return Clss;
}


// Recipe_CorkscrewCocktail_C Recipe_CorkscrewCocktail.Default__Recipe_CorkscrewCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_CorkscrewCocktail_C* ARecipe_CorkscrewCocktail_C::GetDefaultObj()
{
	static class ARecipe_CorkscrewCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_CorkscrewCocktail_C*>(ARecipe_CorkscrewCocktail_C::StaticClass()->DefaultObject);

	return Default;
}

}


