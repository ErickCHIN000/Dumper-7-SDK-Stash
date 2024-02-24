#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass Big_frog_BP.Big_frog_BP_C
class ABig_frog_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMeshComponent0;                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Opacity_1831E10A4AD77A3F219CCD989B588FF7; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_1831E10A4AD77A3F219CCD989B588FF7; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OpacityFade_Opacity_A5A8A83E40A16A01F65302924762FD44; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpacityFade__Direction_A5A8A83E40A16A01F65302924762FD44; // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E8F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpacityFade;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATriggerBase*                          AnimTrigger;                                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABig_frog_BP_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue);
	void OpacityFade__FinishedFunc();
	void OpacityFade__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_E4DE7B4C49F8304A3B515F9833785C45(class FName NotifyName);
	void OnNotifyBegin_E4DE7B4C49F8304A3B515F9833785C45(class FName NotifyName);
	void OnInterrupted_E4DE7B4C49F8304A3B515F9833785C45(class FName NotifyName);
	void OnBlendOut_E4DE7B4C49F8304A3B515F9833785C45(class FName NotifyName);
	void OnCompleted_E4DE7B4C49F8304A3B515F9833785C45(class FName NotifyName);
	void Hop(class AActor* OverlappedActor, class AActor* OtherActor);
	void HopMovement();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DeadFrog();
	void FrogAggro();
	void FadeOut();
	void ExecuteUbergraph_Big_frog_BP(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


