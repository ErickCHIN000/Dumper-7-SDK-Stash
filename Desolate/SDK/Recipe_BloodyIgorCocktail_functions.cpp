#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BloodyIgorCocktail.Recipe_BloodyIgorCocktail_C
// (Actor)

class UClass* ARecipe_BloodyIgorCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BloodyIgorCocktail_C");

	return Clss;
}


// Recipe_BloodyIgorCocktail_C Recipe_BloodyIgorCocktail.Default__Recipe_BloodyIgorCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BloodyIgorCocktail_C* ARecipe_BloodyIgorCocktail_C::GetDefaultObj()
{
	static class ARecipe_BloodyIgorCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BloodyIgorCocktail_C*>(ARecipe_BloodyIgorCocktail_C::StaticClass()->DefaultObject);

	return Default;
}

}


