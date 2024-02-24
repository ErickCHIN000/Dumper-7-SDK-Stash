#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Lighter.Recipe_Lighter_C
// (Actor)

class UClass* ARecipe_Lighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Lighter_C");

	return Clss;
}


// Recipe_Lighter_C Recipe_Lighter.Default__Recipe_Lighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Lighter_C* ARecipe_Lighter_C::GetDefaultObj()
{
	static class ARecipe_Lighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Lighter_C*>(ARecipe_Lighter_C::StaticClass()->DefaultObject);

	return Default;
}

}


