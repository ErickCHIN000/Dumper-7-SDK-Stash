#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VoxelRock.BP_VoxelRock_C
// (Actor)

class UClass* ABP_VoxelRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VoxelRock_C");

	return Clss;
}


// BP_VoxelRock_C BP_VoxelRock.Default__BP_VoxelRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VoxelRock_C* ABP_VoxelRock_C::GetDefaultObj()
{
	static class ABP_VoxelRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VoxelRock_C*>(ABP_VoxelRock_C::StaticClass()->DefaultObject);

	return Default;
}

}


