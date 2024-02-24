#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Titan.Recipe_Titan_C
// (Actor)

class UClass* ARecipe_Titan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Titan_C");

	return Clss;
}


// Recipe_Titan_C Recipe_Titan.Default__Recipe_Titan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Titan_C* ARecipe_Titan_C::GetDefaultObj()
{
	static class ARecipe_Titan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Titan_C*>(ARecipe_Titan_C::StaticClass()->DefaultObject);

	return Default;
}

}


