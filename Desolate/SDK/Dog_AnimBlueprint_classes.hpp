#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3259 (0x34C1 - 0x268)
// AnimBlueprintGeneratedClass Dog_AnimBlueprint.Dog_AnimBlueprint_C
class UDog_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_9BC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2A8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2D0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x318(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3D8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x400(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x448(0xB8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x550(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x578(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x5A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x5C8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x5F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x668(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x698(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x710(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x740(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x7F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x820(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x898(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x8C8(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x978(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x9A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x9D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x9F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0xA20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0xA48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0xA70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0xA98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xAC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xAE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0xB10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xB38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xB60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xB88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xBB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xBD8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xC00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xC28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xC50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xC78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0xCA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xCC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xCF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xD18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xD40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xD68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xD90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xDB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0xDE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0xE08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0xE30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0xE58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0xE80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xEA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xED0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xEF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xF20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xF48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xF70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xF98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xFC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xFE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1010(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1038(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1060(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1088(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x10B0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x1128(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1158(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x11D0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1200(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x1278(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x12A8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x1320(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1350(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x13C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x13F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x1470(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x14A0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x1518(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1548(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x15C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x15F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x1668(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1698(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1710(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1740(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x17B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x17E8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1860(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1890(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x1908(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x1938(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x19B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x19E0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1A58(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1A88(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x1B00(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1B30(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x1BA8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1BD8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x1C50(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1C80(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x1CF8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1D28(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x1DA0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1DD0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1E48(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1E78(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x1EF0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1F20(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1F98(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1FC8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2040(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x2070(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x20E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2118(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x2190(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x21C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2238(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x2268(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x22E0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x2310(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x23C0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x23F0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x24A0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x24D0(0xB0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x25A0(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x25C0(0x1B0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3;                         // 0x2770(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x2950(0x1E0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x2B30(0x108)(None)
	uint8                                        Pad_B1C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x2C40(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x2E20(0x1E0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x3000(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x3108(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x3210(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3318(0x108)(None)
	float                                        Speed;                                             // 0x3420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x3424(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleHowling;                                       // 0x3425(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleLie;                                           // 0x3426(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleScratch;                                       // 0x3427(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleSitDown;                                       // 0x3428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleDig;                                           // 0x3429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B36[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ADog_Character_C*                      Character;                                         // 0x3430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkSpeedRatio;                                    // 0x3438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunSpeedRatio;                                     // 0x343C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDog_PatrolPoiType                LastPoi;                                           // 0x3440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastState;                                         // 0x3441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInAlert;                                         // 0x3442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInFight;                                         // 0x3443(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInSpecial;                                       // 0x3444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtAlpha;                                       // 0x3448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x344C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStuned;                                          // 0x3458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEat;                                             // 0x3459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSniffTheGround;                                  // 0x345A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSniffTheGroundAndTouch;                          // 0x345B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               RightHandEffector;                                 // 0x345C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RightHandRotation;                                 // 0x3468(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LeftHandEffector;                                  // 0x3474(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftHandRotation;                                  // 0x3480(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               RightLegEffector;                                  // 0x348C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RightLegRotation;                                  // 0x3498(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LeftLegEffector;                                   // 0x34A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftLegRotation;                                   // 0x34B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        IKAlpha;                                           // 0x34BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GlobalIKDisabled;                                  // 0x34C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDog_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AB_SyncState(enum class EAIStates State, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void AB_SyncPoiType(enum class EDog_PatrolPoiType Type, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_165CE083435996CD939E72A842D2CC25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_EC0C0E254FDCE0C107EB90B63C38A274();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_4FA7164A4FC0B2DC10E2E79AA6650EBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_71392C2440ED3C9210E2D384E9095B90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8F2DEBE2416EC03508AAEE93410C28E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_F0302B964BBA278F307771BED5A4B4D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_BEA2A6C94C2BF856F935B7A58622B2A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_3998CB81485B91A06C15178D916A1351();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_8AFC78A441A916656C16088B806A479A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D0B6DDFD46FA5F9F290E108490EF7378();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_14002A424BB23689E76899954F8F962D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_5F2A17124A160A434F0BE7AF9EF747B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_2DB83CA6402C75C3C9546EA9312AD83B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_ModifyBone_3D1DA2EA46E713EC0F0BCC8626C70E32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD6F9C6447AAD386C1FC1282B34BC20D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_D2DA71E34B0B75E129716AA16FF7B574();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_FD5F1EB74F65360AD036CDAC3E771172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_A97C0DBB402FA4228F52D899E85EDF76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Dog_AnimBlueprint_AnimGraphNode_TransitionResult_CD53501042147FE2EA7979BBDEC8C65B();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Footstep();
	void ExecuteUbergraph_Dog_AnimBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ADog_Character_C* K2Node_DynamicCast_AsDog_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


