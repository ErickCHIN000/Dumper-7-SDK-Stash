#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass KickNotify.KickNotify_C
class UKickNotify_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UKickNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* LocKicker, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IKickableInterface_C> K2Node_DynamicCast_AsKickable_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}


