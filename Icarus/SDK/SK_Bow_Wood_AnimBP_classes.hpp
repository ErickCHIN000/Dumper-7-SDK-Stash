#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1279 (0x1D99 - 0xB20)
// AnimBlueprintGeneratedClass SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C
class USK_Bow_Wood_AnimBP_C : public UIcarusBowAnimInstance
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
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_2;                        // 0xFD8(0x368)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1340(0xA0)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x13E0(0x368)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x1748(0x368)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1AB0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1C08(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1C30(0x28)(None)
	struct FVector                               __CustomProperty_ArrowPlacment_1AFC6DC841DF1B33A148B680C698303C; // 0x1C58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6421[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_String_Global_Position_1AFC6DC841DF1B33A148B680C698303C; // 0x1C70(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               __CustomProperty_ArrowPlacment_762D9D894231EBD747476CA4B48DD47C; // 0x1CA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6426[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            __CustomProperty_AttachArrowToHand_762D9D894231EBD747476CA4B48DD47C; // 0x1CB0(0x30)(IsPlainOldData, NoDestructor)
	class UBP_ActionableBehaviour_Firearm_C*     FirearmActionable;                                 // 0x1CE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Player;                                            // 0x1CE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTransform                            StringWorldPosition;                               // 0x1CF0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               HandArrowPlacment;                                 // 0x1D20(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ArrowSwitch;                                       // 0x1D2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsArrowDetached;                                   // 0x1D2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_643E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_FocusableBehaviour_C*              FocusableRef;                                      // 0x1D30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Focusing;                                          // 0x1D38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachOffset;                                      // 0x1D40(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is3RDCha;                                          // 0x1D70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_644F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;                                   // 0x1D78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;                                   // 0x1D80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;                                    // 0x1D88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        Owning_Player;                                     // 0x1D90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ThirdPerson;                                       // 0x1D98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_Bow_Wood_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void CacheFocusing(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void CacheHandArrowPlacement(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class AActor* CallFunc_GetOwningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void CacheStringPosition(bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void CacheThirdPerson(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsHandConnectedToString(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsReloading_IsReloading, bool CallFunc_IsHandConnectedToString_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_70413D204D31EB91B5FDB9A182B588B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_32A8F6624DF7992ABC9209A21EF8085F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_64FCB31F4605BEED61D62A8CB5B4B258();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_7C9B176D4A593DD24D7ABFA297A8BA37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_6DD8745D426A6F38770086BF085F12DF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_0B0929B943D728A6B691ABBCA2363390();
	void AnimNotify_Bow_AttachArrow();
	void AnimNotify_Bow_DetachArrow();
	void ExecuteUbergraph_SK_Bow_Wood_AnimBP(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_2, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsHandConnectedToString_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsADS_ADS, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetCurrentChargePower_ChargePower, bool CallFunc_IsAiming_IsAiming, bool CallFunc_IsValid_ReturnValue_1, class UBP_ActionableBehaviour_Firearm_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm, bool K2Node_DynamicCast_bSuccess_5, class UBP_ActionableBehaviour_Firearm_Base_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Firearm_Base, bool K2Node_DynamicCast_bSuccess_6, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController);
};

}


