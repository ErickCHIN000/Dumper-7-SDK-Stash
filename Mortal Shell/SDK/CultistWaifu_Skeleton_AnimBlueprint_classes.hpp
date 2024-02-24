#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x866 (0xACE - 0x268)
// AnimBlueprintGeneratedClass CultistWaifu_Skeleton_AnimBlueprint.CultistWaifu_Skeleton_AnimBlueprint_C
class UCultistWaifu_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_1F00[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	uint8                                        Pad_1F07[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2B0(0x1B0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x460(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x500(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x578(0x78)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x5F0(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x610(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x658(0xB8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x710(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x730(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x7F0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x818(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x840(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x860(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x968(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA70(0x20)(None)
	bool                                         bShouldLookAtPlayer;                               // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F65[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DesiredLookAtLocation;                             // 0xA94(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentLookAtLocation;                             // 0xAA0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlayerPlayingLute;                              // 0xAAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SwaySpeedFraction;                                 // 0xAB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadBangValue;                                     // 0xAB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           HeadbangCurve;                                     // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadbangSpeed;                                     // 0xAC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwayValue;                                         // 0xAC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwaySpeed;                                         // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldDance;                                      // 0xACC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDontGiveAFuckAndDanceAnyway;                      // 0xACD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCultistWaifu_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetPlayerLutePlaying(enum class Enum_LuteType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Fraction_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName K2Node_Select_Default, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_2A5C663C4B9DC195923432A02F0499AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_755B41614E3146E559EBE8947C43E3E4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_94B066324275D48387F8479C7BDFDED9();
	void ExecuteUbergraph_CultistWaifu_Skeleton_AnimBlueprint(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, float K2Node_Select_Default, class AActor* CallFunc_GetOwningActor_ReturnValue, class ACorruptedWaifuNPC_C* K2Node_DynamicCast_AsCorrupted_Waifu_NPC, bool K2Node_DynamicCast_bSuccess, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_ReturnValue_1);
};

}


