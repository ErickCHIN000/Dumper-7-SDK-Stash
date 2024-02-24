#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Meta_Antibiotic_Vaccine.BP_Meta_Antibiotic_Vaccine_C
// (Actor)

class UClass* ABP_Meta_Antibiotic_Vaccine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Meta_Antibiotic_Vaccine_C");

	return Clss;
}


// BP_Meta_Antibiotic_Vaccine_C BP_Meta_Antibiotic_Vaccine.Default__BP_Meta_Antibiotic_Vaccine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Meta_Antibiotic_Vaccine_C* ABP_Meta_Antibiotic_Vaccine_C::GetDefaultObj()
{
	static class ABP_Meta_Antibiotic_Vaccine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Meta_Antibiotic_Vaccine_C*>(ABP_Meta_Antibiotic_Vaccine_C::StaticClass()->DefaultObject);

	return Default;
}

}


