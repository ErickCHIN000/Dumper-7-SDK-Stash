#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Chips.Recipe_Chips_C
// (Actor)

class UClass* ARecipe_Chips_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Chips_C");

	return Clss;
}


// Recipe_Chips_C Recipe_Chips.Default__Recipe_Chips_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Chips_C* ARecipe_Chips_C::GetDefaultObj()
{
	static class ARecipe_Chips_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Chips_C*>(ARecipe_Chips_C::StaticClass()->DefaultObject);

	return Default;
}

}


