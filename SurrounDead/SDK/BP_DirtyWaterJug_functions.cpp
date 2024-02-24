#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DirtyWaterJug.BP_DirtyWaterJug_C
// (Actor)

class UClass* ABP_DirtyWaterJug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DirtyWaterJug_C");

	return Clss;
}


// BP_DirtyWaterJug_C BP_DirtyWaterJug.Default__BP_DirtyWaterJug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DirtyWaterJug_C* ABP_DirtyWaterJug_C::GetDefaultObj()
{
	static class ABP_DirtyWaterJug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DirtyWaterJug_C*>(ABP_DirtyWaterJug_C::StaticClass()->DefaultObject);

	return Default;
}

}


