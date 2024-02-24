#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SoothingMixture.Recipe_SoothingMixture_C
// (Actor)

class UClass* ARecipe_SoothingMixture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SoothingMixture_C");

	return Clss;
}


// Recipe_SoothingMixture_C Recipe_SoothingMixture.Default__Recipe_SoothingMixture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SoothingMixture_C* ARecipe_SoothingMixture_C::GetDefaultObj()
{
	static class ARecipe_SoothingMixture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SoothingMixture_C*>(ARecipe_SoothingMixture_C::StaticClass()->DefaultObject);

	return Default;
}

}


