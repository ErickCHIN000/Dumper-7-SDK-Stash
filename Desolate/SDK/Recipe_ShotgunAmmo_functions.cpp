#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_ShotgunAmmo.Recipe_ShotgunAmmo_C
// (Actor)

class UClass* ARecipe_ShotgunAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_ShotgunAmmo_C");

	return Clss;
}


// Recipe_ShotgunAmmo_C Recipe_ShotgunAmmo.Default__Recipe_ShotgunAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_ShotgunAmmo_C* ARecipe_ShotgunAmmo_C::GetDefaultObj()
{
	static class ARecipe_ShotgunAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_ShotgunAmmo_C*>(ARecipe_ShotgunAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


