#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LaboratoryMaster.BP_LaboratoryMaster_C
// (Actor)

class UClass* ABP_LaboratoryMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LaboratoryMaster_C");

	return Clss;
}


// BP_LaboratoryMaster_C BP_LaboratoryMaster.Default__BP_LaboratoryMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LaboratoryMaster_C* ABP_LaboratoryMaster_C::GetDefaultObj()
{
	static class ABP_LaboratoryMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LaboratoryMaster_C*>(ABP_LaboratoryMaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


