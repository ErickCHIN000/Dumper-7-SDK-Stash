#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_RecentlyBlockedPathLocations.EnvQueryContext_RecentlyBlockedPathLocations_C
class UEnvQueryContext_RecentlyBlockedPathLocations_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_RecentlyBlockedPathLocations_C* GetDefaultObj();

	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, class UObject* Temp_wildcard_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AIcarusNPCController* K2Node_DynamicCast_AsIcarus_NPCController, bool K2Node_DynamicCast_bSuccess_1, class AAIController* CallFunc_GetAIController_ReturnValue, TArray<struct FVector>& CallFunc_GetBlockedPathLocations_BlockedLocations, TArray<struct FVector>& K2Node_MakeArray_Array);
};

}


