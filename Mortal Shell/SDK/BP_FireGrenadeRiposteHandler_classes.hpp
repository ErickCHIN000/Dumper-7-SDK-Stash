#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass BP_FireGrenadeRiposteHandler.BP_FireGrenadeRiposteHandler_C
class ABP_FireGrenadeRiposteHandler_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Grenade_Charge_blendWeight_A13CC75E411427D2885B5CA298666646; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Grenade_Charge_TimeDilation_A13CC75E411427D2885B5CA298666646; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Grenade_Charge__Direction_A13CC75E411427D2885B5CA298666646; // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Grenade_Charge;                           // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_TimeDilation_35FB987945419F0E2ADB81B54EF65DF1; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_35FB987945419F0E2ADB81B54EF65DF1; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParryEffectTimeline_ForceFeedbackBuildup_9035B0594DC5CD58FE497A8F80C5F63C; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ParryEffectTimeline__Direction_9035B0594DC5CD58FE497A8F80C5F63C; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ED0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ParryEffectTimeline;                               // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Char;                                              // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      ParriedEnemy;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRotateTowardsEnemy;                               // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_FireGrenade_Attached_C*            SpawnedGrenade;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlanting;                                       // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Grenade_Radius_Multiplier;                         // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Grenade_Damage_Bonus;                              // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Grenade_Spawn_New_Chance;                          // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Grenade_Spawn_New_Num;                             // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Grenade_Set_On_Fire_Chance;                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FireGrenadeRiposteHandler_C* GetDefaultObj();

	void OnRiposteMontageEnd();
	void StaggerEnemyOnGrenadeAttach(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array);
	void RotatePlayerTowardsEnemy(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ParryEffectTimeline__FinishedFunc();
	void ParryEffectTimeline__UpdateFunc();
	void Timeline_Grenade_Charge__FinishedFunc();
	void Timeline_Grenade_Charge__UpdateFunc();
	void OnNotifyEnd_06B7CF0B41840A10638A43AC0EB71DB4(class FName NotifyName);
	void OnNotifyBegin_06B7CF0B41840A10638A43AC0EB71DB4(class FName NotifyName);
	void OnInterrupted_06B7CF0B41840A10638A43AC0EB71DB4(class FName NotifyName);
	void OnBlendOut_06B7CF0B41840A10638A43AC0EB71DB4(class FName NotifyName);
	void OnCompleted_06B7CF0B41840A10638A43AC0EB71DB4(class FName NotifyName);
	void OnNotifyEnd_F02E34A34B4F8A48549051BC7A486B2E(class FName NotifyName);
	void OnNotifyBegin_F02E34A34B4F8A48549051BC7A486B2E(class FName NotifyName);
	void OnInterrupted_F02E34A34B4F8A48549051BC7A486B2E(class FName NotifyName);
	void OnBlendOut_F02E34A34B4F8A48549051BC7A486B2E(class FName NotifyName);
	void OnCompleted_F02E34A34B4F8A48549051BC7A486B2E(class FName NotifyName);
	void HandleSuccess(class AZero_Base_C* Char, class ABaseCharacter_C* ParriedChar);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FireGrenadeRiposteHandler(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, enum class EDynamicForceFeedbackAction Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, class AZero_Base_C* K2Node_CustomEvent_Char, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FireGrenade_Attached_C* CallFunc_FinishSpawningActor_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_ActorHasTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, float K2Node_Event_DeltaSeconds, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetClosestHitLocationToPointAllBones_OutLocation, class FName CallFunc_GetClosestHitLocationToPointAllBones_OutBoneName, bool CallFunc_GetClosestHitLocationToPointAllBones_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3);
};

}


