#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedSledgeHammer.BP_DamagedSledgeHammer_C
// (Actor)

class UClass* ABP_DamagedSledgeHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedSledgeHammer_C");

	return Clss;
}


// BP_DamagedSledgeHammer_C BP_DamagedSledgeHammer.Default__BP_DamagedSledgeHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedSledgeHammer_C* ABP_DamagedSledgeHammer_C::GetDefaultObj()
{
	static class ABP_DamagedSledgeHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedSledgeHammer_C*>(ABP_DamagedSledgeHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


