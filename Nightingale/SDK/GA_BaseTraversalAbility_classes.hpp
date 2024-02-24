#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GA_BaseTraversalAbility.GA_BaseTraversalAbility_C
class UGA_BaseTraversalAbility_C : public UBP_NWXGameplayAbility_C
{
public:
	class UDataTable*                            TraversalMontages;                                 // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_BaseTraversalAbility_C* GetDefaultObj();

	void SetHandsVisibility(bool New_Visibility, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMM_FP_C* K2Node_DynamicCast_AsABP_HMM_FP, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateCameraView(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void EnableControllerMoveInput(bool Enable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetTraversalRow(uint8 TransitionType, bool* IsValid, class UAnimMontage** FPMontage, class UAnimMontage** FBMontage, class UAnimMontage** TPMontage, const TArray<class FName>& TransitionToRowName, int32 TransitionTypeAsInt, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, const struct FTransitionMontages& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


