#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_BlockedSpawnAreas.EnvQueryContext_BlockedSpawnAreas_C
class UEnvQueryContext_BlockedSpawnAreas_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_BlockedSpawnAreas_C* GetDefaultObj();

	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, const TArray<struct FVector>& Output, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_AISpawner_C* CallFunc_GetActorOfClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpawnBlocker& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


