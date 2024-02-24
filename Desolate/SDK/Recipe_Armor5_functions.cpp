#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor5.Recipe_Armor5_C
// (Actor)

class UClass* ARecipe_Armor5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor5_C");

	return Clss;
}


// Recipe_Armor5_C Recipe_Armor5.Default__Recipe_Armor5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor5_C* ARecipe_Armor5_C::GetDefaultObj()
{
	static class ARecipe_Armor5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor5_C*>(ARecipe_Armor5_C::StaticClass()->DefaultObject);

	return Default;
}

}


