#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Backpack2.Recipe_Backpack2_C
// (Actor)

class UClass* ARecipe_Backpack2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Backpack2_C");

	return Clss;
}


// Recipe_Backpack2_C Recipe_Backpack2.Default__Recipe_Backpack2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Backpack2_C* ARecipe_Backpack2_C::GetDefaultObj()
{
	static class ARecipe_Backpack2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Backpack2_C*>(ARecipe_Backpack2_C::StaticClass()->DefaultObject);

	return Default;
}

}


