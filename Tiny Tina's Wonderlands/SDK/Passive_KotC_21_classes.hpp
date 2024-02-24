#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x207 (0x4C1 - 0x2BA)
// BlueprintGeneratedClass Passive_KotC_21.Passive_KotC_21_C
class UPassive_KotC_21_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_3063[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       FindTarget;                                        // 0x2C8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       FindLocation;                                      // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                               TargetLocation;                                    // 0x438(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundTargetLocation;                               // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_306D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageCalc;                                        // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class AActor*>                        TargetActorList;                                   // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                       TargetLocationList;                                // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableValueHandle                 MaxTargets;                                        // 0x480(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FVector>                       FinalTargetLocationList;                           // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableValueHandle                 CooldownTime;                                      // 0x4A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsFireDamage;                                      // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_KotC_21_C* GetDefaultObj();

	void OakPassiveOnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnActivated();
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void CloseChallengeGate();
	void OpenChallengeGate();
	void IterateSmiteTargets();
	void OpenSkillGate();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void ExecuteUbergraph_Passive_KotC_21(int32 EntryPoint, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UExplosionData* Temp_object_Variable, class UExplosionData* Temp_object_Variable1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FCriticalHitDamageOverrides& K2Node_MakeStruct_CriticalHitDamageOverrides, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable2, bool CallFunc_Not_PreBool_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FVector>& CallFunc_RunEnvQueryForAllLocations_ResultLocations, bool CallFunc_RunEnvQueryForAllLocations_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_CheckChallengeStatus_Complete, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USplatData* Temp_object_Variable2, int32 CallFunc_Array_Length_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue1, class USplatData* Temp_object_Variable3, int32 CallFunc_Min_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, int32 CallFunc_FTrunc_ReturnValue2, bool Temp_bool_Has_Been_Initd_Variable1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable3, class USplatData* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue4, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool Temp_bool_IsClosed_Variable1, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, class UClass* K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UExplosionData* K2Node_Select2_Default, int32 CallFunc_Array_Length_ReturnValue3, class AActor* CallFunc_Array_Get_Item2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2);
};

}


