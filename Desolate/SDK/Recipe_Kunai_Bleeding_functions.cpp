#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Kunai_Bleeding.Recipe_Kunai_Bleeding_C
// (Actor)

class UClass* ARecipe_Kunai_Bleeding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Kunai_Bleeding_C");

	return Clss;
}


// Recipe_Kunai_Bleeding_C Recipe_Kunai_Bleeding.Default__Recipe_Kunai_Bleeding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Kunai_Bleeding_C* ARecipe_Kunai_Bleeding_C::GetDefaultObj()
{
	static class ARecipe_Kunai_Bleeding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Kunai_Bleeding_C*>(ARecipe_Kunai_Bleeding_C::StaticClass()->DefaultObject);

	return Default;
}

}


