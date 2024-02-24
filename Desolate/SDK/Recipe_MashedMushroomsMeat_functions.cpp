#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MashedMushroomsMeat.Recipe_MashedMushroomsMeat_C
// (Actor)

class UClass* ARecipe_MashedMushroomsMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MashedMushroomsMeat_C");

	return Clss;
}


// Recipe_MashedMushroomsMeat_C Recipe_MashedMushroomsMeat.Default__Recipe_MashedMushroomsMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MashedMushroomsMeat_C* ARecipe_MashedMushroomsMeat_C::GetDefaultObj()
{
	static class ARecipe_MashedMushroomsMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MashedMushroomsMeat_C*>(ARecipe_MashedMushroomsMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


