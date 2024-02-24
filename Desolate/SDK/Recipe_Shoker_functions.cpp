#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Shoker.Recipe_Shoker_C
// (Actor)

class UClass* ARecipe_Shoker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Shoker_C");

	return Clss;
}


// Recipe_Shoker_C Recipe_Shoker.Default__Recipe_Shoker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Shoker_C* ARecipe_Shoker_C::GetDefaultObj()
{
	static class ARecipe_Shoker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Shoker_C*>(ARecipe_Shoker_C::StaticClass()->DefaultObject);

	return Default;
}

}


