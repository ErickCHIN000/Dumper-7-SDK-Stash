#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_GreenChemLight.Recipe_GreenChemLight_C
// (Actor)

class UClass* ARecipe_GreenChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_GreenChemLight_C");

	return Clss;
}


// Recipe_GreenChemLight_C Recipe_GreenChemLight.Default__Recipe_GreenChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_GreenChemLight_C* ARecipe_GreenChemLight_C::GetDefaultObj()
{
	static class ARecipe_GreenChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_GreenChemLight_C*>(ARecipe_GreenChemLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


