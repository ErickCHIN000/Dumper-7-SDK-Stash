#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Telemetry_Creatures.BPFL_Telemetry_Creatures_C
class UBPFL_Telemetry_Creatures_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Telemetry_Creatures_C* GetDefaultObj();

	void TelemetryCreatureSpawned(class ABP_CreatureBase_C* Creature, class UObject* __WorldContext, const class FString& LMapName, class ABP_CreatureSpawnerBase_C* LSquad, class ABP_CreatureBase_C* LCreature, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue_1, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_5, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array);
};

}


