#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_FruitBoom.Recipe_FruitBoom_C
// (Actor)

class UClass* ARecipe_FruitBoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_FruitBoom_C");

	return Clss;
}


// Recipe_FruitBoom_C Recipe_FruitBoom.Default__Recipe_FruitBoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_FruitBoom_C* ARecipe_FruitBoom_C::GetDefaultObj()
{
	static class ARecipe_FruitBoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_FruitBoom_C*>(ARecipe_FruitBoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


