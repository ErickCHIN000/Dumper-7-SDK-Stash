#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Frio2.Recipe_Frio2_C
// (Actor)

class UClass* ARecipe_Frio2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Frio2_C");

	return Clss;
}


// Recipe_Frio2_C Recipe_Frio2.Default__Recipe_Frio2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Frio2_C* ARecipe_Frio2_C::GetDefaultObj()
{
	static class ARecipe_Frio2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Frio2_C*>(ARecipe_Frio2_C::StaticClass()->DefaultObject);

	return Default;
}

}


