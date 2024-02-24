#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Backpack3.Recipe_Backpack3_C
// (Actor)

class UClass* ARecipe_Backpack3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Backpack3_C");

	return Clss;
}


// Recipe_Backpack3_C Recipe_Backpack3.Default__Recipe_Backpack3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Backpack3_C* ARecipe_Backpack3_C::GetDefaultObj()
{
	static class ARecipe_Backpack3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Backpack3_C*>(ARecipe_Backpack3_C::StaticClass()->DefaultObject);

	return Default;
}

}


