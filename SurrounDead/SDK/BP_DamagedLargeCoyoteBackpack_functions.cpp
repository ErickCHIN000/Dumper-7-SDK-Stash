#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedLargeCoyoteBackpack.BP_DamagedLargeCoyoteBackpack_C
// (Actor)

class UClass* ABP_DamagedLargeCoyoteBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedLargeCoyoteBackpack_C");

	return Clss;
}


// BP_DamagedLargeCoyoteBackpack_C BP_DamagedLargeCoyoteBackpack.Default__BP_DamagedLargeCoyoteBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedLargeCoyoteBackpack_C* ABP_DamagedLargeCoyoteBackpack_C::GetDefaultObj()
{
	static class ABP_DamagedLargeCoyoteBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedLargeCoyoteBackpack_C*>(ABP_DamagedLargeCoyoteBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


