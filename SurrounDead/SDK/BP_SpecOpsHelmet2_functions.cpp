#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpecOpsHelmet2.BP_SpecOpsHelmet2_C
// (Actor)

class UClass* ABP_SpecOpsHelmet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpecOpsHelmet2_C");

	return Clss;
}


// BP_SpecOpsHelmet2_C BP_SpecOpsHelmet2.Default__BP_SpecOpsHelmet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpecOpsHelmet2_C* ABP_SpecOpsHelmet2_C::GetDefaultObj()
{
	static class ABP_SpecOpsHelmet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpecOpsHelmet2_C*>(ABP_SpecOpsHelmet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


