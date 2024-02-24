#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CavernPOIPartitionDistributionStage.BP_CavernPOIPartitionDistributionStage_C
// (None)

class UClass* UBP_CavernPOIPartitionDistributionStage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CavernPOIPartitionDistributionStage_C");

	return Clss;
}


// BP_CavernPOIPartitionDistributionStage_C BP_CavernPOIPartitionDistributionStage.Default__BP_CavernPOIPartitionDistributionStage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CavernPOIPartitionDistributionStage_C* UBP_CavernPOIPartitionDistributionStage_C::GetDefaultObj()
{
	static class UBP_CavernPOIPartitionDistributionStage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CavernPOIPartitionDistributionStage_C*>(UBP_CavernPOIPartitionDistributionStage_C::StaticClass()->DefaultObject);

	return Default;
}

}


