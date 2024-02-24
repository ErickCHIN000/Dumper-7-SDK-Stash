#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Mohito.Recipe_Mohito_C
// (Actor)

class UClass* ARecipe_Mohito_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Mohito_C");

	return Clss;
}


// Recipe_Mohito_C Recipe_Mohito.Default__Recipe_Mohito_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Mohito_C* ARecipe_Mohito_C::GetDefaultObj()
{
	static class ARecipe_Mohito_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Mohito_C*>(ARecipe_Mohito_C::StaticClass()->DefaultObject);

	return Default;
}

}


