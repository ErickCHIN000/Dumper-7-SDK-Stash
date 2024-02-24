#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_MasterTools.Recipe_MasterTools_C
// (Actor)

class UClass* ARecipe_MasterTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_MasterTools_C");

	return Clss;
}


// Recipe_MasterTools_C Recipe_MasterTools.Default__Recipe_MasterTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_MasterTools_C* ARecipe_MasterTools_C::GetDefaultObj()
{
	static class ARecipe_MasterTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_MasterTools_C*>(ARecipe_MasterTools_C::StaticClass()->DefaultObject);

	return Default;
}

}


