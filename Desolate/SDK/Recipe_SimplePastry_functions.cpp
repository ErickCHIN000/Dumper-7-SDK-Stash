#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SimplePastry.Recipe_SimplePastry_C
// (Actor)

class UClass* ARecipe_SimplePastry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SimplePastry_C");

	return Clss;
}


// Recipe_SimplePastry_C Recipe_SimplePastry.Default__Recipe_SimplePastry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SimplePastry_C* ARecipe_SimplePastry_C::GetDefaultObj()
{
	static class ARecipe_SimplePastry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SimplePastry_C*>(ARecipe_SimplePastry_C::StaticClass()->DefaultObject);

	return Default;
}

}


