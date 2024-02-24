#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SledgeHammer.BP_SledgeHammer_C
// (Actor)

class UClass* ABP_SledgeHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SledgeHammer_C");

	return Clss;
}


// BP_SledgeHammer_C BP_SledgeHammer.Default__BP_SledgeHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SledgeHammer_C* ABP_SledgeHammer_C::GetDefaultObj()
{
	static class ABP_SledgeHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SledgeHammer_C*>(ABP_SledgeHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


