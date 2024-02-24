#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedCoyoteBackpack.BP_DamagedCoyoteBackpack_C
// (Actor)

class UClass* ABP_DamagedCoyoteBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedCoyoteBackpack_C");

	return Clss;
}


// BP_DamagedCoyoteBackpack_C BP_DamagedCoyoteBackpack.Default__BP_DamagedCoyoteBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedCoyoteBackpack_C* ABP_DamagedCoyoteBackpack_C::GetDefaultObj()
{
	static class ABP_DamagedCoyoteBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedCoyoteBackpack_C*>(ABP_DamagedCoyoteBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


