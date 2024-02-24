#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_ButcherRecipes.LL_ButcherRecipes_C
// (Actor)

class UClass* ALL_ButcherRecipes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_ButcherRecipes_C");

	return Clss;
}


// LL_ButcherRecipes_C LL_ButcherRecipes.Default__LL_ButcherRecipes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_ButcherRecipes_C* ALL_ButcherRecipes_C::GetDefaultObj()
{
	static class ALL_ButcherRecipes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_ButcherRecipes_C*>(ALL_ButcherRecipes_C::StaticClass()->DefaultObject);

	return Default;
}

}


