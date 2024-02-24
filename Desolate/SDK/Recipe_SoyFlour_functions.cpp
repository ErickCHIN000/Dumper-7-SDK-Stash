#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SoyFlour.Recipe_SoyFlour_C
// (Actor)

class UClass* ARecipe_SoyFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SoyFlour_C");

	return Clss;
}


// Recipe_SoyFlour_C Recipe_SoyFlour.Default__Recipe_SoyFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SoyFlour_C* ARecipe_SoyFlour_C::GetDefaultObj()
{
	static class ARecipe_SoyFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SoyFlour_C*>(ARecipe_SoyFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}


