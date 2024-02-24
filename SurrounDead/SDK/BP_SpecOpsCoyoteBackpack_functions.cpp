#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpecOpsCoyoteBackpack.BP_SpecOpsCoyoteBackpack_C
// (Actor)

class UClass* ABP_SpecOpsCoyoteBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpecOpsCoyoteBackpack_C");

	return Clss;
}


// BP_SpecOpsCoyoteBackpack_C BP_SpecOpsCoyoteBackpack.Default__BP_SpecOpsCoyoteBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpecOpsCoyoteBackpack_C* ABP_SpecOpsCoyoteBackpack_C::GetDefaultObj()
{
	static class ABP_SpecOpsCoyoteBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpecOpsCoyoteBackpack_C*>(ABP_SpecOpsCoyoteBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


