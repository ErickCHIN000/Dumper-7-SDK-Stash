#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2DC (0x594 - 0x2B8)
// AnimBlueprintGeneratedClass ABP_ElvenBow.ABP_ElvenBow_C
class UABP_ElvenBow_C : public UAnimInstance
{
public:
	uint8                                        Pad_23C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x340(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x448(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x468(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x488(0xE8)(None)
	float                                        AimAlpha;                                          // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StringLocation;                                    // 0x574(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            Character;                                         // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DefaultStringLocation;                             // 0x588(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_ElvenBow_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateStringLocation(const struct FVector& L_TargetLocation, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBowStringSocketName_Name, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_DoesHoldBowString_Result, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_ElvenBow(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class II_IsArcher_C> K2Node_DynamicCast_AsI_Is_Archer, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAimAlpha_Value, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1);
};

}


