#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Trap.Recipe_Trap_C
// (Actor)

class UClass* ARecipe_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Trap_C");

	return Clss;
}


// Recipe_Trap_C Recipe_Trap.Default__Recipe_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Trap_C* ARecipe_Trap_C::GetDefaultObj()
{
	static class ARecipe_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Trap_C*>(ARecipe_Trap_C::StaticClass()->DefaultObject);

	return Default;
}

}


