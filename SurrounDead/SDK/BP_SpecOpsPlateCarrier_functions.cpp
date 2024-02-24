#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpecOpsPlateCarrier.BP_SpecOpsPlateCarrier_C
// (Actor)

class UClass* ABP_SpecOpsPlateCarrier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpecOpsPlateCarrier_C");

	return Clss;
}


// BP_SpecOpsPlateCarrier_C BP_SpecOpsPlateCarrier.Default__BP_SpecOpsPlateCarrier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpecOpsPlateCarrier_C* ABP_SpecOpsPlateCarrier_C::GetDefaultObj()
{
	static class ABP_SpecOpsPlateCarrier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpecOpsPlateCarrier_C*>(ABP_SpecOpsPlateCarrier_C::StaticClass()->DefaultObject);

	return Default;
}

}


