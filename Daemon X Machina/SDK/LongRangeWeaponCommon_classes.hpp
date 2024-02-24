#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xEC0 - 0xEA8)
// BlueprintGeneratedClass LongRangeWeaponCommon.LongRangeWeaponCommon_C
class ALongRangeWeaponCommon_C : public ATTLLongRangeWeapon
{
public:
	uint8                                        Pad_93D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(Transient, DuplicateTransient)
	class UCatchableActor_C*                     CatchableActor;                                    // 0xEB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALongRangeWeaponCommon_C* GetDefaultObj();

	struct FVector GetLockOnPos(const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetMuzzleTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetCenterScreenLocationForWeapon_retVector, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacterCommon_C* K2Node_DynamicCast_AsCharacter_Common, bool K2Node_DynamicCast_bSuccess, class UTTLLockonComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_CalcShootLocation_ShootLocation);
	void GetShootSpeed(float* Speed, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue);
	void UserConstructionScript();
	void Wreck(bool IsLeft, const struct FVector& Position, const struct FRotator& Rotator);
	void OnComponentBeginOverlap______0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnActorHit______0(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LongRangeWeaponCommon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_isLeft, const struct FVector& K2Node_Event_Position, const struct FRotator& K2Node_Event_Rotator, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit);
};

}


