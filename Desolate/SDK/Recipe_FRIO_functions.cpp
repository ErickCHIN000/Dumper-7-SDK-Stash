#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_FRIO.Recipe_Frio_C
// (Actor)

class UClass* ARecipe_Frio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Frio_C");

	return Clss;
}


// Recipe_Frio_C Recipe_FRIO.Default__Recipe_Frio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Frio_C* ARecipe_Frio_C::GetDefaultObj()
{
	static class ARecipe_Frio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Frio_C*>(ARecipe_Frio_C::StaticClass()->DefaultObject);

	return Default;
}

}


