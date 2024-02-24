#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_BlackMark.Recipe_BlackMark_C
// (Actor)

class UClass* ARecipe_BlackMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_BlackMark_C");

	return Clss;
}


// Recipe_BlackMark_C Recipe_BlackMark.Default__Recipe_BlackMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_BlackMark_C* ARecipe_BlackMark_C::GetDefaultObj()
{
	static class ARecipe_BlackMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_BlackMark_C*>(ARecipe_BlackMark_C::StaticClass()->DefaultObject);

	return Default;
}

}


