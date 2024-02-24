#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38D8 (0x3B40 - 0x268)
// AnimBlueprintGeneratedClass MS_NewAnimationBlueprint.MS_NewAnimationBlueprint_C
class UMS_NewAnimationBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_F56[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x2A8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x2D0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x318(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3D8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x400(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x448(0xB8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x550(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x578(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x5A0(0xE0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_11;                  // 0x680(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x730(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x810(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x840(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x868(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x890(0xE0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_10;                  // 0x970(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xA20(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0xB00(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0xB30(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_9;                   // 0xBA8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0xC58(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0xCD0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0xD00(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0xDB0(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xDE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xE08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xE30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xE58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xE80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xEA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xED0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xEF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xF20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0xF48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xF70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xF98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xFC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xFE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x1010(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x1038(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x1060(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x1088(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x10B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x10D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x1100(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x1128(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x1150(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x1178(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x11A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x11C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x11F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x1218(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x1240(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x1268(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1290(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x12B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x12E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1308(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1330(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1358(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x13D0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1400(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_8;                   // 0x1478(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1528(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x15A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x15D0(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x1648(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x16F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x1770(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x17A0(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x1818(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x18C8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1940(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1970(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x19E8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1A98(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x1B10(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1B40(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1BB8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1BE8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x1C60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1C90(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x1D08(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x1D38(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x1DB0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1E60(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1ED8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1F08(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x1F80(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1FB0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x2028(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x2058(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x20D0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x2100(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x2178(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_2;                      // 0x21A8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x2220(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x2250(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x2300(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x2330(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x23A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x23D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x2450(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x2480(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x24F8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x25A8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2620(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x2650(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x26C8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x2778(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x27F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2820(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x2898(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2948(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x29C0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x29F0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2AA0(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_1;                      // 0x2AD0(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x2B48(0xB0)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x2BF8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x2C70(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x2CA0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x2D50(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x2D80(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2E30(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x2E60(0xB0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2F10(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2F30(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2F50(0x1B0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x3100(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x32E0(0x1E0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x34C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x35C8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x36D0(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x37D8(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3878(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x38C0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x38E8(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3988(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3A40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3A68(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3A90(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3AB0(0x20)(None)
	float                                        Speed;                                             // 0x3AD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x3AD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInFight;                                         // 0x3AD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMS_Character_New_C*                   Character;                                         // 0x3AD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastState;                                         // 0x3AE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWorried;                                         // 0x3AE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInAlert;                                         // 0x3AE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleFireState;                                     // 0x3AE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleNotebookState;                                 // 0x3AE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleWindowState;                                   // 0x3AE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDemoniac;                                        // 0x3AE6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FEE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x3AE8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtAlpha;                                       // 0x3AF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDazed;                                           // 0x3AF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleKnockState;                                    // 0x3AF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleSitCrazyState;                                 // 0x3AFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMS_PatrolTypes                   LastPatrolType;                                    // 0x3AFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastStatePatrolType;                               // 0x3AFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStuned;                                          // 0x3AFD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMadman_WeaponType                WeaponType;                                        // 0x3AFE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FF7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RightEffector;                                     // 0x3B00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftEffector;                                      // 0x3B0C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IKAlpha;                                           // 0x3B18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftFootRotation;                                  // 0x3B1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RightFootRotation;                                 // 0x3B28(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GlobalIKDisabled;                                  // 0x3B34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMovingBackwards;                                // 0x3B35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveForward;                                       // 0x3B38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveRight;                                         // 0x3B3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMS_NewAnimationBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AB_SyncPatrolType(enum class EMS_PatrolTypes PatrolType, enum class EAIStates AIState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3);
	void AB_SyncPatrolPoi(enum class EMS_PatrolPoiType PatrolPoiType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void AB_SyncState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_268623E14CE6D2726D880095BD9B1F22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4D40BB6F44DC3BDD6310B0BE07B3563A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_5B9C7FAE46EE11058A6B4E9E794B5331();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_4267C7944A3C8924E57D26B9A6655BE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_ECECF2D34EF8C58CCB7ABDB179CC0E90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_CB5283604AA13D978CE7C78B4E07C6A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_0A7E33B34C84F713FAAA2F8EB6649218();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_7A526A5747E4277D22F1B59BC5C75A4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_38E53F9D406011C4923C9C92C8737F1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_651A79A842A4FDB25D887DB079ABAC3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_D094E77549FE8DADC2585C9064C81674();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_3A17A5044B5F53547FBBCAB8CB3C319F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_ModifyBone_57D569944EB2CCA55FAD159AFDAE8D9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_A284B0FB4E490DDCEB736FADB4CBA262();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_BlendListByBool_364E040442B5E59EACB86C8156F9EE28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_8DDE56AE4EC9FE04358CE1ABC5C89785();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_B44659114DB1254AD5E203942CD60711();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MS_NewAnimationBlueprint_AnimGraphNode_TransitionResult_6916466F4970218A62F04598C7139EE4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Footstep();
	void AnimNotify_Play_Fedor_pain();
	void AnimNotify_ThrowStone();
	void AnimNotify_StopDaze();
	void ExecuteUbergraph_MS_NewAnimationBlueprint(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_4, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AMS_Character_New_C* K2Node_DynamicCast_AsMS_Character_New, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMovingBackwards_ReturnValue);
};

}


