#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoyoteBackpack.BP_CoyoteBackpack_C
// (Actor)

class UClass* ABP_CoyoteBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoyoteBackpack_C");

	return Clss;
}


// BP_CoyoteBackpack_C BP_CoyoteBackpack.Default__BP_CoyoteBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CoyoteBackpack_C* ABP_CoyoteBackpack_C::GetDefaultObj()
{
	static class ABP_CoyoteBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CoyoteBackpack_C*>(ABP_CoyoteBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


