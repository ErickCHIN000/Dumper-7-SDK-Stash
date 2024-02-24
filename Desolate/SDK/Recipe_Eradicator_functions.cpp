#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Eradicator.Recipe_Eradicator_C
// (Actor)

class UClass* ARecipe_Eradicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Eradicator_C");

	return Clss;
}


// Recipe_Eradicator_C Recipe_Eradicator.Default__Recipe_Eradicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Eradicator_C* ARecipe_Eradicator_C::GetDefaultObj()
{
	static class ARecipe_Eradicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Eradicator_C*>(ARecipe_Eradicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


