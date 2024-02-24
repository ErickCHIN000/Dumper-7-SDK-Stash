#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Kunai.Recipe_Kunai_C
// (Actor)

class UClass* ARecipe_Kunai_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Kunai_C");

	return Clss;
}


// Recipe_Kunai_C Recipe_Kunai.Default__Recipe_Kunai_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Kunai_C* ARecipe_Kunai_C::GetDefaultObj()
{
	static class ARecipe_Kunai_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Kunai_C*>(ARecipe_Kunai_C::StaticClass()->DefaultObject);

	return Default;
}

}


