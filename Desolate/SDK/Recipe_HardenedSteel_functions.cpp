#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_HardenedSteel.Recipe_HardenedSteel_C
// (Actor)

class UClass* ARecipe_HardenedSteel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_HardenedSteel_C");

	return Clss;
}


// Recipe_HardenedSteel_C Recipe_HardenedSteel.Default__Recipe_HardenedSteel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_HardenedSteel_C* ARecipe_HardenedSteel_C::GetDefaultObj()
{
	static class ARecipe_HardenedSteel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_HardenedSteel_C*>(ARecipe_HardenedSteel_C::StaticClass()->DefaultObject);

	return Default;
}

}


