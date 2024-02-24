#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_GoodMorningGrapesCocktail.Recipe_GoodMorningGrapesCocktail_C
// (Actor)

class UClass* ARecipe_GoodMorningGrapesCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_GoodMorningGrapesCocktail_C");

	return Clss;
}


// Recipe_GoodMorningGrapesCocktail_C Recipe_GoodMorningGrapesCocktail.Default__Recipe_GoodMorningGrapesCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_GoodMorningGrapesCocktail_C* ARecipe_GoodMorningGrapesCocktail_C::GetDefaultObj()
{
	static class ARecipe_GoodMorningGrapesCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_GoodMorningGrapesCocktail_C*>(ARecipe_GoodMorningGrapesCocktail_C::StaticClass()->DefaultObject);

	return Default;
}

}


