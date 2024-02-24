#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Molotov.Recipe_Molotov_C
// (Actor)

class UClass* ARecipe_Molotov_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Molotov_C");

	return Clss;
}


// Recipe_Molotov_C Recipe_Molotov.Default__Recipe_Molotov_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Molotov_C* ARecipe_Molotov_C::GetDefaultObj()
{
	static class ARecipe_Molotov_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Molotov_C*>(ARecipe_Molotov_C::StaticClass()->DefaultObject);

	return Default;
}

}


