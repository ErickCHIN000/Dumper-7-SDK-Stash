#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SpecialAmmo.Recipe_SpecialAmmo_C
// (Actor)

class UClass* ARecipe_SpecialAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SpecialAmmo_C");

	return Clss;
}


// Recipe_SpecialAmmo_C Recipe_SpecialAmmo.Default__Recipe_SpecialAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SpecialAmmo_C* ARecipe_SpecialAmmo_C::GetDefaultObj()
{
	static class ARecipe_SpecialAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SpecialAmmo_C*>(ARecipe_SpecialAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


