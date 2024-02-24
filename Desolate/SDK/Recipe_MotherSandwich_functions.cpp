#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MotherSandwich.Recipe_MotherSandwich_C
// (Actor)

class UClass* ARecipe_MotherSandwich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MotherSandwich_C");

	return Clss;
}


// Recipe_MotherSandwich_C Recipe_MotherSandwich.Default__Recipe_MotherSandwich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MotherSandwich_C* ARecipe_MotherSandwich_C::GetDefaultObj()
{
	static class ARecipe_MotherSandwich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MotherSandwich_C*>(ARecipe_MotherSandwich_C::StaticClass()->DefaultObject);

	return Default;
}

}


