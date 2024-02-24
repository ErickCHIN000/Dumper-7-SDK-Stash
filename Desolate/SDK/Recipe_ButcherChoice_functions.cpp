#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_ButcherChoice.Recipe_ButcherChoice_C
// (Actor)

class UClass* ARecipe_ButcherChoice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_ButcherChoice_C");

	return Clss;
}


// Recipe_ButcherChoice_C Recipe_ButcherChoice.Default__Recipe_ButcherChoice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_ButcherChoice_C* ARecipe_ButcherChoice_C::GetDefaultObj()
{
	static class ARecipe_ButcherChoice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_ButcherChoice_C*>(ARecipe_ButcherChoice_C::StaticClass()->DefaultObject);

	return Default;
}

}


