#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BlackWidow.Recipe_BlackWidow_C
// (Actor)

class UClass* ARecipe_BlackWidow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BlackWidow_C");

	return Clss;
}


// Recipe_BlackWidow_C Recipe_BlackWidow.Default__Recipe_BlackWidow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BlackWidow_C* ARecipe_BlackWidow_C::GetDefaultObj()
{
	static class ARecipe_BlackWidow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BlackWidow_C*>(ARecipe_BlackWidow_C::StaticClass()->DefaultObject);

	return Default;
}

}


