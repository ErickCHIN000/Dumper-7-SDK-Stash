#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Lady-killer.Recipe_Lady-killer_C
// (Actor)

class UClass* ARecipe_LadyMinuskiller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Lady-killer_C");

	return Clss;
}


// Recipe_Lady-killer_C Recipe_Lady-killer.Default__Recipe_Lady-killer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_LadyMinuskiller_C* ARecipe_LadyMinuskiller_C::GetDefaultObj()
{
	static class ARecipe_LadyMinuskiller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_LadyMinuskiller_C*>(ARecipe_LadyMinuskiller_C::StaticClass()->DefaultObject);

	return Default;
}

}


