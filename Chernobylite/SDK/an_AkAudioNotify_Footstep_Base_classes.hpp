#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass an_AkAudioNotify_Footstep_Base.an_AkAudioNotify_Footstep_Base_C
class UAn_AkAudioNotify_Footstep_Base_C : public UAn_akAudioNotify_Base_C
{
public:
	class UAkAudioEvent*                         FootstepEvent;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAn_AkAudioNotify_Footstep_Base_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, bool IsInWater, bool IsInDeepWater, FDelegateProperty_ Temp_delegate_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_GetMaxAttenuationRadius_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


