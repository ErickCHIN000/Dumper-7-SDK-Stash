#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LaboratoryKeycard.BP_LaboratoryKeycard_C
// (Actor)

class UClass* ABP_LaboratoryKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LaboratoryKeycard_C");

	return Clss;
}


// BP_LaboratoryKeycard_C BP_LaboratoryKeycard.Default__BP_LaboratoryKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LaboratoryKeycard_C* ABP_LaboratoryKeycard_C::GetDefaultObj()
{
	static class ABP_LaboratoryKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LaboratoryKeycard_C*>(ABP_LaboratoryKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


