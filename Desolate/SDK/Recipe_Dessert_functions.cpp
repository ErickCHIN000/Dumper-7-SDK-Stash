#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Dessert.Recipe_Dessert_C
// (Actor)

class UClass* ARecipe_Dessert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Dessert_C");

	return Clss;
}


// Recipe_Dessert_C Recipe_Dessert.Default__Recipe_Dessert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Dessert_C* ARecipe_Dessert_C::GetDefaultObj()
{
	static class ARecipe_Dessert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Dessert_C*>(ARecipe_Dessert_C::StaticClass()->DefaultObject);

	return Default;
}

}


