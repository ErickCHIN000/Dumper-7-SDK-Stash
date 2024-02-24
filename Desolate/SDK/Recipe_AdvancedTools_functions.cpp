#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_AdvancedTools.Recipe_AdvancedTools_C
// (Actor)

class UClass* ARecipe_AdvancedTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_AdvancedTools_C");

	return Clss;
}


// Recipe_AdvancedTools_C Recipe_AdvancedTools.Default__Recipe_AdvancedTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_AdvancedTools_C* ARecipe_AdvancedTools_C::GetDefaultObj()
{
	static class ARecipe_AdvancedTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_AdvancedTools_C*>(ARecipe_AdvancedTools_C::StaticClass()->DefaultObject);

	return Default;
}

}


