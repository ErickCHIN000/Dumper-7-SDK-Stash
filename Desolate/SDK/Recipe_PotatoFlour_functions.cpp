#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_PotatoFlour.Recipe_PotatoFlour_C
// (Actor)

class UClass* ARecipe_PotatoFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_PotatoFlour_C");

	return Clss;
}


// Recipe_PotatoFlour_C Recipe_PotatoFlour.Default__Recipe_PotatoFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_PotatoFlour_C* ARecipe_PotatoFlour_C::GetDefaultObj()
{
	static class ARecipe_PotatoFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_PotatoFlour_C*>(ARecipe_PotatoFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}


