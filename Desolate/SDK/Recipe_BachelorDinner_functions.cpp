#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BachelorDinner.Recipe_BachelorDinner_C
// (Actor)

class UClass* ARecipe_BachelorDinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BachelorDinner_C");

	return Clss;
}


// Recipe_BachelorDinner_C Recipe_BachelorDinner.Default__Recipe_BachelorDinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BachelorDinner_C* ARecipe_BachelorDinner_C::GetDefaultObj()
{
	static class ARecipe_BachelorDinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BachelorDinner_C*>(ARecipe_BachelorDinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


