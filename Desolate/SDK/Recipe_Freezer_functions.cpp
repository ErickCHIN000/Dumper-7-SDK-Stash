#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Freezer.Recipe_Freezer_C
// (Actor)

class UClass* ARecipe_Freezer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Freezer_C");

	return Clss;
}


// Recipe_Freezer_C Recipe_Freezer.Default__Recipe_Freezer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Freezer_C* ARecipe_Freezer_C::GetDefaultObj()
{
	static class ARecipe_Freezer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Freezer_C*>(ARecipe_Freezer_C::StaticClass()->DefaultObject);

	return Default;
}

}


