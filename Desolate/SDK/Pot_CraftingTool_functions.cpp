#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pot_CraftingTool.Pot_CraftingTool_C
// (Actor)

class UClass* APot_CraftingTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pot_CraftingTool_C");

	return Clss;
}


// Pot_CraftingTool_C Pot_CraftingTool.Default__Pot_CraftingTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APot_CraftingTool_C* APot_CraftingTool_C::GetDefaultObj()
{
	static class APot_CraftingTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APot_CraftingTool_C*>(APot_CraftingTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


