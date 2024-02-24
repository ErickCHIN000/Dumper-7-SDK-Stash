#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Backpack5.Recipe_Backpack5_C
// (Actor)

class UClass* ARecipe_Backpack5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Backpack5_C");

	return Clss;
}


// Recipe_Backpack5_C Recipe_Backpack5.Default__Recipe_Backpack5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Backpack5_C* ARecipe_Backpack5_C::GetDefaultObj()
{
	static class ARecipe_Backpack5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Backpack5_C*>(ARecipe_Backpack5_C::StaticClass()->DefaultObject);

	return Default;
}

}


