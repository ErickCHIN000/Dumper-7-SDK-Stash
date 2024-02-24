#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WaterJug.BP_WaterJug_C
// (Actor)

class UClass* ABP_WaterJug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WaterJug_C");

	return Clss;
}


// BP_WaterJug_C BP_WaterJug.Default__BP_WaterJug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WaterJug_C* ABP_WaterJug_C::GetDefaultObj()
{
	static class ABP_WaterJug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WaterJug_C*>(ABP_WaterJug_C::StaticClass()->DefaultObject);

	return Default;
}

}


