#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_GrainFlour.Recipe_GrainFlour_C
// (Actor)

class UClass* ARecipe_GrainFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_GrainFlour_C");

	return Clss;
}


// Recipe_GrainFlour_C Recipe_GrainFlour.Default__Recipe_GrainFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_GrainFlour_C* ARecipe_GrainFlour_C::GetDefaultObj()
{
	static class ARecipe_GrainFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_GrainFlour_C*>(ARecipe_GrainFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}


