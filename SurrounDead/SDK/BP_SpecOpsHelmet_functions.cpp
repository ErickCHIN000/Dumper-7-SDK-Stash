#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpecOpsHelmet.BP_SpecOpsHelmet_C
// (Actor)

class UClass* ABP_SpecOpsHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpecOpsHelmet_C");

	return Clss;
}


// BP_SpecOpsHelmet_C BP_SpecOpsHelmet.Default__BP_SpecOpsHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpecOpsHelmet_C* ABP_SpecOpsHelmet_C::GetDefaultObj()
{
	static class ABP_SpecOpsHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpecOpsHelmet_C*>(ABP_SpecOpsHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


