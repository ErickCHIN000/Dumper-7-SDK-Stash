#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_PistolAmmo.Recipe_PistolAmmo_C
// (Actor)

class UClass* ARecipe_PistolAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_PistolAmmo_C");

	return Clss;
}


// Recipe_PistolAmmo_C Recipe_PistolAmmo.Default__Recipe_PistolAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_PistolAmmo_C* ARecipe_PistolAmmo_C::GetDefaultObj()
{
	static class ARecipe_PistolAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_PistolAmmo_C*>(ARecipe_PistolAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


