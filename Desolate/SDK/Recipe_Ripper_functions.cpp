#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Ripper.Recipe_Ripper_C
// (Actor)

class UClass* ARecipe_Ripper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Ripper_C");

	return Clss;
}


// Recipe_Ripper_C Recipe_Ripper.Default__Recipe_Ripper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Ripper_C* ARecipe_Ripper_C::GetDefaultObj()
{
	static class ARecipe_Ripper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Ripper_C*>(ARecipe_Ripper_C::StaticClass()->DefaultObject);

	return Default;
}

}


