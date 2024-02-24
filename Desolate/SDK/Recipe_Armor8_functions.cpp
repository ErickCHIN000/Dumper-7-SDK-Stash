#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor8.Recipe_Armor8_C
// (Actor)

class UClass* ARecipe_Armor8_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor8_C");

	return Clss;
}


// Recipe_Armor8_C Recipe_Armor8.Default__Recipe_Armor8_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor8_C* ARecipe_Armor8_C::GetDefaultObj()
{
	static class ARecipe_Armor8_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor8_C*>(ARecipe_Armor8_C::StaticClass()->DefaultObject);

	return Default;
}

}


