#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x680 - 0x570)
// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C
class UGA_Crafting_Step_Refinement_Station_Activate_C : public UGA_Crafting_Step_Activation_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDynamicTypedStructs                  StepDefaultData;                                   // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       RecipeLength;                                      // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ActiveTimer;                                       // 0x590(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D0D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeHandle;                                      // 0x5A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_Crafting_Step_RefinementTimer      CurrentRefinementTimer;                            // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     TAGQUERY_CRAFTING_EFFICIENCY;                      // 0x618(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class URealmTimerComponent*                  RealmTimer;                                        // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       RecipeStartTime;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentQuantity;                                   // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D1B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureFireComponent*               FireComponent;                                     // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Refinement_Station_Activate_C* GetDefaultObj();

	void OnFireStateChanged(bool bFireEnabled);
	void OnFireIgnited(bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_OnActivation_Success, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnFireExtinguish(bool CallFunc_IsValid_ReturnValue);
	void StartTimer(double TimerLength, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Advance(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void UpdateTimer(double TimeRemaining, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void SetupRealmTimer(class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	int32 GetStationEfficiencyTier(int32 NewEfficiencyTier, const struct FGameplayTag& CurrentOwnedTag, const TArray<struct FGameplayTag>& OwnedStationTags, const struct FActiveGameplayEffectHandle& CurrentEffectHandle, int32 StationEfficiencyTier, class UAbilitySystemComponent* StationASC, int32 Temp_int_Variable, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue);
	double GetTimerLength(bool* bSuccess, int32 StationEfficiencyTier, const struct FActiveGameplayEffectHandle& CurrentEffectHandle, class UAbilitySystemComponent* StationASC, double CalculatedTimerLength, double CallFunc_GetCurrentRefinementMod_Time, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_VariableSet_CalculatedTimerLength_ImplicitCast);
	void HandleDebug(bool* FireTimer, class AController* LocalController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsStateActive_ReturnValue);
	void OnAbilityEnd(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void OnActivation(bool* Success, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HandleDebug_FireTimer, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OnActivation_Success);
	void GenerateStepData(bool* Success, const struct FDynamicTypedStructs& CurrentData, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut, float K2Node_SetFieldsInStruct_Time_2_616A1CC7419B8642FC3CE291565BE9CE_ImplicitCast, float K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast);
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, const struct FS_Crafting_Step_Definition& StepData, const struct FS_Crafting_CraftInProgress& CraftInProgressData, bool InitializeSuccess, bool K2Node_MathExpression_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_GetStepRefinementTimerLength_Return_Value, double CallFunc_GetStepRefinementTimerLength_Delta, class UStructureFireComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void TimerComplete();
	void ExecuteUbergraph_GA_Crafting_Step_Refinement_Station_Activate(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue);
};

}


