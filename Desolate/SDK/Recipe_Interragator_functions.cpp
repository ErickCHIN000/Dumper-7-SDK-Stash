#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Interragator.Recipe_Interragator_C
// (Actor)

class UClass* ARecipe_Interragator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Interragator_C");

	return Clss;
}


// Recipe_Interragator_C Recipe_Interragator.Default__Recipe_Interragator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Interragator_C* ARecipe_Interragator_C::GetDefaultObj()
{
	static class ARecipe_Interragator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Interragator_C*>(ARecipe_Interragator_C::StaticClass()->DefaultObject);

	return Default;
}

}


