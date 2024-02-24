#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x95C (0xC14 - 0x2B8)
// AnimBlueprintGeneratedClass SK_ITM_Lure_Held_AnimBP.SK_ITM_Lure_Held_AnimBP_C
class USK_ITM_Lure_Held_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_48EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2F8(0x20)(None)
	uint8                                        Pad_4901[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x320(0x830)(None)
	struct FPositionHistory                      History;                                           // 0xB50(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    Custom_Curve;                                      // 0xB80(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               HorizontalForce;                                   // 0xC08(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_ITM_Lure_Held_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_ITM_Lure_Held_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ACharacter* Temp_wildcard_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


