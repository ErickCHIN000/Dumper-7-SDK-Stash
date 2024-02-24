#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MeatPie.Recipe_MeatPie_C
// (Actor)

class UClass* ARecipe_MeatPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MeatPie_C");

	return Clss;
}


// Recipe_MeatPie_C Recipe_MeatPie.Default__Recipe_MeatPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MeatPie_C* ARecipe_MeatPie_C::GetDefaultObj()
{
	static class ARecipe_MeatPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MeatPie_C*>(ARecipe_MeatPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


