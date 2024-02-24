#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Backpack4.Recipe_Backpack4_C
// (Actor)

class UClass* ARecipe_Backpack4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Backpack4_C");

	return Clss;
}


// Recipe_Backpack4_C Recipe_Backpack4.Default__Recipe_Backpack4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Backpack4_C* ARecipe_Backpack4_C::GetDefaultObj()
{
	static class ARecipe_Backpack4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Backpack4_C*>(ARecipe_Backpack4_C::StaticClass()->DefaultObject);

	return Default;
}

}


