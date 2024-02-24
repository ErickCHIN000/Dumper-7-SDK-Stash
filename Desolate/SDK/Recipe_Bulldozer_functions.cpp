#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Bulldozer.Recipe_Bulldozer_C
// (Actor)

class UClass* ARecipe_Bulldozer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Bulldozer_C");

	return Clss;
}


// Recipe_Bulldozer_C Recipe_Bulldozer.Default__Recipe_Bulldozer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Bulldozer_C* ARecipe_Bulldozer_C::GetDefaultObj()
{
	static class ARecipe_Bulldozer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Bulldozer_C*>(ARecipe_Bulldozer_C::StaticClass()->DefaultObject);

	return Default;
}

}


