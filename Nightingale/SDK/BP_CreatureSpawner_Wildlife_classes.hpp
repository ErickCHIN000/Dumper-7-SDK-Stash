#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1638 - 0x1618)
// BlueprintGeneratedClass BP_CreatureSpawner_Wildlife.BP_CreatureSpawner_Wildlife_C
class ABP_CreatureSpawner_Wildlife_C : public ABP_CreatureSpawnerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1618(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        PerceivedTargets;                                  // 0x1620(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          FearValidationTimer;                               // 0x1630(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_Wildlife_C* GetDefaultObj();

	void ValidateFearList(const struct FGameplayTag& LAfraid, const TArray<class AActor*>& LFears, class AActor* LCurrentFear, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsAfraidOf_bIsAfraidOf, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleSquadPerceptionUpdates(class AActor* Target, bool WasSensed, bool* Success, const struct FGameplayTag& LAfraid, bool LWasSensed, class AActor* LTarget, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HandleSquadPerceptionUpdates_Success);
	void ReceiveAuthorityGained();
	void ReceiveAuthorityLost();
	void BndEvt__BP_CreatureSpawner_Wildlife_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature(struct FGameplayTag& Tag, int32 Count);
	void ExecuteUbergraph_BP_CreatureSpawner_Wildlife(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameplayTag& K2Node_ComponentBoundEvent_Tag, int32 K2Node_ComponentBoundEvent_Count, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


