#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x538 - 0x400)
// BlueprintGeneratedClass BPTA_Crafting_Step_StepDataReplicated.BPTA_Crafting_Step_StepDataReplicated_C
class ABPTA_Crafting_Step_StepDataReplicated_C : public ANWXGameplayAbilityTargetActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftingStationActor;                              // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutHandle;                                     // 0x420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DataReplicatedHandle;                              // 0x428(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                CrafterID;                                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_Crafting_CraftInProgress           CurrentCraftInProgress;                            // 0x440(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_D59[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicTypedStructs                  BlankStructs;                                      // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	double                                       TIMEOUT_LENGTH;                                    // 0x530(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTA_Crafting_Step_StepDataReplicated_C* GetDefaultObj();

	void ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, const struct FS_Crafting_CraftInProgress& ServerCIPData, const class FString& CallFunc_DynamicStructsToString_ReturnValue, const class FString& CallFunc_DynamicStructsToString_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue);
	void ReceiveBeginPlay();
	void Timeout();
	void CheckForDataReplication();
	void InvalidateTimers();
	void ExecuteUbergraph_BPTA_Crafting_Step_StepDataReplicated(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_DynamicStructsToString_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item, const class FString& CallFunc_DynamicStructsToString_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


