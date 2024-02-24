#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MulledWine.Recipe_MulledWine_C
// (Actor)

class UClass* ARecipe_MulledWine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MulledWine_C");

	return Clss;
}


// Recipe_MulledWine_C Recipe_MulledWine.Default__Recipe_MulledWine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MulledWine_C* ARecipe_MulledWine_C::GetDefaultObj()
{
	static class ARecipe_MulledWine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MulledWine_C*>(ARecipe_MulledWine_C::StaticClass()->DefaultObject);

	return Default;
}

}


