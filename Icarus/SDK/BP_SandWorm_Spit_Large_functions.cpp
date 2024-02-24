#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SandWorm_Spit_Large.BP_SandWorm_Spit_Large_C
// (Actor)

class UClass* ABP_SandWorm_Spit_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SandWorm_Spit_Large_C");

	return Clss;
}


// BP_SandWorm_Spit_Large_C BP_SandWorm_Spit_Large.Default__BP_SandWorm_Spit_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SandWorm_Spit_Large_C* ABP_SandWorm_Spit_Large_C::GetDefaultObj()
{
	static class ABP_SandWorm_Spit_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SandWorm_Spit_Large_C*>(ABP_SandWorm_Spit_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


