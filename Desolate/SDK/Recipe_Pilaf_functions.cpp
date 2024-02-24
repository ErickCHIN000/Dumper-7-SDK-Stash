#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Pilaf.Recipe_Pilaf_C
// (Actor)

class UClass* ARecipe_Pilaf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Pilaf_C");

	return Clss;
}


// Recipe_Pilaf_C Recipe_Pilaf.Default__Recipe_Pilaf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Pilaf_C* ARecipe_Pilaf_C::GetDefaultObj()
{
	static class ARecipe_Pilaf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Pilaf_C*>(ARecipe_Pilaf_C::StaticClass()->DefaultObject);

	return Default;
}

}


