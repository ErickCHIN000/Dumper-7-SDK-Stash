#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x510 - 0x420)
// BlueprintGeneratedClass GA_CreatureAbilityBase.GA_CreatureAbilityBase_C
class UGA_CreatureAbilityBase_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          Montage;                                           // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  Montages;                                          // 0x430(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  RunningMontages;                                   // 0x440(0x10)(Edit, BlueprintVisible)
	class FName                                  StartSection;                                      // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    CreaturePawn;                                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AbilityTimeout;                                    // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AbilityDelay;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MontagePlayRate;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MontageSelectionLeeway;                            // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RunningMontageSelectionLeeway;                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_RootMotionMatchMode          MontageSelectionMode;                              // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_126A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GrantAbilitiesGE;                                  // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GrantAbilitiesGEHandle;                            // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MontageDelay;                                      // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MontageDelayRandomize;                             // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ManualCreatureAbilityActivate;                     // 0x4A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1274[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                IncentiveGameplayEffectClass;                      // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_CreatureAbilityZoneDefinition> ZoneDefinition;                                    // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 Event_Tags;                                        // 0x4C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UEnvQuery*                             EQSForMontage;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryRunMode                  EQSRunMode;                                        // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1277[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EQSLocation;                                       // 0x4F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbilityBase_C* GetDefaultObj();

	void EQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item);
	void FireEQS(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue);
	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool CallFunc_CreatureAbilityActivate_bSuccess, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void ApplyIncentiveGE(TMap<class UClass*, struct FActiveGameplayEffectHandle> NewLocalVar_0, bool CallFunc_IsValidClass_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCreaturePawnTargetTransform(class ABP_CreatureBase_C* TargetCreature, class AActor* CallFunc_GetTarget_Target, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetTarget_Target_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorFeetLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2);
	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, double MaxAngle, bool bIsRunning, float CallFunc_GetCurrentSlopeInDegrees_Slope, bool CallFunc_GetCurrentSlopeInDegrees_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetIsNearOrAboveRunSpeed_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, TArray<class UAnimMontage*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_1, double K2Node_Select_Default_1, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast);
	void CreatureAbilityMontageStart();
	void CreatureAbilityError(const class FString& ErrorText, bool bEndAbility, enum class ENWXLogLevel NWXLogLevel, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void CreatureAbilityInitialize(bool* bSuccess);
	void CreatureAbilityActivate(bool* bSuccess);
	void OnFinish_81DD239E40318EF2007A90800F3EABA9();
	void EventReceived_B5926F6F4A4867E097FA3191C95732CC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_B5926F6F4A4867E097FA3191C95732CC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_B5926F6F4A4867E097FA3191C95732CC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_B5926F6F4A4867E097FA3191C95732CC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_B5926F6F4A4867E097FA3191C95732CC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EQSFinished();
	void ExecuteUbergraph_GA_CreatureAbilityBase(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CreatureAbilityInitialize_bSuccess, float CallFunc_GetPlayLength_ReturnValue, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimMontage* CallFunc_SelectMontage_SelectedMontage, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_CreatureAbilityActivate_bSuccess, bool CallFunc_CreatureAbilityActivate_bSuccess_1, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_SelectFloat_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UNWXPlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast, float CallFunc_PlayMontageAndWaitForEvent_Rate_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_WaitDelay_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


