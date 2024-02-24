#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_TunaSandwich.Recipe_TunaSandwich_C
// (Actor)

class UClass* ARecipe_TunaSandwich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_TunaSandwich_C");

	return Clss;
}


// Recipe_TunaSandwich_C Recipe_TunaSandwich.Default__Recipe_TunaSandwich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_TunaSandwich_C* ARecipe_TunaSandwich_C::GetDefaultObj()
{
	static class ARecipe_TunaSandwich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_TunaSandwich_C*>(ARecipe_TunaSandwich_C::StaticClass()->DefaultObject);

	return Default;
}

}


