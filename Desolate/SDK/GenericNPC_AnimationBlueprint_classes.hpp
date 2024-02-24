#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D58 (0x5FC0 - 0x268)
// AnimBlueprintGeneratedClass GenericNPC_AnimationBlueprint.GenericNPC_AnimationBlueprint_C
class UGenericNPC_AnimationBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_14C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x278(0xB8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x330(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x350(0x1B0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x500(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_66;                 // 0x520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_65;                 // 0x548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_64;                 // 0x570(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_63;                 // 0x598(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x638(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x660(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x688(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65;                   // 0x6B0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_47;                      // 0x728(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x758(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x838(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_64;                   // 0x918(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_63;                   // 0x990(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0xA08(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_62;                   // 0xAA8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0xB20(0xA0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_8;                   // 0xBC0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_61;                   // 0xC70(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_60;                   // 0xCE8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_46;                      // 0xD60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59;                   // 0xD90(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_58;                   // 0xE08(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0xE80(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_57;                   // 0xF20(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0xF98(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0x1010(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x1088(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0x1138(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_45;                      // 0x11B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0x11E0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1258(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0x12F8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0x1370(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x13E8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0x1488(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0x1500(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0x1578(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x15F0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0x16A0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_44;                      // 0x1718(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x1748(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_43;                      // 0x17F8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x1828(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_42;                      // 0x18D8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x1908(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x1930(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x1958(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x1980(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x19A8(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x1A88(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0x1B68(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x1BE0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1C58(0xA0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1CF8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x1DA8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x1E20(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x1E50(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x1EC8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1F40(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x1FB8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x2068(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x20E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x2110(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x2188(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x2200(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x2278(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x2328(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x23A0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x23D0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x2480(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x24B0(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x2560(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x2590(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x25B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x25E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x2608(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x2630(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x26A8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x26D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x2700(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x2728(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x2750(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x2778(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x27A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x27C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x27F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x2818(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x2840(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x2868(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x2890(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x28B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x28E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x2908(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x2930(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x2958(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x2980(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x29A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x29D0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x29F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x2A70(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x2AA0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x2B18(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x2B48(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x2BC0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2BF0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x2C68(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x2C98(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x2D10(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x2D40(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x2DB8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x2DE8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2E60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x2E90(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x2F08(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x2F38(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x2FB0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x2FE0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x3058(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x3088(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x3100(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x3130(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x31A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x31D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x3250(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_3;                      // 0x3280(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x32F8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x3328(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x33D8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x3408(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x3430(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x3458(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x3480(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x34A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x34D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x34F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x3520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x3548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x3570(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x3598(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x35C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x35E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x3610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x3638(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3660(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3688(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x36B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x36D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x3700(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x3728(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3750(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3778(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x37A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x37C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x37F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3818(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3840(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3868(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x3890(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x3908(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x3938(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x39B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x39E0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x3A58(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x3A88(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x3B00(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x3B30(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3BA8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3BD8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x3C50(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x3C80(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x3CF8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3D28(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x3DA0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3DD0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x3E48(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x3E78(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x3EF0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3F20(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x3F98(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x3FC8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x4040(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x4070(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x40E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x4118(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x4190(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x41C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x4238(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x4268(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x42E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4310(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x4388(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x4438(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x44B0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x4528(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4558(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x45D0(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x4648(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x46F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4770(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_2;                      // 0x47A0(0x78)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_1;                      // 0x4818(0x78)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4890(0xB0)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x4940(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x49B8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x49E8(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x4A98(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x4AC8(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4B78(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4BA8(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x4C58(0xE0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4D38(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x4E00(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x4E28(0xC0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x4EE8(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4FC8(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x5068(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x5090(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x50B8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5100(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x51C0(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x52A8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x52F0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x5318(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x53B8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x53E0(0x48)(None)
	uint8                                        Pad_1616[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x5430(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x5610(0x1E0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x57F0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x58F8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x5A00(0x108)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x5B08(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x5BE8(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x5C88(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5CD0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5D18(0xA0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5DB8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5DD8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5DF8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x5EB0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x5ED8(0x28)(None)
	class AGenericNPC_Character_C*               Character;                                         // 0x5F00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPistol;                                          // 0x5F08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x5F0C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtAlpha;                                       // 0x5F18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInFight;                                         // 0x5F1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Yaw;                                               // 0x5F20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x5F24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         CachedState;                                       // 0x5F28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1636[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x5F2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRunning;                                         // 0x5F30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInAlert;                                         // 0x5F31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_163D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangedWalkRatio_250;                               // 0x5F34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangedRunRatio_350;                                // 0x5F38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHealing;                                         // 0x5F3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1643[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeleeWalkRatio_140;                                // 0x5F40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTired;                                           // 0x5F44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleStandAndWatchState;                            // 0x5F45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleCampfireState;                                 // 0x5F46(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EGenericNPC_PatrolTypes           LastPatrolType;                                    // 0x5F47(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         LastStatePatrolType;                               // 0x5F48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IdleStandCampfireState;                            // 0x5F49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleSitAndRestState;                               // 0x5F4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStuned;                                          // 0x5F4B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDazed;                                           // 0x5F4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_164E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IKAlpha;                                           // 0x5F50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RightFootRotation;                                 // 0x5F54(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               RightEffector;                                     // 0x5F60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftFootRotation;                                  // 0x5F6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LeftEffector;                                      // 0x5F78(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               JointTargetLeft;                                   // 0x5F84(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               JointTargetRight;                                  // 0x5F90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBomber;                                          // 0x5F9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCloseRun;                                        // 0x5F9D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1659[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangedRunRatio_500;                                // 0x5FA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeavyWeapon;                                     // 0x5FA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EWeaponType                       WeaponType;                                        // 0x5FA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_165C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeleeWalkRatio_125;                                // 0x5FA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeleeRunRatio_450;                                 // 0x5FAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkipDeaggroAnimation;                             // 0x5FB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GlobalIKDisabled;                                  // 0x5FB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTaran;                                           // 0x5FB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1662[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TaranRunRatio;                                     // 0x5FB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveForward;                                       // 0x5FB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveRight;                                         // 0x5FBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGenericNPC_AnimationBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AB_SyncPatrolType(enum class EGenericNPC_PatrolTypes PatrolType, enum class EAIStates State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateState(enum class EAIStates AIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_6245C9E64B99C0099381EAA32A6D0932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7CAF1FAE48C9A60A530D4F8FE1423692();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B2FEBFA341E5B2E143A0709CA098B435();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_B504D1D64E16B8B6F3A7FFAEE759C054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A5CD404649F2CACB0A3A7293D84858C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_38808DEE49084A3D42E4F1886BF6BECC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F731B6D1487AC7CB6790C0A6644D8F23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_F12F4A90425F8FC077E51BAE14089BAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C251144D46D744A4C80CBB8512B0555F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_C28F0C3945430FC5D6D36FA4C3ECC24E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_1F08B42140EC239642BAB5851A2E546E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_BEBB365541BF083F2B68C5AB41FF9DEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_7C1521CF41BB9559105674B205065F67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_8EBAC33D4DC6D38018858FB52A78728B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_868EA94C4736A5C0C6C62CB1130D56A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_ModifyBone_3A76559C417D417B5E90BA935BFF5A5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_4627E8644550C8BAF6F55188568DF9AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_BlendListByBool_88599F5849732C48960785B48EE73560();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_4C1329C449299C5601919DB2E6B24F7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_A3DD4E0B45D671F8963AE6BF39565E6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_CAE48E9D4A8A3652FE2E6E80902E4F76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_D1D995DA40486FAB39FAD9A0BD85966D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GenericNPC_AnimationBlueprint_AnimGraphNode_TransitionResult_DCA26F184E72EE2F37CC7B98665C547E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_StartHeal();
	void AnimNotify_AiThrowStone();
	void AnimNotify_Footstep();
	void AnimNotify_StopDaze();
	void AnimNotify_AggroEmotionPlayed();
	void AnimNotify_FlamerStartIdleAttack();
	void AnimNotify_FlamerStopIdleAttack();
	void AnimNotify_BeheadedDisableBomb();
	void AnimNotify_BeheadedEnableBomb();
	void AnimNotify_GNPC_TaranAttackStart();
	void AnimNotify_GNPC_TaranAttackUpdate();
	void AnimNotify_GNPC_TaranAttackStop();
	void AnimNotify_GNPC_MeleeAoeJumpDamage();
	void ExecuteUbergraph_GenericNPC_AnimationBlueprint(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, int32 CallFunc_Round_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_9, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_10, bool CallFunc_LessEqual_FloatFloat_ReturnValue_10, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_11, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_12, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AGenericNPC_Character_C* K2Node_DynamicCast_AsGeneric_NPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_14, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_OnFootStep_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_14, bool CallFunc_LessEqual_FloatFloat_ReturnValue_16, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class ANewLight_Flamethrower_Character_C* K2Node_DynamicCast_AsNew_Light_Flamethrower_Character, bool K2Node_DynamicCast_bSuccess_1, class ANewLight_Flamethrower_Character_C* K2Node_DynamicCast_AsNew_Light_Flamethrower_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class ABandit_Beheaded_Character_C* K2Node_DynamicCast_AsBandit_Beheaded_Character, bool K2Node_DynamicCast_bSuccess_3, class ABandit_Beheaded_Character_C* K2Node_DynamicCast_AsBandit_Beheaded_Character_1, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12);
};

}


