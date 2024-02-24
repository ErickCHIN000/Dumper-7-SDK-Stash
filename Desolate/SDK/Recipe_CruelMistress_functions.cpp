#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_CruelMistress.Recipe_CruelMistress_C
// (Actor)

class UClass* ARecipe_CruelMistress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_CruelMistress_C");

	return Clss;
}


// Recipe_CruelMistress_C Recipe_CruelMistress.Default__Recipe_CruelMistress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_CruelMistress_C* ARecipe_CruelMistress_C::GetDefaultObj()
{
	static class ARecipe_CruelMistress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_CruelMistress_C*>(ARecipe_CruelMistress_C::StaticClass()->DefaultObject);

	return Default;
}

}


