#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Kunai_Shock.Recipe_Kunai_Shock_C
// (Actor)

class UClass* ARecipe_Kunai_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Kunai_Shock_C");

	return Clss;
}


// Recipe_Kunai_Shock_C Recipe_Kunai_Shock.Default__Recipe_Kunai_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Kunai_Shock_C* ARecipe_Kunai_Shock_C::GetDefaultObj()
{
	static class ARecipe_Kunai_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Kunai_Shock_C*>(ARecipe_Kunai_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


