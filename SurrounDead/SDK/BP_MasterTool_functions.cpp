#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterTool.BP_MasterTool_C
// (Actor)

class UClass* ABP_MasterTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterTool_C");

	return Clss;
}


// BP_MasterTool_C BP_MasterTool.Default__BP_MasterTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterTool_C* ABP_MasterTool_C::GetDefaultObj()
{
	static class ABP_MasterTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterTool_C*>(ABP_MasterTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


