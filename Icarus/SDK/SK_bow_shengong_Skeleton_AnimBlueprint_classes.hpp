#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF28 (0x1A48 - 0xB20)
// AnimBlueprintGeneratedClass SK_bow_shengong_Skeleton_AnimBlueprint.SK_bow_shengong_Skeleton_AnimBlueprint_C
class USK_bow_shengong_Skeleton_AnimBlueprint_C : public UIcarusBowAnimInstance
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
	bool                                         __CustomProperty_isGlobal_5B74CA51454847B82219A1A49797DED6; // 0x18F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6379[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_String_Global_Position_5B74CA51454847B82219A1A49797DED6; // 0x1900(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               __CustomProperty_ArrowPlacment_5B74CA51454847B82219A1A49797DED6; // 0x1930(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_ArrowPlacment_06897A514FA8436F80812F918B05CF73; // 0x193C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6380[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_AttachArrowToHand_06897A514FA8436F80812F918B05CF73; // 0x1950(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Focusing;                                          // 0x1980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6386[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StringWorldPosition;                               // 0x1990(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               HandArrowPlacment;                                 // 0x19C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsArrowDetached;                                   // 0x19CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_638F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachOffset;                                      // 0x19D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is3RDCha;                                          // 0x1A00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6393[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacterSurvival*        Owning_Player;                                     // 0x1A08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ThirdPerson;                                       // 0x1A10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_639B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                Player;                                            // 0x1A18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_C*     FirearmActionable;                                 // 0x1A20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_FocusableBehaviour_C*              FocusableRef;                                      // 0x1A28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;                                   // 0x1A30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;                                   // 0x1A38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;                                    // 0x1A40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_bow_shengong_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	bool IsHandConnectedToString(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsReloading_IsReloading, bool CallFunc_IsHandConnectedToString_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void CacheHandArrowPlacement(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class AActor* CallFunc_GetOwningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void CacheStringPosition(bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void CacheThirdPerson(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CacheFocusing(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_476CBC634E2A301922C9199E742A3D5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E260FAD04030F706707B36883C600625();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_6904242543F0A35D218E5087B95B0AC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_ACEB6FBD42C018B55C391FA1BA382EC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequenceEvaluator_F17106794D80E5565FE1C7BF96E3C549();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_Bow_AttachArrow();
	void AnimNotify_Bow_DetachArrow();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_D4B5B3BE431B9543F3B5A6B3EB3355BF();
	void ExecuteUbergraph_SK_bow_shengong_Skeleton_AnimBlueprint(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm, bool K2Node_DynamicCast_bSuccess_4, class UBP_ActionableBehaviour_Firearm_Base_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base, bool K2Node_DynamicCast_bSuccess_5, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, float K2Node_Event_DeltaTimeX, bool CallFunc_IsADS_ADS, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAiming_IsAiming, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_GetCurrentChargePower_ChargePower);
};

}


