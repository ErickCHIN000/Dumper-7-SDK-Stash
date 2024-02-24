#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D74 (0x40BC - 0x348)
// AnimBlueprintGeneratedClass Player_AnimBP.Player_AnimBP_C
class UPlayer_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_267E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0xD9)(HasGetValueTypeHash)
	uint8                                        Pad_2683[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x438(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x440(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x448(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x468(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x490(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x4B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x4E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x508(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x530(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x558(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x580(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x5A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x5D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x5F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x620(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x648(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x670(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x698(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x6C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x6E8(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0x710(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x730(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_23;                 // 0x750(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_22;                 // 0x7C0(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x830(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0x878(0x20)(None)
	uint8                                        Pad_26E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_8;                         // 0x8A0(0x280)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0xB20(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_7;                         // 0xB40(0x280)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_5;          // 0xDC0(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_21;                 // 0xED8(0x70)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_5;                    // 0xF48(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_4;          // 0xF90(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_20;                 // 0x10A8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x1118(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x1138(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x1158(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_19;                 // 0x1178(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_18;                 // 0x11E8(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1258(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x12A0(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_6;                         // 0x12C0(0x280)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x1540(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_5;                         // 0x1560(0x280)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x17E0(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_17;                 // 0x18F8(0x70)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_4;                    // 0x1968(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x19B0(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_16;                 // 0x1AC8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1B38(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x1B58(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x1B78(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_15;                 // 0x1B98(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_14;                 // 0x1C08(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1C78(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x1CC0(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_4;                         // 0x1CE0(0x280)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x1F60(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3;                         // 0x1F80(0x280)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_13;                 // 0x2200(0x70)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x2270(0x118)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_3;                    // 0x2388(0x48)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x23D0(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_12;                 // 0x24E8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x2558(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x2578(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x25C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x25E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x2628(0x48)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x2670(0x280)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x28F0(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x2938(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2958(0x48)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_2;                    // 0x29A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x29E8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x2A08(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x2A28(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0x2A98(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x2B08(0x70)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x2B78(0x20)(None)
	uint8                                        Pad_27ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x2BA0(0x280)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x2E20(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x2E90(0x70)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_1;                    // 0x2F00(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2F48(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x2F68(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x2FB0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x2FD0(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3040(0x70)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x30B0(0x280)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x3330(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x33A0(0x70)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x3410(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x3430(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x3450(0x70)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x34C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x3508(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x3528(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x35F0(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3670(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x3760(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x37A8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x37D0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x38F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3918(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x3938(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3980(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x39A8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x39D0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x3A18(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3A38(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3A80(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x3AA0(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3B68(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3B90(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3BD8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3C58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3C80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3CA8(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x3CD0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3D40(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3D88(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3DF8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3E18(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3E60(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3E80(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3F48(0x48)(None)
	struct FRotator                              K2Node_PropertyAccess_16;                          // 0x3F90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              K2Node_PropertyAccess_15;                          // 0x3FA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              K2Node_PropertyAccess_14;                          // 0x3FC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_PropertyAccess_13;                          // 0x3FD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x3FD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_11;                          // 0x3FDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_10;                          // 0x3FDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_PropertyAccess_9;                           // 0x3FE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_PropertyAccess_8;                           // 0x3FF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_7;                           // 0x3FF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_6;                           // 0x3FFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_PropertyAccess_5;                           // 0x4000(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_PropertyAccess_4;                           // 0x4018(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_3;                           // 0x4030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2906[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_2;                           // 0x4038(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_1;                           // 0x4050(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x4051(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_290F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x4058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BlendspaceInt;                                     // 0x4060(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2916[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerCharacter_C*                 PlayerRef;                                         // 0x4068(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Falling;                                           // 0x4070(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2924[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Direction;                                         // 0x4078(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrouching;                                       // 0x4080(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsADS;                                             // 0x4081(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2936[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Pitch;                                             // 0x4088(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Yaw;                                               // 0x4090(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dead;                                              // 0x4098(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerSlots                      CActiveSlot;                                       // 0x4099(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2947[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              HeadRotator;                                       // 0x40A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanRotateHead_;                                    // 0x40B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LadderClimb;                                       // 0x40B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Swimming;                                          // 0x40BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Swimming_UnderWater;                               // 0x40BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayer_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetAimOffset(float DeltaTime, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double K2Node_VariableSet_Pitch_ImplicitCast, double K2Node_VariableSet_Yaw_ImplicitCast);
	void IsSwimming_();
	void IsClimbingLadder_();
	void GetHeadRot();
	void IsAiming_(bool CallFunc_BooleanOR_ReturnValue);
	void Is_Crouching_();
	void GetDirection(float CallFunc_CalculateDirection_ReturnValue, double K2Node_VariableSet_Direction_ImplicitCast);
	void IsFalling_();
	void GetSpeed(double CallFunc_VSize_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime, bool CallFunc_BooleanOR_ReturnValue);
	void GetAnimationInfoFromCharacter(TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, enum class EPlayerSlots CallFunc_GetAnimationInfo_ActiveSlot, double CallFunc_GetAnimationInfo_Leaning, bool CallFunc_GetAnimationInfo_Ads, bool CallFunc_GetAnimationInfo_Crouched, bool CallFunc_GetAnimationInfo_IsFirstPerson_, class FName CallFunc_GetAnimationInfo_WeaponID);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_1D52F779406FC4110BBFC4B70C211957();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_ADDCBBF44FF1C8EBF5B6219C3ACDA7B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_7D78CD2542FC8B864766A5B979BC9813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_8A762ACA40A26E5901F2CEB7BDE081B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_30D16A454BEE8EE89CA8E092A5D4D768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_5BAE96A147AFA679DC9F8D8648A5D43A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_19A72DD848ABA04E7491F2A31D85C9F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_D57793F2441362344ECA5AB8AD87C8D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_47507ADE41BD83534859F3B0009BD8B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_BBB23FD64534A8C709D41A83C640C98B();
	void CombatState(int32 BlendSpace);
	void AnimNotify_Footstep();
	void DeathState(bool Dead);
	void BlueprintBeginPlay();
	void AnimNotify_Swim();
	void AnimNotify_SwimFast();
	void ExecuteUbergraph_Player_AnimBP(int32 EntryPoint, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_12, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, class USoundBase* Temp_object_Variable_16, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, class USoundBase* Temp_object_Variable_20, enum class EPhysicalSurface Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, class USoundBase* Temp_object_Variable_21, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, class USoundBase* Temp_object_Variable_26, bool CallFunc_BooleanAND_ReturnValue_1, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, class USoundBase* Temp_object_Variable_29, class USoundBase* Temp_object_Variable_30, class USoundBase* Temp_object_Variable_31, class USoundBase* Temp_object_Variable_32, class USoundBase* Temp_object_Variable_33, bool CallFunc_BooleanAND_ReturnValue_2, class USoundBase* Temp_object_Variable_34, bool CallFunc_Not_PreBool_ReturnValue, class USoundBase* Temp_object_Variable_35, class USoundBase* Temp_object_Variable_36, class USoundBase* Temp_object_Variable_37, class USoundBase* Temp_object_Variable_38, class USoundBase* Temp_object_Variable_39, class USoundBase* Temp_object_Variable_40, class USoundBase* Temp_object_Variable_41, class USoundBase* Temp_object_Variable_42, class USoundBase* Temp_object_Variable_43, class USoundBase* Temp_object_Variable_44, enum class EPhysicalSurface Temp_byte_Variable_2, TArray<class AActor*>& Temp_object_Variable_45, class USoundBase* Temp_object_Variable_46, TArray<class AActor*>& Temp_object_Variable_47, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class USoundBase* Temp_object_Variable_48, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class USoundBase* Temp_object_Variable_49, class USoundBase* Temp_object_Variable_50, class USoundBase* Temp_object_Variable_51, class USoundBase* Temp_object_Variable_52, class USoundBase* Temp_object_Variable_53, class USoundBase* Temp_object_Variable_54, int32 K2Node_Event_BlendSpace, bool K2Node_Event_Dead, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AActor* CallFunc_GetOwningActor_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* Temp_object_Variable_55, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* Temp_object_Variable_56, class USoundBase* Temp_object_Variable_57, class USoundBase* Temp_object_Variable_58, class USoundBase* K2Node_Select_Default_2, double CallFunc_SelectFloat_ReturnValue, float CallFunc_Footstep_Sound_MaxRange_ImplicitCast);
};

}


