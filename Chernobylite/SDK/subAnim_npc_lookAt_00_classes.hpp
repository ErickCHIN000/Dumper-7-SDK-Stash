#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBA0 (0xE58 - 0x2B8)
// AnimBlueprintGeneratedClass subAnim_npc_lookAt_00.subAnim_npc_lookAt_00_C
class USubAnim_npc_lookAt_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_170A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x2F8(0x118)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x410(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4E0(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x560(0xC0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x620(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x640(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x660(0xF0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x750(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x7F0(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x8D8(0xE8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9C0(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xA60(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xBB8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xBE0(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0xC08(0xD0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xCD8(0xE8)(None)
	float                                        HeadTracingYaw;                                    // 0xDC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadTracingPitch;                                  // 0xDC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        Owner;                                             // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHeadTracingProperties                HeadTracingProperties;                             // 0xDD0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        HeadTracingAlpha;                                  // 0xE30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadTracingAlphaMaxOverride;                       // 0xE34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDebug;                                            // 0xE38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlphaInterpSpeed;                                  // 0xE3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHeadOnly;                                         // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           HeadTracingOverride;                               // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldOverrideHeadTracingBlendspace;              // 0xE50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawClamp;                                          // 0xE54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USubAnim_npc_lookAt_00_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void Expensive();
	void ExecuteUbergraph_subAnim_npc_lookAt_00(int32 EntryPoint, float Temp_float_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FHeadTracingProperties& CallFunc_GetHeadTracingProperties_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_3, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, class FName CallFunc_MakeLiteralName_ReturnValue_3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float Temp_float_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_5, const struct FVector& CallFunc_Normal_ReturnValue_4, const struct FVector& CallFunc_Normal_ReturnValue_5, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_4, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_5, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_2, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, bool K2Node_SwitchEnum_CmpSuccess);
};

}


