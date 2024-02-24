#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A89 (0x5199 - 0x710)
// AnimBlueprintGeneratedClass ABP_HMU_NPC_Template.ABP_HMU_NPC_Template_C
class UABP_HMU_NPC_Template_C : public UNWXAINPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x710(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x718(0x5)(HasGetValueTypeHash)
	uint8                                        Pad_7C5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x720(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_BlendSpaceGraph;            // 0x728(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x730(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x738(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x758(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x810(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x830(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x8E8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x908(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x9C0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x9E0(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0xA98(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0xAB8(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0xB70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0xB90(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xC48(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xC68(0xB8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0xD20(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0xD68(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0xDB0(0x48)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_2;               // 0xDF8(0x38)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0xE30(0x10)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0xE40(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xF08(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xF28(0xB8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xFE0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1108(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x1230(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x1250(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1270(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x1290(0xB8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1348(0xB8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1400(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_18;                   // 0x14B8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_17;                   // 0x1538(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_16;                   // 0x15B8(0x80)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_1;               // 0x1638(0x38)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0x1670(0x38)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_15;                   // 0x16A8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_14;                   // 0x1728(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_42;                    // 0x17A8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_41;                    // 0x17D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_40;                    // 0x17F8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_39;                    // 0x1820(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_3;            // 0x1848(0xD0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_6;                       // 0x1918(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9;                              // 0x19E0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_13;                   // 0x1A28(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_38;                    // 0x1AA8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_37;                    // 0x1AD0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_36;                    // 0x1AF8(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x1B20(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x1B40(0x20)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0x1B60(0xD0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_5;                       // 0x1C30(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8;                              // 0x1CF8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_35;                    // 0x1D40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_34;                    // 0x1D68(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_33;                    // 0x1D90(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x1DB8(0xD0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_4;                       // 0x1E88(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7;                              // 0x1F50(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_32;                    // 0x1F98(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_31;                    // 0x1FC0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_30;                    // 0x1FE8(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x2010(0xD0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3;                       // 0x20E0(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6;                              // 0x21A8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_29;                    // 0x21F0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_28;                    // 0x2218(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_27;                    // 0x2240(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x2268(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x2330(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26;                    // 0x2378(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25;                    // 0x23A0(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x23C8(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x2490(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0x24D8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x2500(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_12;                   // 0x2528(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x25A8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x2628(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x26A8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x2728(0x80)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x27A8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x27C8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x27E8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x2808(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2828(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2848(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x2868(0xF0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x2958(0xF0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2A48(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2B00(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x2B20(0xF0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x2C10(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x2D00(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2D28(0xF0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x2E18(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x2F08(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x2F30(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x3020(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x3048(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3070(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x3128(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x3148(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x3170(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x3198(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x31C0(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x31E8(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x32D8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x3320(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x3348(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x3370(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x3398(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x3460(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x3528(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3550(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3570(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3598(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x35C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x35E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3610(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x3638(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x3680(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x36A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x36E8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3708(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x3750(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x3770(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3798(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x37B8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3880(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x3900(0x40)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x3940(0x80)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x39C0(0x110)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x3AD0(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3B18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3B40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x3B68(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3B90(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x3BB0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3BD8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3BF8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x3CC0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x3D40(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_11;           // 0x3D88(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3DA8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_10;           // 0x3DF0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3E10(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_9;            // 0x3E58(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x3E78(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_8;            // 0x3EC0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3EE0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_7;            // 0x3F28(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x3F48(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_6;            // 0x3F90(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x3FB0(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_5;            // 0x3FF8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x4018(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_4;            // 0x4060(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4080(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_3;            // 0x40C8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x40E8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_2;            // 0x4130(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4150(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult_1;            // 0x4198(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x41B8(0x48)(None)
	struct FAnimNode_BlendSpaceSampleResult      AnimGraphNode_BlendSpaceSampleResult;              // 0x4200(0x20)(None)
	struct FAnimNode_BlendSpaceGraph             AnimGraphNode_BlendSpaceGraph;                     // 0x4220(0x68)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x4288(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x42D0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4318(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x4360(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x4428(0x80)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x44A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x44F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4538(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x4580(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x4600(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x4680(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x46C8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x4710(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x4738(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4760(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x4850(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x48D0(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x48F8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x4A20(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4B48(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4C70(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4C90(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x4CB0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4CD8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x4D58(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4D80(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x4DC8(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x4E90(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4F58(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x4F80(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4FA8(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x4FD0(0xC8)(None)
	struct FVector                               EyeOffset;                                         // 0x5098(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_2;                           // 0x50B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_1;                           // 0x50B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x50B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E21[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_EyeOffset_B96ADEFC4923E8F3DC57E2A776BF3504; // 0x50B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EABDesignationType                ActiveBankAB;                                      // 0x50D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertnessLevelType               AlertnessLevel;                                    // 0x50D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureBase_C*                    Character;                                         // 0x50D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UOverlay_AnimB_Base_C*                 OverlayBank_A;                                     // 0x50E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UOverlay_AnimB_Base_C*                 OverlayBank_B;                                     // 0x50E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Enable_AimOffset;                                  // 0x50F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BasePose_Stand;                                    // 0x50F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BasePose_Crouch;                                   // 0x5100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spine_Add;                                         // 0x5108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Head_Add;                                          // 0x5110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_L_Add;                                         // 0x5118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_R_Add;                                         // 0x5120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pelvis;                                            // 0x5128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Legs;                                              // 0x5130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Hand_r;                                            // 0x5138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Hand_l;                                            // 0x5140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Enable_HandIK_L;                                   // 0x5148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Enable_HandIK_R;                                   // 0x5150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_L_LS;                                          // 0x5158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_L_MS;                                          // 0x5160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_R_LS;                                          // 0x5168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arm_R_MS;                                          // 0x5170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFootStanceType                   BaseStanceType;                                    // 0x5178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x5180(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         BodyType;                                          // 0x5198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_HMU_NPC_Template_C* GetDefaultObj();

	void GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk);
	void ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig);
	void OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK);
	void Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics);
	void LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget);
	void Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk);
	void BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform);
	void Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK);
	void BodyMorph(const struct FPoseLink& InPose_0, struct FPoseLink* BodyMorph);
	void EyeMorph(const struct FPoseLink& InPose, const struct FVector& EyeOffset, struct FPoseLink* EyeMorph);
	void BlendLayer(const struct FPoseLink& Base_Layer_Input, const struct FPoseLink& Overlay_Layer_Input, const struct FPoseLink& Base_Poses_Input, struct FPoseLink* BlendLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetAnimOverlayUnarmed(const class FString& WarningMessage, enum class EAlertnessLevelType CallFunc_GetCachedAlertness_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void UpdateAnimOverlayBank(struct FDataTableRowHandle& AnimDataHandle, enum class EAlertnessLevelType CallFunc_GetCachedAlertness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FS_OverlayBankSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void SetOverlayAnimBank_Internal(TSoftClassPtr<class UOverlay_AnimB_Base_C> RequestedAnimOverlay, class UClass* LoadedClass, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOverlay_AnimB_Base_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetCurveValuesThreadSafe(float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_6, float CallFunc_GetCurveValue_ReturnValue_7, double CallFunc_Lerp_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_8, float CallFunc_GetCurveValue_ReturnValue_9, float CallFunc_GetCurveValue_ReturnValue_10, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_11, float CallFunc_GetCurveValue_ReturnValue_12, float CallFunc_GetCurveValue_ReturnValue_13, float CallFunc_GetCurveValue_ReturnValue_14, float CallFunc_GetCurveValue_ReturnValue_15, float CallFunc_GetCurveValue_ReturnValue_16, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double K2Node_VariableSet_Arm_R_Add_ImplicitCast, double K2Node_VariableSet_Arm_L_Add_ImplicitCast, double K2Node_VariableSet_Head_Add_ImplicitCast, double K2Node_VariableSet_Spine_Add_ImplicitCast, double K2Node_VariableSet_BasePose_Crouch_ImplicitCast, double K2Node_VariableSet_BasePose_Stand_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double K2Node_VariableSet_Arm_L_LS_ImplicitCast, double K2Node_VariableSet_Arm_R_LS_ImplicitCast, double K2Node_VariableSet_Pelvis_ImplicitCast, double K2Node_VariableSet_Legs_ImplicitCast, double K2Node_VariableSet_Hand_R_ImplicitCast, double K2Node_VariableSet_Hand_L_ImplicitCast);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void InitializeAnimBanks(class UOverlay_AnimB_Unarmed_C* CallFunc_SpawnObject_ReturnValue, class UOverlay_AnimB_Unarmed_C* CallFunc_SpawnObject_ReturnValue_1);
	void SetCharacterEyeScale(float& Scale);
	void LinkAndUpdateAnimations();
	void InitializeReferences();
	void OnLoaded_B1D25BAB4E7EBDE224C3A7B4A75F10A8(TSubclassOf<class UObject> Loaded);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_020FB67D4347BD7C26918FAA3F065ED3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_9BAD81CB4DBD6F3756397BA18B8FCC15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_A932E5D642FE7AF7B898588EF29F7AE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_SequencePlayer_C3F963F64C5461D250CA2AAC99C0688E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_NPC_Template_AnimGraphNode_ModifyBone_C84170DE436CCCFC578254847C437853();
	void BlueprintInitializeAnimation();
	void Event_Set_Overlay_Anim_Bank__Async_Load_(TSoftClassPtr<class UOverlay_AnimB_Base_C> Requested_Overlay_Bank);
	void SetCharacterEyeOffset(struct FVector& Offset);
	void SetCharacterBodyType(enum class EBodyType Type);
	void BlueprintBeginPlay();
	void OnDownChange(bool IsDown_);
	void ExecuteUbergraph_ABP_HMU_NPC_Template(int32 EntryPoint, float K2Node_Event_Scale, class UClass* Temp_class_Variable, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* K2Node_ClassDynamicCast_AsOverlay_Anim_B_Base, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftClassPtr<class UOverlay_AnimB_Base_C> K2Node_CustomEvent_Requested_Overlay_Bank, const struct FVector& K2Node_Event_Offset, enum class EBodyType K2Node_Event_Type, bool K2Node_CustomEvent_IsDown_, class ABP_Creature_NPC_Human_C* K2Node_DynamicCast_AsBP_Creature_NPC_Human, bool K2Node_DynamicCast_bSuccess);
};

}


