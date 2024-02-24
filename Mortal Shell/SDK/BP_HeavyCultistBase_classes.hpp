#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x1180 - 0x1108)
// BlueprintGeneratedClass BP_HeavyCultistBase.BP_HeavyCultistBase_C
class ABP_HeavyCultistBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_6_Jiggle_A7405E914EE034FE6566638993BBEEFA; // 0x1110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_6__Direction_A7405E914EE034FE6566638993BBEEFA; // 0x1114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_6;                                        // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_5_Jiggle_5562F7BD4F7DB971F57F2EA92E1310F6; // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_5__Direction_5562F7BD4F7DB971F57F2EA92E1310F6; // 0x1124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_5;                                        // 0x1128(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_4_Jiggle_18E2F2D249EBF2A46676B8812B10A445; // 0x1130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_4__Direction_18E2F2D249EBF2A46676B8812B10A445; // 0x1134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3545[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_4;                                        // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_Jiggle_04AD042549C76E6A885A7FB7DEB6EF4D; // 0x1140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_04AD042549C76E6A885A7FB7DEB6EF4D; // 0x1144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Heavy_hit_1;                                       // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Heavy_hit_2;                                       // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hammer_Attack_Dmg_Mutiply;                         // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hammer_Slam_Radius;                                // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hammer_Slam_Distance;                              // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDrawDebugTrace                   Debug_Draw_Mode;                                   // 0x116C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LeftHipJiggleAlpha;                                // 0x1170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightHipJiggleAlpha;                               // 0x1174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightElbowJiggleAlpha;                             // 0x1178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftElbowJiggleAlpha;                              // 0x117C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HeavyCultistBase_C* GetDefaultObj();

	void Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldWeSimulateHitReaction(class FName bone, const struct FVector& ImpactNormal, bool* Simulate_, class FName Local_Bone, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void OnNotifyEnd_28BBECE243C2F4FCF8037190E1C44ABE(class FName NotifyName);
	void OnNotifyBegin_28BBECE243C2F4FCF8037190E1C44ABE(class FName NotifyName);
	void OnInterrupted_28BBECE243C2F4FCF8037190E1C44ABE(class FName NotifyName);
	void OnBlendOut_28BBECE243C2F4FCF8037190E1C44ABE(class FName NotifyName);
	void OnCompleted_28BBECE243C2F4FCF8037190E1C44ABE(class FName NotifyName);
	void OnNotifyEnd_911BB9DA4C34D2693DD6D4B0A43FADFD(class FName NotifyName);
	void OnNotifyBegin_911BB9DA4C34D2693DD6D4B0A43FADFD(class FName NotifyName);
	void OnInterrupted_911BB9DA4C34D2693DD6D4B0A43FADFD(class FName NotifyName);
	void OnBlendOut_911BB9DA4C34D2693DD6D4B0A43FADFD(class FName NotifyName);
	void OnCompleted_911BB9DA4C34D2693DD6D4B0A43FADFD(class FName NotifyName);
	void OnNotifyEnd_A47F19F54D8280AE22C7A88348C7780A(class FName NotifyName);
	void OnNotifyBegin_A47F19F54D8280AE22C7A88348C7780A(class FName NotifyName);
	void OnInterrupted_A47F19F54D8280AE22C7A88348C7780A(class FName NotifyName);
	void OnBlendOut_A47F19F54D8280AE22C7A88348C7780A(class FName NotifyName);
	void OnCompleted_A47F19F54D8280AE22C7A88348C7780A(class FName NotifyName);
	void OnNotifyEnd_655EED6E415398A7EAC2C1BD4C17E935(class FName NotifyName);
	void OnNotifyBegin_655EED6E415398A7EAC2C1BD4C17E935(class FName NotifyName);
	void OnInterrupted_655EED6E415398A7EAC2C1BD4C17E935(class FName NotifyName);
	void OnBlendOut_655EED6E415398A7EAC2C1BD4C17E935(class FName NotifyName);
	void OnCompleted_655EED6E415398A7EAC2C1BD4C17E935(class FName NotifyName);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void Start_Hammer_Slam();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void RagdollAfterDeath();
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_HeavyCultistBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, int32 Temp_int_Variable, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TArray<class FName>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetClosestHitLocationToPoint_OutLocation, class FName CallFunc_GetClosestHitLocationToPoint_OutBoneName, bool CallFunc_GetClosestHitLocationToPoint_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DistanceFromPlayer, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* K2Node_Select_Default, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, TArray<struct FHitResult>& K2Node_MakeArray_Array_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7);
};

}


