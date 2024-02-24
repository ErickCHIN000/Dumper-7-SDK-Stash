#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Recipe_Dumplings.Recipe_Dumplings_C
// (Actor)

class UClass* ARecipe_Dumplings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Recipe_Dumplings_C");

	return Clss;
}


// Recipe_Dumplings_C Recipe_Dumplings.Default__Recipe_Dumplings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecipe_Dumplings_C* ARecipe_Dumplings_C::GetDefaultObj()
{
	static class ARecipe_Dumplings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecipe_Dumplings_C*>(ARecipe_Dumplings_C::StaticClass()->DefaultObject);

	return Default;
}

}


