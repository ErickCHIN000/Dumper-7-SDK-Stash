#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x4B8 - 0x400)
// BlueprintGeneratedClass BPTA_Crafting_Step_EffectsApplied.BPTA_Crafting_Step_EffectsApplied_C
class ABPTA_Crafting_Step_EffectsApplied_C : public ANWXGameplayAbilityTargetActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   StepHandle;                                        // 0x410(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_Crafting_Step_Definition           StepDef;                                           // 0x420(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UClass*>                        EffectClasses;                                     // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          EffectCheckTimer;                                  // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Crafter;                                           // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                CraftingStation;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutHandle;                                     // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LoadedCrafterEffect;                               // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LoadedStationEffect;                               // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TIMEOUT_LENGTH;                                    // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTA_Crafting_Step_EffectsApplied_C* GetDefaultObj();

	void ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, int32 CallFunc_GetGameplayEffectCount_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue_1, bool K2Node_MathExpression_ReturnValue);
	void ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue);
	void AsyncLoadEffect(class UClass* EffectClass);
	void CheckDoneLoading();
	void CheckEffectsApplied();
	void Timeout();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPTA_Crafting_Step_EffectsApplied(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_CustomEvent_EffectClass, class UClass* K2Node_ClassDynamicCast_AsGameplay_Effect, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UClass* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_1, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_GetGameplayEffectCount_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue_1, bool K2Node_MathExpression_ReturnValue, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


