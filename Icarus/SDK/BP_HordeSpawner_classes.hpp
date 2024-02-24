#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE4 (0x304 - 0x220)
// BlueprintGeneratedClass BP_HordeSpawner.BP_HordeSpawner_C
class ABP_HordeSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x230(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NPCSpawned;                                        // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FHordeCreatureSetup                   Creature;                                          // 0x250(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Multiplier;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Random_Stream;                                     // 0x2F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	float                                        SpawnRadius;                                       // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpaceBetween;                                      // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HordeSpawner_C* GetDefaultObj();

	void GetLevelForAI(int32* Level, enum class EMissionDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, int32 Temp_wildcard_Variable, enum class EMissionDifficulty CallFunc_GetCurrentProspectDifficulty_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GenerateLevelFromLocation_Level);
	void EQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void SpawnCreature(const struct FHordeCreatureSetup& Creature, float Multiplier, float InitialSpawnDelay);
	void ExecuteUbergraph_BP_HordeSpawner(int32 EntryPoint, int32 CallFunc_GetLevelForAI_Level, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, const struct FHordeCreatureSetup& K2Node_CustomEvent_Creature, float K2Node_CustomEvent_Multiplier, float K2Node_CustomEvent_InitialSpawnDelay, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AActor* CallFunc_SpawnNewAI_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue);
	void NPCSpawned__DelegateSignature(class ABP_IcarusNPCGOAPCharacter_C* NPC);
};

}


