#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BlueChemLight.Recipe_BlueChemLight_C
// (Actor)

class UClass* ARecipe_BlueChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BlueChemLight_C");

	return Clss;
}


// Recipe_BlueChemLight_C Recipe_BlueChemLight.Default__Recipe_BlueChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BlueChemLight_C* ARecipe_BlueChemLight_C::GetDefaultObj()
{
	static class ARecipe_BlueChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BlueChemLight_C*>(ARecipe_BlueChemLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


