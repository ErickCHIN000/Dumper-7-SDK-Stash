#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_VegetablePie.Recipe_VegetablePie_C
// (Actor)

class UClass* ARecipe_VegetablePie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_VegetablePie_C");

	return Clss;
}


// Recipe_VegetablePie_C Recipe_VegetablePie.Default__Recipe_VegetablePie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_VegetablePie_C* ARecipe_VegetablePie_C::GetDefaultObj()
{
	static class ARecipe_VegetablePie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_VegetablePie_C*>(ARecipe_VegetablePie_C::StaticClass()->DefaultObject);

	return Default;
}

}


