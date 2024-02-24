#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_SweetPie.Recipe_SweetPie_C
// (Actor)

class UClass* ARecipe_SweetPie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_SweetPie_C");

	return Clss;
}


// Recipe_SweetPie_C Recipe_SweetPie.Default__Recipe_SweetPie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_SweetPie_C* ARecipe_SweetPie_C::GetDefaultObj()
{
	static class ARecipe_SweetPie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_SweetPie_C*>(ARecipe_SweetPie_C::StaticClass()->DefaultObject);

	return Default;
}

}


