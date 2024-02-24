#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_HardenedCloth.Recipe_HardenedCloth_C
// (Actor)

class UClass* ARecipe_HardenedCloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_HardenedCloth_C");

	return Clss;
}


// Recipe_HardenedCloth_C Recipe_HardenedCloth.Default__Recipe_HardenedCloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_HardenedCloth_C* ARecipe_HardenedCloth_C::GetDefaultObj()
{
	static class ARecipe_HardenedCloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_HardenedCloth_C*>(ARecipe_HardenedCloth_C::StaticClass()->DefaultObject);

	return Default;
}

}


