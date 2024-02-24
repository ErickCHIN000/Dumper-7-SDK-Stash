#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x498 (0x538 - 0xA0)
// BlueprintGeneratedClass BP_WeakPointComponent.BP_WeakPointComponent_C
class UBP_WeakPointComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, struct FS_WeakPointDefinition> WPDefinitions;                                     // 0xA8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	struct FTimerHandle                          WindowPollTimer;                                   // 0xF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class FName>                          WindowActiveWPs;                                   // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, double>                    WindowDamageThresholds;                            // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, bool>                      WPTriggerable;                                     // 0x160(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, double>                    WindowDamageAccrued;                               // 0x1B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, struct FHitResult>         WPLatestHit;                                       // 0x200(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, double>                    WPLatestDamage;                                    // 0x250(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, double>                    WindowSubtractiveRate;                             // 0x2A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, double>                    WindowElapsedTime;                                 // 0x2F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, int32>                     WindowTime;                                        // 0x340(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	FMulticastInlineDelegateProperty_            OnWeakPointTriggered;                              // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, double>                    CumulativeDamageAccrued;                           // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	bool                                         Debug;                                             // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4031[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, bool>                      WPHasTriggered;                                    // 0x3F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, bool>                      WindowMode;                                        // 0x448(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, bool>                      WPFirstHit;                                        // 0x498(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TMap<class FName, class FName>               WPAdditionalBoneMap;                               // 0x4E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_WeakPointComponent_C* GetDefaultObj();

	void GetWeakpointHitDamage(double Damage, double* ModifiedDamage);
	void RegisterHeadshotWP(double HeadshotMultiplier, class FName LHeadBone, const struct FS_WeakPointDefinition& LHeadshotDefinition, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_SetFieldsInStruct_HitDamageMultiplier_33_02E2F66E48FE7A1FA830C1AE36D272CB_ImplicitCast);
	void IsWeakpoint(class FName bone, bool* Found, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void ApplyHitDamageTypeBonus(double& Damage, struct FGameplayTagContainer& EffectTags, struct FS_WeakPointDefinition& Definition, const struct FInventoryEntry& ItemEntry, double LDamageTypeBonus, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_FMax_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_FMax_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void GetHasHadFirstHit(class FName ID, bool* IsFirstHit, bool LTriggerable, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHasHadFirstHit(class FName& ID, bool Temp_bool_Variable);
	void ParseAdditionalBones(const TArray<class FName>& LKeys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FS_WeakPointDefinition>& CallFunc_Map_Values_Values, TArray<class FName>& CallFunc_Map_Keys_Keys, const struct FS_WeakPointDefinition& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetHasTriggered(class FName ID, bool* HasTriggered, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetTriggerable(class FName ID, bool* IsTriggerable, bool LTriggerable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ApplyWeakPointDamage(struct FGameplayTagContainer& EffectTags, double& Damage, struct FHitResult& HitResult, const struct FInventoryEntry& ItemEntry, class AActor* Instigator, bool* WeakpointHit, class FName LHitBoneName, const struct FS_WeakPointDefinition& LDefinition, double LDamage, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Lookup_Definition_Found, const struct FS_WeakPointDefinition& CallFunc_Lookup_Definition_Definition, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyHitDamageBonus(double& BaseDamage, struct FS_WeakPointDefinition& Definition, const struct FInventoryEntry& ItemEntry, class AActor* Instigator, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1, double CallFunc_Get_Called_Shot_Perk_Crit_Multiplier_Crit_Multiplier, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void SetDefintions(struct FDataTableRowHandle& WeakPointData, double LHeadshotMultiplier, const struct FS_CreatureWeakPointData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ValidateDefinitions_DefinitionsValid, double K2Node_VariableSet_LHeadshotMultiplier_ImplicitCast);
	void GetLatestDamage(class FName& ID, double* Damage, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void DeregisterLatestDamage(class FName& ID, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void RegisterLatestDamage(class FName& ID, double& Damage, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void IsWindowWPActive(class FName& ID, bool* IsActive, bool CallFunc_Array_Contains_ReturnValue);
	void SetHasTriggered(class FName ID, bool Temp_bool_Variable);
	void CheckCumulativeTrigger(struct FS_WeakPointDefinition& Definition, double LDamageThreshold, enum class Enum_WeakPointTriggerConditions LTriggerCondition, class FName LId, double LDamage, double LAccrued, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_Map_Remove_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetLatestDamage_Damage, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double K2Node_VariableSet_LDamageThreshold_ImplicitCast);
	bool RemoveActiveWindowWP(class FName ID, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_3, bool CallFunc_Map_Remove_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void AddActiveWindowWP(struct FS_WeakPointDefinition& Definition, bool IsResetType, bool LIsResetType, int32 LWindowTime, double LSubtractiveRate, double LDamageThreshold, enum class Enum_WeakPointTriggerConditions LTriggerCondition, class FName LId, bool CallFunc_IsWindowWPActive_IsActive, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double K2Node_VariableSet_LDamageThreshold_ImplicitCast, double K2Node_VariableSet_LSubtractiveRate_ImplicitCast);
	void WindowTick(bool LHasDamage, bool LWindowActive, double LSubtractiveRate, double LTime, double LElapsedTime, double LThreshold, double LDamage, double LAccrued, class FName LCurrentID, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveActiveWindowWP_ReturnValue, double Temp_real_Variable, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_RemoveActiveWindowWP_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_RemoveActiveWindowWP_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_RemoveActiveWindowWP_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_RemoveActiveWindowWP_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, double Temp_real_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_GetLatestDamage_Damage, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, double CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5);
	void StopRollingWindow();
	void SetTriggerable(class FName ID, bool Triggerable, bool CallFunc_Map_Contains_ReturnValue);
	void HandleTrigger(class FName ID);
	void StartRollingWindow(int32 LWindowTime, double LDamageThreshold, enum class Enum_WeakPointTriggerConditions LTriggerCondition, class FName LId, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void TriggerWeakPoint(const struct FHitResult& HitResult, double Damage, const struct FS_WeakPointDefinition& Definition, double LDamage, const struct FHitResult& LHitResult, int32 LWindowTime, double LDamageThreshold, enum class Enum_WeakPointTriggerConditions LTriggerCondition, enum class Enum_WeakPointTriggerTypes LTriggerType, bool LStartDisabled, class FName LId, bool CallFunc_GetHasTriggered_HasTriggered, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetTriggerable_IsTriggerable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Lookup_Definition(class FName& bone, bool* Found, struct FS_WeakPointDefinition* Definition, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_WeakPointDefinition& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void ValidateDefinitions(bool* DefinitionsValid, const TArray<class FName>& IDs, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, TArray<struct FS_WeakPointDefinition>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FS_WeakPointDefinition& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item_1, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void CheckWeakPoint(double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const TArray<struct FGameplayTag>& LPhysMatTags, class FName LHitBoneName, class UNWXPhyiscalMaterial* LHitPhysMat, const struct FS_WeakPointDefinition& LDefinition, const struct FHitResult& LHitResult, const struct FGameplayTagContainer& LEffectTags, class AActor* LSource, class AActor* LTarget, double LDamage, bool CallFunc_Lookup_Definition_Found, const struct FS_WeakPointDefinition& CallFunc_Lookup_Definition_Definition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess, double CallFunc_DegAcos_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetWeakpointTriggerDamage();
	void WindowPoll();
	void ReceiveBeginPlay();
	void DebugTriggerHandler(class FName WeakPointId, const struct FGameplayTag& WeakPointTag);
	void ExecuteUbergraph_BP_WeakPointComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_WeakPointId, const struct FGameplayTag& K2Node_CustomEvent_WeakPointTag, const class FString& CallFunc_Conv_NameToString_ReturnValue);
	void OnWeakPointTriggered__DelegateSignature(class FName WeakPointId, const struct FGameplayTag& WeakPointTag);
};

}


