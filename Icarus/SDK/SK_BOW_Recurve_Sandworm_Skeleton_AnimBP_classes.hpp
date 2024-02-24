#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF11 (0x1A31 - 0xB20)
// AnimBlueprintGeneratedClass SK_BOW_Recurve_Sandworm_Skeleton_AnimBP.SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C
class USK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C : public UIcarusBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB20(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xB28(0x30)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0xB58(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0xBC8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC68(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xCE8(0xA0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0xD88(0x50)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0xDD8(0x50)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xE28(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xEC8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xF48(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xF90(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xFD8(0xA0)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x1078(0x368)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x13E0(0x368)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1748(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x18A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x18C8(0x28)(None)
	struct FVector                               __CustomProperty_ArrowPlacment_CBF8F8EF4BEB74386EB6ACA94F356F3C; // 0x18F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_String_Global_Position_CBF8F8EF4BEB74386EB6ACA94F356F3C; // 0x1900(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               __CustomProperty_ArrowPlacment_4C4BCC8942975016EC07D680B25CE1CF; // 0x1930(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_AttachArrowToHand_4C4BCC8942975016EC07D680B25CE1CF; // 0x1940(0x30)(IsPlainOldData, NoDestructor)
	class UBP_ActionableBehaviour_Firearm_C*     FirearmActionable;                                 // 0x1970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FocusableBehaviour_C*              FocusableRef;                                      // 0x1978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;                                   // 0x1980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;                                   // 0x1988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;                                    // 0x1990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Player;                                            // 0x1998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Focusing;                                          // 0x19A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F33[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StringWorldPosition;                               // 0x19B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               HandArrowPlacment;                                 // 0x19E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsArrowDetached;                                   // 0x19EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachOffset;                                      // 0x19F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is3RDCha;                                          // 0x1A20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacterSurvival*        Owning_Player;                                     // 0x1A28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ThirdPerson;                                       // 0x1A30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_BOW_Recurve_Sandworm_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	bool IsHandConnectedToString(bool CallFunc_IsHandConnectedToString_ReturnValue);
	void CacheHandArrowPlacement(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class AActor* CallFunc_GetOwningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void CacheStringPosition(bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void CacheThirdPerson(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CacheFocusing(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_523F55D64AA4735B4437C1A96C51B4EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_95B1DA8C469BE84BE2FB62B66F466039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_E92FB9D7447CBDC43E7E1180FA904DC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_04EFE18147B71418128A7B97F0494F02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequenceEvaluator_3F3021A94EE473410BFBB7B60E219331();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_Bow_AttachArrow();
	void AnimNotify_Bow_DetachArrow();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_027BD3E946F928B992A76FBFA01F1E91();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_SK_BOW_Recurve_Sandworm_Skeleton_AnimBP(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm, bool K2Node_DynamicCast_bSuccess_4, class UBP_ActionableBehaviour_Firearm_Base_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base, bool K2Node_DynamicCast_bSuccess_5, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, float K2Node_Event_DeltaTimeX, bool CallFunc_IsADS_ADS, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAiming_IsAiming, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_GetCurrentChargePower_ChargePower);
};

}


