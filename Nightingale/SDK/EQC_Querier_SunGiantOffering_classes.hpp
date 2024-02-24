#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EQC_Querier_SunGiantOffering.EQC_Querier_SunGiantOffering_C
class UEQC_Querier_SunGiantOffering_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEQC_Querier_SunGiantOffering_C* GetDefaultObj();

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue);
};

}


