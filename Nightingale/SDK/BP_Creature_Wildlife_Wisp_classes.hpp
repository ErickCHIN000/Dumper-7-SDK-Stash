#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23E (0x1820 - 0x15E2)
// BlueprintGeneratedClass BP_Creature_Wildlife_Wisp.BP_Creature_Wildlife_Wisp_C
class ABP_Creature_Wildlife_Wisp_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_32E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAVFXFocusComponent*                   AVFXFocus;                                         // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AudioFocusMixingComponent_C*       BP_AudioFocusMixingComponent;                      // 0x15F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WispDeath;                                         // 0x1600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Wisplight;                                         // 0x1610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WispEffect1;                                       // 0x1618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GlintComponent_C*                  BP_GlintComponent;                                 // 0x1620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Creature_Audio_Looping_C*          BP_Creature_Audio_Looping;                         // 0x1630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestComponent_C*                BP_HarvestComponent;                               // 0x1638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      AttackCollision;                                   // 0x1640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AttackTimeline_AttackLerp_41C3E5F340D0FB67252CF496939E4FD8; // 0x1648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AttackTimeline__Direction_41C3E5F340D0FB67252CF496939E4FD8; // 0x164C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3310[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AttackTimeline;                                    // 0x1650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        YRotation_YRotationRate_55997D804A71F37E909382B21EF72373; // 0x1658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                YRotation__Direction_55997D804A71F37E909382B21EF72373; // 0x165C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3323[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    YRotation;                                         // 0x1660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ZRotation_ZRotationRate_2DBDC26C46515878674D479E52309D3E; // 0x1668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ZRotation__Direction_2DBDC26C46515878674D479E52309D3E; // 0x166C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3337[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ZRotation;                                         // 0x1670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        XRotation_XRotationRate_583CC7C647C0438F391AA18FFDE52898; // 0x1678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                XRotation__Direction_583CC7C647C0438F391AA18FFDE52898; // 0x167C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    XRotation;                                         // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Wisp_LightSize_AE1F035C4A4BA87E149FB5860D82BE1B; // 0x1688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Wisp__Direction_AE1F035C4A4BA87E149FB5860D82BE1B; // 0x168C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Wisp;                                     // 0x1690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Summoner;                                          // 0x1698(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ABP_IIMManager_C*                      CurrentIIMManager;                                 // 0x16A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SummonerLocation;                                  // 0x16A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WispOffsetDistance;                                // 0x16C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       XRotationRate;                                     // 0x16D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZRotationRate;                                     // 0x16E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YRotationRate;                                     // 0x16E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       XUpdateRate;                                       // 0x16F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       YUpdateRate;                                       // 0x16F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            MoveTransform;                                     // 0x1700(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attacking;                                         // 0x1760(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3369[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LLightColor;                                       // 0x1764(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NatureBase;                                        // 0x1774(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NatureEmissive;                                    // 0x1784(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AttackBaseColor;                                   // 0x1794(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AttackEmissiveColor;                               // 0x17A4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AttackLightColor;                                  // 0x17B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_337E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AActor*, struct FActiveGameplayEffectHandle> ActiveLightEffects;                                // 0x17C8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0x1818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_Wisp_C* GetDefaultObj();

	void SetupLightIntensity(class AActor* RetrievedManager, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void ClearLightEffects(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void LerpColor(double ColorPct, const struct FLinearColor& LocalLightColor, const struct FLinearColor& LEmissive, const struct FLinearColor& LBase, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void OnRep_Attacking(const struct FLinearColor& LocalLightColor, const struct FLinearColor& LEmissive, const struct FLinearColor& LBase);
	void GetDamageEffect(class UClass** DamageEffect);
	void UpdateRotation(double XPct, double YPct, double ZPct);
	void GetResources(const TArray<struct FGameplayTagContainer>& TagsToHighlight, TArray<struct FGameplayTagContainer>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetClosestResourceNodeTransform_Success, const struct FVector& CallFunc_GetClosestResourceNodeTransform_NearestLocation, class ABP_ResourceNodeIIMBase_C* CallFunc_GetClosestResourceNodeTransform_ResourceNode, int32 CallFunc_GetClosestResourceNodeTransform_NearestIndex, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetClosestResourceNodeTransform_Success_1, const struct FVector& CallFunc_GetClosestResourceNodeTransform_NearestLocation_1, class ABP_ResourceNodeIIMBase_C* CallFunc_GetClosestResourceNodeTransform_ResourceNode_1, int32 CallFunc_GetClosestResourceNodeTransform_NearestIndex_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches_1, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void ServerDeathLogic(bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void TurnLightOff();
	void SetLightRange(double LightSize, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast);
	void Cleanup();
	void OnRep_Summoner(enum class EBlackboardGetResult CallFunc_TrySetBlackboardObject_Branches, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateLightIntensity(class UCurveFloat* IntensityCurve, double NightIntensity, double DayIntensity, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetNormalizedVisualTime_VisualTime, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast);
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void ClientDeathLogic(bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Timeline_Wisp__FinishedFunc();
	void Timeline_Wisp__UpdateFunc();
	void XRotation__FinishedFunc();
	void XRotation__UpdateFunc();
	void YRotation__FinishedFunc();
	void YRotation__UpdateFunc();
	void ZRotation__FinishedFunc();
	void ZRotation__UpdateFunc();
	void AttackTimeline__FinishedFunc();
	void AttackTimeline__UpdateFunc();
	void Removed_01602D0A4C648E132CFA94B632AECC9A();
	void ReceiveBeginPlay();
	void BndEvt__BP_Creature_Wildlife_BeeSummon_AttackCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_Creature_Wildlife_BeeSummon_AttackCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void FadeLight(bool FadeIn);
	void WispMovement(double YRate, double ZRate, double XRate);
	void SetupSpellConcentration();
	void StartAttackLerp();
	void StopAttackLerp();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Dissolve(bool bDissolveIn, struct FGameplayTag& DissolveTag);
	void ExecuteUbergraph_BP_Creature_Wildlife_Wisp(int32 EntryPoint, double CallFunc_MapRangeClamped_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_FadeIn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_CustomEvent_YRate, double K2Node_CustomEvent_ZRate, double K2Node_CustomEvent_XRate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_Event_bDissolveIn, const struct FGameplayTag& K2Node_Event_DissolveTag, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double K2Node_VariableSet_XUpdateRate_ImplicitCast, double K2Node_VariableSet_YUpdateRate_ImplicitCast, double CallFunc_UpdateRotation_ZPct_ImplicitCast, double CallFunc_LerpColor_ColorPct_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2);
};

}


