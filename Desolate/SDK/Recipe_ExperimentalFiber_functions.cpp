#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_ExperimentalFiber.Recipe_ExperimentalFiber_C
// (Actor)

class UClass* ARecipe_ExperimentalFiber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_ExperimentalFiber_C");

	return Clss;
}


// Recipe_ExperimentalFiber_C Recipe_ExperimentalFiber.Default__Recipe_ExperimentalFiber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_ExperimentalFiber_C* ARecipe_ExperimentalFiber_C::GetDefaultObj()
{
	static class ARecipe_ExperimentalFiber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_ExperimentalFiber_C*>(ARecipe_ExperimentalFiber_C::StaticClass()->DefaultObject);

	return Default;
}

}


