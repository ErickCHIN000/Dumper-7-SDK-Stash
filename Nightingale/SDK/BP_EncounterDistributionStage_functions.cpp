#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EncounterDistributionStage.BP_EncounterDistributionStage_C
// (None)

class UClass* UBP_EncounterDistributionStage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EncounterDistributionStage_C");

	return Clss;
}


// BP_EncounterDistributionStage_C BP_EncounterDistributionStage.Default__BP_EncounterDistributionStage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EncounterDistributionStage_C* UBP_EncounterDistributionStage_C::GetDefaultObj()
{
	static class UBP_EncounterDistributionStage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EncounterDistributionStage_C*>(UBP_EncounterDistributionStage_C::StaticClass()->DefaultObject);

	return Default;
}

}


