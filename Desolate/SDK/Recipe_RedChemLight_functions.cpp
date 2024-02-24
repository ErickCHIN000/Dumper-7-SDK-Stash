#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_RedChemLight.Recipe_RedChemLight_C
// (Actor)

class UClass* ARecipe_RedChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_RedChemLight_C");

	return Clss;
}


// Recipe_RedChemLight_C Recipe_RedChemLight.Default__Recipe_RedChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_RedChemLight_C* ARecipe_RedChemLight_C::GetDefaultObj()
{
	static class ARecipe_RedChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_RedChemLight_C*>(ARecipe_RedChemLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


