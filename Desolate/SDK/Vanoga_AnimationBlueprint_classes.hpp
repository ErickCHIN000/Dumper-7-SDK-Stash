#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27C5 (0x2A2D - 0x268)
// AnimBlueprintGeneratedClass Vanoga_AnimationBlueprint.Vanoga_AnimationBlueprint_C
class UVanoga_AnimationBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_FF5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2A8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2D0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x318(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3D8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x400(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x448(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x500(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x520(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x540(0x1B0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x6F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x718(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x740(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x768(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x790(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x808(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x838(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x8E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x918(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x990(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x9C0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0xA70(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xAA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xAC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0xAF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xB18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xB40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xB68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xB90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xBB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xBE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xC08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xC30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xC58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0xC80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xCA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xCD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xCF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xD20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xD48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xD70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xD98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0xDC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0xDE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0xE10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0xE38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0xE60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xE88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xEB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xED8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xF00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xF28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xF50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xF78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xFA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xFC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xFF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1018(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1040(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1068(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1090(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x1108(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1138(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x11B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x11E0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x1258(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1288(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1300(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1330(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x13A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x13D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1450(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1480(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x14F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1528(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x15A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x15D0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1648(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1678(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x16F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1720(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x1798(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x17C8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x1840(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1870(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x18E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1918(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x1990(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x19C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1A38(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1A68(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x1AE0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1B10(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1B88(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1BB8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x1C30(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1C60(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1CD8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1D08(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1D80(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1DB0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1E28(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1E58(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1ED0(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x1F00(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1F78(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1FA8(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2058(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x2088(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2138(0xE0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x2218(0xC8)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x22E0(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x24C0(0x1E0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x26A0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x27A8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x28B0(0x108)(None)
	struct FVector                               TargetLocation;                                    // 0x29B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtAlpha;                                       // 0x29C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x29C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x29CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEatMeat;                                          // 0x29CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCrying;                                           // 0x29CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEatFly;                                           // 0x29CF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLullKid;                                          // 0x29D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIdleSitDown;                                      // 0x29D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWashesHead;                                       // 0x29D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInFight;                                        // 0x29D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInAlert;                                        // 0x29D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_106D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkRatio85;                                       // 0x29D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunRatio400;                                       // 0x29DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVanoga_Character_C*                   Character;                                         // 0x29E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastState;                                         // 0x29E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVanoga_PatrolPoiType             LastPatrolPoi;                                     // 0x29E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1070[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Yaw;                                               // 0x29EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x29F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVanoga_PatrolTypes               LastPatrolType;                                    // 0x29F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastStatePatrolType;                               // 0x29F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStuned;                                          // 0x29F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSpiderMode;                                       // 0x29F7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              LeftFootRotation;                                  // 0x29F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RightFootRotation;                                 // 0x2A04(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        IKAlpha;                                           // 0x2A10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftEffector;                                      // 0x2A14(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RightEffector;                                     // 0x2A20(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GlobalIKDisabled;                                  // 0x2A2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UVanoga_AnimationBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AB_SyncPatrolType(enum class EVanoga_PatrolTypes Type, enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AB_SyncPatrolPoi(enum class EVanoga_PatrolPoiType PatrolPoiType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void AB_SyncState(enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_7D8699874FE83077F532FFA665E1EBE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_510E4E764989AE0ED577A9B6E0A4CAAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859B7BF54B86436AE646E7B8A06B005F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E17F122440EA96FCA4273C9521696526();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_850346AA4BFAC37F2C8F3C84837573B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_2A0C25074C4CCF01D31708AEE84A321F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_60763C2D440B9D4E6EF20AAD9849BB6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_D40F4A39472CF5A6384E31B4E606C014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E4AD527C4401366EB138148AB42B6119();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C5FF2EBD47D64FCA34B7AA90A285A3FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_8641ED6A41DB8E41364201A92AC55333();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_C9F230C343F2499E72EF3C95283CC5BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_ModifyBone_81940B4E4F13988333C68BACA519118E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_E32E297649B186F662017F89B67C0874();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanoga_AnimationBlueprint_AnimGraphNode_TransitionResult_859283B64607572B9F49BE961AC62EDA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Footstep();
	void AnimNotify_RangedAttack();
	void AnimNotify_Vanoga_SpawnFirstMine();
	void AnimNotify_Vanoga_SpawnSecondMine();
	void AnimNotify_Vanoga_SpawnThirdMine();
	void AnimNotify_VanogaCircularAttack();
	void ExecuteUbergraph_Vanoga_AnimationBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AVanoga_Character_C* K2Node_DynamicCast_AsVanoga_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


