#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Flour.Recipe_Flour_C
// (Actor)

class UClass* ARecipe_Flour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Flour_C");

	return Clss;
}


// Recipe_Flour_C Recipe_Flour.Default__Recipe_Flour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Flour_C* ARecipe_Flour_C::GetDefaultObj()
{
	static class ARecipe_Flour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Flour_C*>(ARecipe_Flour_C::StaticClass()->DefaultObject);

	return Default;
}

}


