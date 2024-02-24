#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_VegetableStew.Recipe_VegetableStew_C
// (Actor)

class UClass* ARecipe_VegetableStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_VegetableStew_C");

	return Clss;
}


// Recipe_VegetableStew_C Recipe_VegetableStew.Default__Recipe_VegetableStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_VegetableStew_C* ARecipe_VegetableStew_C::GetDefaultObj()
{
	static class ARecipe_VegetableStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_VegetableStew_C*>(ARecipe_VegetableStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


