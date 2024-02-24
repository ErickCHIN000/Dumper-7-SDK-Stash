#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Illumination.Recipe_Illumination_C
// (Actor)

class UClass* ARecipe_Illumination_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Illumination_C");

	return Clss;
}


// Recipe_Illumination_C Recipe_Illumination.Default__Recipe_Illumination_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Illumination_C* ARecipe_Illumination_C::GetDefaultObj()
{
	static class ARecipe_Illumination_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Illumination_C*>(ARecipe_Illumination_C::StaticClass()->DefaultObject);

	return Default;
}

}


