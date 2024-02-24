#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Poison.Recipe_Poison_C
// (Actor)

class UClass* ARecipe_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Poison_C");

	return Clss;
}


// Recipe_Poison_C Recipe_Poison.Default__Recipe_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Poison_C* ARecipe_Poison_C::GetDefaultObj()
{
	static class ARecipe_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Poison_C*>(ARecipe_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


