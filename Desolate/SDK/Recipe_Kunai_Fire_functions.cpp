#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Kunai_Fire.Recipe_Kunai_Fire_C
// (Actor)

class UClass* ARecipe_Kunai_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Kunai_Fire_C");

	return Clss;
}


// Recipe_Kunai_Fire_C Recipe_Kunai_Fire.Default__Recipe_Kunai_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Kunai_Fire_C* ARecipe_Kunai_Fire_C::GetDefaultObj()
{
	static class ARecipe_Kunai_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Kunai_Fire_C*>(ARecipe_Kunai_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


