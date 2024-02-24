#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4B9 (0x771 - 0x2B8)
// AnimBlueprintGeneratedClass SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint.SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C
class USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_5F94[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x340(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3E0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x460(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4E0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x500(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x608(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x628(0x108)(None)
	class UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase;                           // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Loaded;                                            // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LoadedBulletTransform;                             // 0x740(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ThirdPerson;                                       // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_92A4012B473AB4B30E1C49ADACAD368B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_15087A6A449F8634B0209B8B01722CFE();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_GUN_SGL_SHOT_PISTOL_Skeleton_AnimBlueprint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_SelectFloat_ReturnValue, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Firearm_Base_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAmmo_HasAmmo);
};

}


