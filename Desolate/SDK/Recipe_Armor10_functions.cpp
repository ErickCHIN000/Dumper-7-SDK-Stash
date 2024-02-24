#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Armor10.Recipe_Armor10_C
// (Actor)

class UClass* ARecipe_Armor10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Armor10_C");

	return Clss;
}


// Recipe_Armor10_C Recipe_Armor10.Default__Recipe_Armor10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Armor10_C* ARecipe_Armor10_C::GetDefaultObj()
{
	static class ARecipe_Armor10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Armor10_C*>(ARecipe_Armor10_C::StaticClass()->DefaultObject);

	return Default;
}

}


