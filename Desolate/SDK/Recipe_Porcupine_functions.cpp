#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Porcupine.Recipe_Porcupine_C
// (Actor)

class UClass* ARecipe_Porcupine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Porcupine_C");

	return Clss;
}


// Recipe_Porcupine_C Recipe_Porcupine.Default__Recipe_Porcupine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Porcupine_C* ARecipe_Porcupine_C::GetDefaultObj()
{
	static class ARecipe_Porcupine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Porcupine_C*>(ARecipe_Porcupine_C::StaticClass()->DefaultObject);

	return Default;
}

}


