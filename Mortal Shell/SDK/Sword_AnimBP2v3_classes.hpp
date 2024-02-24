#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6038 (0x62A0 - 0x268)
// AnimBlueprintGeneratedClass Sword_AnimBP2v3.Sword_AnimBP2v3_C
class USword_AnimBP2v3_C : public UAnimInstance
{
public:
	uint8                                        Pad_3AF9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x278(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x330(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x358(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x380(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6;                              // 0x440(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x488(0xB8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x540(0xA0)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot_1;                      // 0x5E0(0x90)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x670(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x698(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x6E0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x728(0xA0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x7C8(0x188)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x950(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xA08(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0xA30(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0xA78(0x78)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance;                         // 0xAF0(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0xB90(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_118;                // 0xBD8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_117;                // 0xC00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_116;                // 0xC28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_115;                // 0xC50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_114;                // 0xC78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_113;                // 0xCA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_112;                // 0xCC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_111;                // 0xCF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_110;                // 0xD18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_109;                // 0xD40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_108;                // 0xD68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_107;                // 0xD90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_106;                // 0xDB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_105;                // 0xDE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_104;                // 0xE08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_103;                // 0xE30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_102;                // 0xE58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_101;                // 0xE80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_100;                // 0xEA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_99;                 // 0xED0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_98;                 // 0xEF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_97;                 // 0xF20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_96;                 // 0xF48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_95;                 // 0xF70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_94;                 // 0xF98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_93;                 // 0xFC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_92;                 // 0xFE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_91;                 // 0x1010(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_90;                 // 0x1038(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_89;                 // 0x1060(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_88;                 // 0x1088(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_87;                 // 0x10B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_86;                 // 0x10D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_85;                 // 0x1100(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_84;                 // 0x1128(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_83;                 // 0x1150(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_82;                 // 0x1178(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_81;                 // 0x11A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_80;                 // 0x11C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_79;                 // 0x11F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_78;                 // 0x1218(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_77;                 // 0x1240(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_76;                 // 0x1268(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_75;                 // 0x1290(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_74;                 // 0x12B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_73;                 // 0x12E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_72;                 // 0x1308(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_71;                 // 0x1330(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_70;                 // 0x1358(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_69;                 // 0x1380(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_68;                 // 0x13A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_67;                 // 0x13D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_66;                 // 0x13F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_65;                 // 0x1420(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_64;                 // 0x1448(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_63;                 // 0x1470(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x1498(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x14C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x14E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x1510(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x1538(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x1560(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x1588(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x15B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x15D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x1600(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x1628(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x1650(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x1678(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x16A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x16C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x16F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x1718(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x1740(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x1768(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x1790(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x17B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x17E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x1808(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x1830(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x1858(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x1880(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x18A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x18D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x18F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x1920(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x1948(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x1970(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x1998(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x19C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x19E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x1A10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x1A38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x1A60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x1A88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x1AB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x1AD8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x1B00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x1B28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x1B50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x1B78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x1BA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x1BC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x1BF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x1C18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x1C40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x1C68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x1C90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x1CB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x1CE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x1D08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x1D30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x1D58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x1D80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1DA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1DD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1DF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1E20(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_44;                      // 0x1E48(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_25;                 // 0x1E78(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_43;                      // 0x1F58(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1F88(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_42;                      // 0x2000(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x2030(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x20A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x20D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x2150(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x2180(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x21F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x2228(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x22A0(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_24;                 // 0x22D0(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x23B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x23E0(0x78)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_3;                    // 0x2458(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x24F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x2570(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x25A0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x2618(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x2648(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x26C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x26F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x2768(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2798(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x2810(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x2840(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x28B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x28E8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x2960(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2990(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_23;                 // 0x2A30(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_22;                 // 0x2B10(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2BF0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x2C20(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x2C98(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x2CC8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x2D40(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x2D70(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x2DE8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2E18(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x2E40(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x2EB8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x2EE8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x2F60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2F90(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x3008(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x3038(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x30B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x30E0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x3158(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x3188(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x3200(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x3230(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x32A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x32D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x3350(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x3380(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x33F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3428(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x34A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x34D0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x3548(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3578(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x35F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3620(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x3698(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x36C8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x3740(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3770(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x37E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x3818(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x3890(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x38C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x3938(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x3968(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x39E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3A10(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x3A88(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x3AB8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x3B30(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3B60(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x3BD8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x3C08(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x3C80(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3CB0(0x78)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x3D28(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x3DF0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x3EF8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4000(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x4108(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x4128(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x4148(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4250(0xC0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_21;                 // 0x4310(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x43F0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4468(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4498(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4510(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4540(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x45B8(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_20;                 // 0x45E8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_19;                 // 0x46C8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_18;                 // 0x47A8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_17;                 // 0x4888(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_16;                 // 0x4968(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_15;                 // 0x4A48(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_14;                 // 0x4B28(0xE0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_2;                    // 0x4C08(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_13;                 // 0x4CA8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_12;                 // 0x4D88(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x4E68(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0x4F48(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x5028(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x5108(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x51E8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x52C8(0xE0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_1;                    // 0x53A8(0xA0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x5448(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x54E8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x55C8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x56A8(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x5788(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x5828(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x5908(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x59A8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x5A88(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5B68(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5B98(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5C48(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x5C78(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5D80(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5DA0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5DC0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x5EC8(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x5FD0(0x48)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x6018(0x90)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x60A8(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x6148(0x48)(None)
	bool                                         IsInAir_;                                          // 0x6190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x6194(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMeleeAtk_;                                       // 0x6198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsThowing_;                                        // 0x6199(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHeavyMeleeAtk_;                                  // 0x619A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsComboAtk_;                                       // 0x619B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDodging_;                                        // 0x619C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThrowPlayRate;                                     // 0x61A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x61A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLockedMode_;                                     // 0x61A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBlocking_;                                       // 0x61A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBlockKnockBack_;                                 // 0x61AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C28[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlockKnockBackPlayRate;                            // 0x61AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCloseRangeAtk_;                                  // 0x61B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     CloseAtkAnim;                                      // 0x61B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCloseRangeAtk2_;                                 // 0x61C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEquipping_;                                      // 0x61C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStumbling_;                                      // 0x61C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDrinking_;                                       // 0x61C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        WalkForward;                                       // 0x61C4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkRight;                                         // 0x61C8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHitDeflected_;                                   // 0x61CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDodgeDirectional_;                               // 0x61CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMeleeAtk2_;                                      // 0x61CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMeleeAtk3_;                                      // 0x61CF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHeavyComboAtk2_;                                 // 0x61D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasDamaged_;                                       // 0x61D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasDamaged2_;                                      // 0x61D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasAutoCritAtk_;                                   // 0x61D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPraying_;                                        // 0x61D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDonePraying_;                                    // 0x61D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOpeningTreasure_;                                // 0x61D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTwinBladeMode_;                                  // 0x61D7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMeleeAtk4_;                                      // 0x61D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMeleeAtk5_;                                      // 0x61D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHeavyComboAtk3_;                                 // 0x61DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsKneeling_;                                       // 0x61DB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        DashFwd;                                           // 0x61DC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashRight;                                         // 0x61E0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsKicking_;                                        // 0x61E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KneelType;                                         // 0x61E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AtkToIdleTransitionSpeedModifier;                  // 0x61EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrawling_;                                       // 0x61F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseLocomotionSubInstance_;                         // 0x61F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStoppedInRagdollPose_;                           // 0x61F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NullState_;                                        // 0x61F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x61F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceCombatWalkBlendspace;                         // 0x61F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CurrentArmor;                                      // 0x61F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StrafeAnimScaleByArmor;                            // 0x61F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeInAir;                                         // 0x61FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFallingVelocity;                            // 0x6200(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastFallHeight;                                    // 0x6204(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FallHeightThresholdForLand;                        // 0x6208(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastLandPlayRate;                                  // 0x620C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandingBlend;                                      // 0x6210(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAImingRangedWeapon;                             // 0x6214(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0x6218(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BallistazookaAimTarget;                            // 0x621C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAimingBallistazooka_;                            // 0x6228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              BallistazookaHandAimRotation;                      // 0x622C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBallistaZookaEquipState          BallistaZookaEquipState;                           // 0x6238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead_;                                           // 0x6239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bTargeting;                                        // 0x623A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetWorldLocation;                               // 0x623C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PelvisToTargetLookAtRotation;                      // 0x6248(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        AddedPitch;                                        // 0x6254(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpineBenderAlpha;                                  // 0x6258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialWalk;                                      // 0x625C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PoseSnapshot;                                      // 0x6260(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UsePoseSnapshot;                                   // 0x6298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CurrentShell;                                      // 0x6299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInAnyAtk;                                        // 0x629A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C67[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeed;                                          // 0x629C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USword_AnimBP2v3_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetAimPitch(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_GetIsInPhotoMode_PhotoMode_, float CallFunc_ClampAngle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetDoesAnyAttack(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6);
	void GetBallistazookaVariables(class ABallistazooka_C* Ballistazooka, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWeaponAiming_ShouldRotateWeaponTowardsAimTarget, const struct FVector& CallFunc_GetCameratTraceImpactLocation_CameraTargetTraceLocation, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue);
	void MapSpeedRangeForNotifyBug();
	void ResetAllAttackBools(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	void ResetInAirIfDashing(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue);
	void SetNoDeflectionIfTwinblade();
	void AdjustSpeedIfMini(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	void SetIsDodgeDirectional(bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateDirection(bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetMaxSpeed_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_93727C6F49C05853872B71AAC6761806();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_67B9DDEA43463A5FB82E95AFACA88B94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_C26CD787446B204FF49B10BFB768A377();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_AC83AA1C400A8ED1AF526FA2718BE35E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_560C77DD4D43393870AF09A5318F5090();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_22F0D939430D0831D3EF0C929D3949D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_6AA612954B99609221F82CA05CD614FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_F9B01B084B94597C92CBD99DD06B8DD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_8433814E4E4CFDB99EAABBB2ECEBC881();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_D73B0716465035F7090868A4860259DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_72FEEB9E478D1B81308CCDBFFE4A81BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TwoWayBlend_6C79235340D54168AB98F7909B782823();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_BlendSpacePlayer_FD441FF542574E3F9122F59040FA9125();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_3FC1BFB345E64A3105A3A583C1BAE827();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_6C2AE2CB431A287EA0986B8233921931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_AE4464454F8E472F79CDF1A4BAB866B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_42582E7449610D34D39B519E63A467C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_BlendListByInt_B0F2AAE64A3CBE55A8B6B8865AA2E4E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_BlendListByInt_26332823488C15AFA03D84BF9BDEA82A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_BlendListByInt_2EEF6AD04680D840B93125B291A26BF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_BlendListByBool_1F7336AF4C2A381AF22169B19357DF82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_BE782730434BF71EE9EA6D86ADF69DBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_E593E3C74FDDF1F65AFE298E59E2E9E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_A6145A4545977E4C5FEB26B916EAC3E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_4320E0254D4C70416A3BD589EA743201();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_1BC97F664EED7ED31337759DF4C1BCBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_F8C564AA4CC3B8B41B60F2AF6A6C8230();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_55A5607643C1C1B3EB8F868EF802305D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_1A799C9545B4FA7331EDBDA2815ED699();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_2FE35F524D1E2F9A9BF6BBB57A49AEA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_8D2288FA48AA16C5B6378599484AF71D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_3D24635243C146D460E2C49E705F446E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_8483617E48E3E64734D88A973E4FBE6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_323C4C404BF15F4DE751268DED47701D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_C3C94B1340E12B4F945EE3AB30C96BCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_02D1BC3A4E8518606E502D8A7363889F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_45E597784C737DAB4B169692ED6E29A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_273B13C346C3AB19119F609E19ACBDF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_6B212A864C58C870C036F6A48D94B431();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_ModifyBone_8583FA26452E101F7EB0EFB34DAB4642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_ModifyBone_A5DEC9D34D2BEAB077B223AD3B260872();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_ModifyBone_5001477946518A527979F78773B0D72E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_A065EC524DA206D183998C8413D6C543();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_76AE8A3D46858CAB419DE2BDF369DB0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_644179BB49FD3C2216EDF59FA0E5462C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_DFB0AB774ECCD701790DFA8FA0F384B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_E105F1574B0F275813D627B45C123B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_449D85DF4DDFC9C8AE179E927C567B55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_CA97D9394F914B28D17F0ABAD9868395();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_FC02345F4F51C1DEEF6BDA9F34F62139();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_50C9A03244C624EA071B8CBC90C51AC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_E10081EF4C4680E5685F7C9C8F885C8E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_LeftAttack();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_0965403F46BF9CAD5965C7818F06AF69();
	void AnimNotify_LeftThrow();
	void AnimNotify_LeftHeavyAtk();
	void AnimNotify_LeftComboAtk();
	void AnimNotify_LeftDodge();
	void AnimNotify_LeftBlock();
	void AnimNotify_LeftBlockKnockBack();
	void AnimNotify_LeftCloseRangeAtk();
	void AnimNotify_LeftCloseRangeAtk2();
	void AnimNotify_AtkStarted();
	void AnimNotify_AtkEnded();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_496AA5CE4CAA3ADCCF6A62A7C5784F68();
	void AnimNotify_EnteredIdle();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_F515E1D04F9B25706E4AAA95153D9AD7();
	void AnimNotify_IdleFullyBlended();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_B90975F6498DDFA0F0B0558417BC605E();
	void AnimNotify_LeftEquip();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_8A2AD32A45B91C0CC8C5CC98C4A5E221();
	void AnimNotify_LeftStumble();
	void AnimNotify_EnteredDrinking();
	void AnimNotify_LeftDrinking();
	void AnimNotify_EnteredThrow();
	void AnimNotify_LeftHitDeflected();
	void AnimNotify_LeftDirectionalDodge();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_30DB6DF34BBB9882BCC25F84F4976CDF();
	void AnimNotify_EnteredDodge();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_D260989341AFCA199516A5A1C9F7DCBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_9A2E19B340C1E8190EA00783FF8127B4();
	void AnimNotify_LeftMeleeAtk2();
	void AnimNotify_LeftMeleeAtk3();
	void AnimNotify_LeftHeavyComboAtk2();
	void AnimNotify_LeftWasDamaged();
	void AnimNotify_LeftWasDamaged2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_8AC8003B4F4EBCF2AE20089FCD61C62A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_F9BAFD9749E4B17F8CFBC0856EDA2D73();
	void AnimNotify_LeftAutoCritAtk();
	void AnimNotify_LeftOpenTreasure();
	void AnimNotify_LeftTwinBlade2();
	void AnimNotify_LeftTwinBlade3();
	void AnimNotify_LeftTwinBlade4();
	void AnimNotify_TwinIdleFullyBlended();
	void AnimNotify_LeftTwinDirectionalDodge();
	void AnimNotify_LeftTwinBlade5();
	void AnimNotify_LeftTwinBlade6();
	void AnimNotify_LeftTwinHeavy2();
	void AnimNotify_LeftTwinHeavy1();
	void AnimNotify_LeftTwinHeavy3();
	void AnimNotify_LeftKneeling();
	void AnimNotify_LeftLongswordDodgeBS();
	void AnimNotify_DirectionalDodgeTransitionEnd();
	void AnimNotify_DirectionalDodgeTransitionInterrupt();
	void AnimNotify_LeftKick();
	void AnimNotify_LeftMeleeAtk4();
	void AnimNotify_LeftMeleeAtk5();
	void AnimNotify_EndTwinbladeTransition02();
	void AnimNotify_EndTwinbladeTransition03();
	void AnimNotify_EndTwinbladeTransition04();
	void AnimNotify_EndTwinbladeTransition05();
	void AnimNotify_InterruptTwinbladeTransition02();
	void AnimNotify_InterruptTwinbladeTransition03();
	void AnimNotify_InterruptTwinbladeTransition04();
	void AnimNotify_InterruptTwinbladeTransition05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_3C601FBD4E096DE55D0917A97CCDCF44();
	void AnimNotify_HitDeflectedFullyBlended();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_CF82C7694DE59FD2FBB147BA6F2AF112();
	void StopMesh();
	void ReviveMesh();
	void BeginNullState();
	void EndNullState();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sword_AnimBP2v3_AnimGraphNode_TransitionResult_2494E433458B59C6A8A158BE7FF3A5EF();
	void SwitchArmor(enum class EArmorTypes CurrentArmor);
	void BlueprintInitializeAnimation();
	void CharacterChangedShells();
	void ExecuteUbergraph_Sword_AnimBP2v3(int32 EntryPoint, enum class EComboTypes Temp_byte_Variable, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, float Temp_float_Variable, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_10, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_16, float CallFunc_GetRelevantAnimLength_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_15, bool CallFunc_LessEqual_FloatFloat_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_9, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_17, bool CallFunc_Less_FloatFloat_ReturnValue_3, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_18, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_19, bool CallFunc_LessEqual_FloatFloat_ReturnValue_19, bool CallFunc_LessEqual_FloatFloat_ReturnValue_20, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_20, bool CallFunc_LessEqual_FloatFloat_ReturnValue_21, bool CallFunc_BooleanAND_ReturnValue_10, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_21, bool CallFunc_LessEqual_FloatFloat_ReturnValue_22, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_22, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_23, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_Less_FloatFloat_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_24, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_25, bool CallFunc_LessEqual_FloatFloat_ReturnValue_23, bool CallFunc_Less_FloatFloat_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_26, bool CallFunc_LessEqual_FloatFloat_ReturnValue_24, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_27, bool CallFunc_Less_FloatFloat_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_28, bool CallFunc_LessEqual_FloatFloat_ReturnValue_25, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_29, bool CallFunc_LessEqual_FloatFloat_ReturnValue_26, bool CallFunc_BooleanAND_ReturnValue_12, class UBlendSpaceBase* Temp_object_Variable, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_30, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_31, bool CallFunc_Less_FloatFloat_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_27, class UBlendSpaceBase* Temp_object_Variable_1, float CallFunc_GetRelevantAnimLength_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_32, bool CallFunc_LessEqual_FloatFloat_ReturnValue_28, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_33, class UBlendSpaceBase* Temp_object_Variable_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_29, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_34, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_35, bool CallFunc_Less_FloatFloat_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_30, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_36, bool CallFunc_Less_FloatFloat_ReturnValue_10, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRelevantAnimLength_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_37, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_FloatFloat_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_14, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_15, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class AZero_Base_C* K2Node_DynamicCast_As0_Base_4, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, class AZero_Base_C* K2Node_DynamicCast_As0_Base_5, bool K2Node_DynamicCast_bSuccess_6, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_38, class AZero_Base_C* K2Node_DynamicCast_As0_Base_6, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_31, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_8, class AZero_Base_C* K2Node_DynamicCast_As0_Base_7, bool K2Node_DynamicCast_bSuccess_8, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_9, class AZero_Base_C* K2Node_DynamicCast_As0_Base_8, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_BooleanAND_ReturnValue_16, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_10, class AZero_Base_C* K2Node_DynamicCast_As0_Base_9, bool K2Node_DynamicCast_bSuccess_10, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_11, class AZero_Base_C* K2Node_DynamicCast_As0_Base_10, bool K2Node_DynamicCast_bSuccess_11, float CallFunc_Multiply_FloatFloat_ReturnValue_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_12, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_39, class AZero_Base_C* K2Node_DynamicCast_As0_Base_11, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_LessEqual_FloatFloat_ReturnValue_32, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_40, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_41, bool CallFunc_Less_FloatFloat_ReturnValue_12, bool CallFunc_Less_FloatFloat_ReturnValue_13, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_42, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_13, class AZero_Base_C* K2Node_DynamicCast_As0_Base_12, bool K2Node_DynamicCast_bSuccess_13, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_14, class AZero_Base_C* K2Node_DynamicCast_As0_Base_13, bool K2Node_DynamicCast_bSuccess_14, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_15, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_16, class AZero_Base_C* K2Node_DynamicCast_As0_Base_14, bool K2Node_DynamicCast_bSuccess_15, class AZero_Base_C* K2Node_DynamicCast_As0_Base_15, bool K2Node_DynamicCast_bSuccess_16, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_43, bool CallFunc_Less_FloatFloat_ReturnValue_14, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_17, class AZero_Base_C* K2Node_DynamicCast_As0_Base_16, bool K2Node_DynamicCast_bSuccess_17, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_18, class AZero_Base_C* K2Node_DynamicCast_As0_Base_17, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_19, class AZero_Base_C* K2Node_DynamicCast_As0_Base_18, bool K2Node_DynamicCast_bSuccess_19, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_20, class AZero_Base_C* K2Node_DynamicCast_As0_Base_19, bool K2Node_DynamicCast_bSuccess_20, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_21, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_44, class AZero_Base_C* K2Node_DynamicCast_As0_Base_20, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_LessEqual_FloatFloat_ReturnValue_33, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_22, class AZero_Base_C* K2Node_DynamicCast_As0_Base_21, bool K2Node_DynamicCast_bSuccess_22, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_23, class AZero_Base_C* K2Node_DynamicCast_As0_Base_22, bool K2Node_DynamicCast_bSuccess_23, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_45, bool CallFunc_BooleanAND_ReturnValue_17, bool CallFunc_LessEqual_FloatFloat_ReturnValue_34, bool CallFunc_BooleanAND_ReturnValue_18, float CallFunc_GetRelevantAnimLength_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_35, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_24, class UBlendSpaceBase* Temp_object_Variable_5, class AZero_Base_C* K2Node_DynamicCast_As0_Base_23, bool K2Node_DynamicCast_bSuccess_24, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_25, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_46, class AZero_Base_C* K2Node_DynamicCast_As0_Base_24, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_LessEqual_FloatFloat_ReturnValue_36, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_26, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_27, class AZero_Base_C* K2Node_DynamicCast_As0_Base_25, bool K2Node_DynamicCast_bSuccess_26, class AZero_Base_C* K2Node_DynamicCast_As0_Base_26, bool K2Node_DynamicCast_bSuccess_27, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_28, class AZero_Base_C* K2Node_DynamicCast_As0_Base_27, bool K2Node_DynamicCast_bSuccess_28, float CallFunc_GetRelevantAnimLength_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_29, class AZero_Base_C* K2Node_DynamicCast_As0_Base_28, bool K2Node_DynamicCast_bSuccess_29, float CallFunc_Multiply_FloatFloat_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_30, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_47, class AZero_Base_C* K2Node_DynamicCast_As0_Base_29, bool K2Node_DynamicCast_bSuccess_30, bool CallFunc_LessEqual_FloatFloat_ReturnValue_37, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_31, class AZero_Base_C* K2Node_DynamicCast_As0_Base_30, bool K2Node_DynamicCast_bSuccess_31, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_48, bool CallFunc_LessEqual_FloatFloat_ReturnValue_38, enum class EArmorTypes K2Node_CustomEvent_CurrentArmor, bool CallFunc_BooleanOR_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_32, float CallFunc_GetRelevantAnimTime_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_31, bool K2Node_DynamicCast_bSuccess_32, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_19, float CallFunc_Abs_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_33, float K2Node_Select_Default, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_33, float K2Node_Select_Default_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character_1, bool K2Node_DynamicCast_bSuccess_34, bool CallFunc_BooleanAND_ReturnValue_20, class UBlendSpaceBase* Temp_object_Variable_6, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_49, class UBlendSpaceBase* K2Node_Select_Default_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_39, bool CallFunc_BooleanAND_ReturnValue_21, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_22, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1);
};

}


