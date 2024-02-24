#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x170 - 0x164)
// BlueprintGeneratedClass BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C
class UBPQC_AnimalSwarm_Local_C : public UBPQC_AnimalSwarm_C
{
public:
	uint8                                        Pad_257A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBPQC_AnimalSwarm_Local_C* GetDefaultObj();

	void GetCreatureToSpawnFromAtmosphere(const struct FAtmospheresEnum& Atmosphere, struct FAISetupRowHandle* OutCreature, int32 Temp_int_Variable, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FAISetupRowHandle& Temp_struct_Variable, const struct FAISetupRowHandle& Temp_struct_Variable_1, const struct FAISetupRowHandle& Temp_struct_Variable_2, int32 Temp_int_Variable_1, const struct FAISetupRowHandle& Temp_struct_Variable_3, const struct FAISetupRowHandle& Temp_struct_Variable_4, const struct FAISetupRowHandle& Temp_struct_Variable_5, int32 Temp_int_Variable_2, const struct FAISetupRowHandle& Temp_struct_Variable_6, const struct FAISetupRowHandle& Temp_struct_Variable_7, const struct FAISetupRowHandle& Temp_struct_Variable_8, int32 Temp_int_Variable_3, const struct FAISetupRowHandle& Temp_struct_Variable_9, const struct FAISetupRowHandle& Temp_struct_Variable_10, const struct FAISetupRowHandle& Temp_struct_Variable_11, const struct FAISetupRowHandle& Temp_struct_Variable_12, int32 Temp_int_Variable_4, const struct FAISetupRowHandle& Temp_struct_Variable_13, const struct FAISetupRowHandle& Temp_struct_Variable_14, const struct FAISetupRowHandle& Temp_struct_Variable_15, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, const struct FAISetupRowHandle& K2Node_Select_Default, const struct FAISetupRowHandle& K2Node_Select_Default_1, int32 CallFunc_RandomInteger_ReturnValue_2, const struct FAISetupRowHandle& K2Node_Select_Default_2, int32 CallFunc_RandomInteger_ReturnValue_3, const struct FAISetupRowHandle& K2Node_Select_Default_3, const struct FAISetupRowHandle& K2Node_Select_Default_4);
	void ModifyTimeByAttraction(float RawValue, float* ModifiedValue, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void GetFallbackCreature(struct FAISetupRowHandle* CreatureToSpawn, class AActor* CallFunc_GetOwner_ReturnValue, class UActorState* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAtmospheresEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FAISetupRowHandle& CallFunc_GetCreatureToSpawnFromAtmosphere_OutCreature);
	void ModifyAmountByAttraction(int32 RawValue, int32* ModifiedValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	bool CanSpawn(bool CallFunc_IsActive_ReturnValue);
	void Select_AITo_Spawn(struct FAISetupRowHandle* Output, const struct FAISetupRowHandle& CallFunc_GetFallbackCreature_CreatureToSpawn, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_AISpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_AISpawner_C* CallFunc_Array_Get_Item, const struct FAISetupRowHandle& CallFunc_PickNewAIToSpawn_Output, int32 CallFunc_PickNewAIToSpawn_Level, bool CallFunc_PickNewAIToSpawn_ValidSpawn, bool CallFunc_IsRowHandleValid_ReturnValue);
	void SpawnCreature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPQC_AnimalSwarm_Local(int32 EntryPoint, float CallFunc_ModifyTimeByAttraction_ModifiedValue, enum class EMissionDifficulty Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, const struct FAISetupRowHandle& CallFunc_Select_AITo_Spawn_Output, TArray<struct FAISetupRowHandle>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_ModifyAmountByAttraction_ModifiedValue);
};

}


