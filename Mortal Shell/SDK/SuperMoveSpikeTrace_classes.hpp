#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3C - 0x30)
// BlueprintGeneratedClass SuperMoveSpikeTrace.SuperMoveSpikeTrace_C
class USuperMoveSpikeTrace_C : public UAnimNotifyState
{
public:
	bool                                         IsMotlenSpike_;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_FA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoltenSpikeDPS;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoltenSpikeDuration;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USuperMoveSpikeTrace_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class AEnemyCharacter_C* Local_Enemy, const struct FVector& Local_HitLoc, const struct FHitResult& Local_Hit, class AZero_Base_C* Local_0Base, class AController* Local_Controller, class AActor* CallFunc_GetOwner_ReturnValue, class AHeavyEnemy_C* K2Node_DynamicCast_AsHeavy_Enemy, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const struct FVector& CallFunc_DirectionTo2D_Dir, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float K2Node_Select_Default, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
};

}


