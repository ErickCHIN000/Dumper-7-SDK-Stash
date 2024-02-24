#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_TouristBreakfast.Recipe_TouristBreakfast_C
// (Actor)

class UClass* ARecipe_TouristBreakfast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_TouristBreakfast_C");

	return Clss;
}


// Recipe_TouristBreakfast_C Recipe_TouristBreakfast.Default__Recipe_TouristBreakfast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_TouristBreakfast_C* ARecipe_TouristBreakfast_C::GetDefaultObj()
{
	static class ARecipe_TouristBreakfast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_TouristBreakfast_C*>(ARecipe_TouristBreakfast_C::StaticClass()->DefaultObject);

	return Default;
}

}


