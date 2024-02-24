#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExperimentalFilterDistributionStage.BP_ExperimentalFilterDistributionStage_C
// (None)

class UClass* UBP_ExperimentalFilterDistributionStage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExperimentalFilterDistributionStage_C");

	return Clss;
}


// BP_ExperimentalFilterDistributionStage_C BP_ExperimentalFilterDistributionStage.Default__BP_ExperimentalFilterDistributionStage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExperimentalFilterDistributionStage_C* UBP_ExperimentalFilterDistributionStage_C::GetDefaultObj()
{
	static class UBP_ExperimentalFilterDistributionStage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExperimentalFilterDistributionStage_C*>(UBP_ExperimentalFilterDistributionStage_C::StaticClass()->DefaultObject);

	return Default;
}

}


