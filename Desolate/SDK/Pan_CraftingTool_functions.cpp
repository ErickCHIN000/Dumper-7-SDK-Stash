#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pan_CraftingTool.Pan_CraftingTool_C
// (Actor)

class UClass* APan_CraftingTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pan_CraftingTool_C");

	return Clss;
}


// Pan_CraftingTool_C Pan_CraftingTool.Default__Pan_CraftingTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APan_CraftingTool_C* APan_CraftingTool_C::GetDefaultObj()
{
	static class APan_CraftingTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APan_CraftingTool_C*>(APan_CraftingTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


