#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MixedPlatter.Recipe_MixedPlatter_C
// (Actor)

class UClass* ARecipe_MixedPlatter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MixedPlatter_C");

	return Clss;
}


// Recipe_MixedPlatter_C Recipe_MixedPlatter.Default__Recipe_MixedPlatter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MixedPlatter_C* ARecipe_MixedPlatter_C::GetDefaultObj()
{
	static class ARecipe_MixedPlatter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MixedPlatter_C*>(ARecipe_MixedPlatter_C::StaticClass()->DefaultObject);

	return Default;
}

}


