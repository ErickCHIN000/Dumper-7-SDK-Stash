#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Quackburger.Recipe_Quackburger_C
// (Actor)

class UClass* ARecipe_Quackburger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Quackburger_C");

	return Clss;
}


// Recipe_Quackburger_C Recipe_Quackburger.Default__Recipe_Quackburger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Quackburger_C* ARecipe_Quackburger_C::GetDefaultObj()
{
	static class ARecipe_Quackburger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Quackburger_C*>(ARecipe_Quackburger_C::StaticClass()->DefaultObject);

	return Default;
}

}


