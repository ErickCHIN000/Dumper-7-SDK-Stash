#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_AnsoraDelight.Recipe_AnsoraDelight_C
// (Actor)

class UClass* ARecipe_AnsoraDelight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_AnsoraDelight_C");

	return Clss;
}


// Recipe_AnsoraDelight_C Recipe_AnsoraDelight.Default__Recipe_AnsoraDelight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_AnsoraDelight_C* ARecipe_AnsoraDelight_C::GetDefaultObj()
{
	static class ARecipe_AnsoraDelight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_AnsoraDelight_C*>(ARecipe_AnsoraDelight_C::StaticClass()->DefaultObject);

	return Default;
}

}


