#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScavengerBackpack.BP_ScavengerBackpack_C
// (Actor)

class UClass* ABP_ScavengerBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScavengerBackpack_C");

	return Clss;
}


// BP_ScavengerBackpack_C BP_ScavengerBackpack.Default__BP_ScavengerBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ScavengerBackpack_C* ABP_ScavengerBackpack_C::GetDefaultObj()
{
	static class ABP_ScavengerBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ScavengerBackpack_C*>(ABP_ScavengerBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


