#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ToolboxContainer.BP_ToolboxContainer_C
// (Actor)

class UClass* ABP_ToolboxContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ToolboxContainer_C");

	return Clss;
}


// BP_ToolboxContainer_C BP_ToolboxContainer.Default__BP_ToolboxContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ToolboxContainer_C* ABP_ToolboxContainer_C::GetDefaultObj()
{
	static class ABP_ToolboxContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ToolboxContainer_C*>(ABP_ToolboxContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


