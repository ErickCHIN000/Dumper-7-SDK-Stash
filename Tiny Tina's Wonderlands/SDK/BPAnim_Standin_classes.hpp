#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4381 (0x4E71 - 0xAF0)
// AnimBlueprintGeneratedClass BPAnim_Standin.BPAnim_Standin_C
class UBPAnim_Standin_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_79732E7540E7A41417DF8280DC0D0376; // 0xAF8(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4BD80898430EA85EBFE22EB29C67BA6F; // 0xB40(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B348781C4D4B896C16DF1DA74B16140E; // 0xB88(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E8C7F8344EAAD2FA59809EAFCE8AEEF5; // 0xBD8(0x50)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FD069C85437465D3C2D44FA5448CA6DE; // 0xC28(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_34B8451F40123877F476BDA3A6353AD8; // 0xC70(0xE0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F098367A4D07E5C337C9AA8CAF7FB341; // 0xD50(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_6E26EAFF44A54AFE6FF5039AC76257C9; // 0xDD0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_C14C90B742DCCF222D0CA2B134C2F1A5; // 0xE50(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_0294C7CB44EC788A1C91179570910A69; // 0xED0(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_F0D690C449F8C3AB19ED2EA1629CE0FE; // 0xFB0(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59F73F1643528B656C2F2E966A218F1C; // 0x1090(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4B1A9E9A4F9B2CCF3DDB32BBF57DCC50; // 0x1180(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C516919D49ED8885A6CC65AE9F6E35C1; // 0x1230(0xE0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_01CEE1C0423DEA9A419096B26A18B3D0; // 0x1310(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_880FEBAD45FD980374857EB09D00B7AE; // 0x1390(0xB0)(None)
	struct FGbxAnimNode_HandIK                   GbxAnimGraphNode_HandIK_DF4483AA41CA4D1D7C06A6B4D64FAC4C; // 0x1440(0x370)(None)
	struct FGbxAnimNode_HandIK                   GbxAnimGraphNode_HandIK_C69AF1CC49D8D97D06EB3D8A6BDCC90A; // 0x17B0(0x370)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_6BAC18D140042C8E2916F2B3DAE9574A; // 0x1B20(0xD0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C9306B5D46BD3163C389D097613A6202; // 0x1BF0(0x50)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_269EA82149FEF75D0DA7DE81279DF3AE; // 0x1C40(0x118)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_64C4DA714EEBB77BB8A4428626C1A6FC; // 0x1D58(0x50)(None)
	uint8                                        Pad_14A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_B3091F3445D3860E19538D8C555A447F; // 0x1DB0(0x290)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_0CB76BEA407C8FC5AE86DFB2FDD61F12; // 0x2040(0x290)(None)
	struct FGbxAnimNode_ForwardDynamics          GbxAnimGraphNode_ForwardDynamics_96B01A5E41FE0712F82871A132674290; // 0x22D0(0x730)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_B94CF96444FFCD8B775F3BA6CD54D280; // 0x2A00(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4586BC9F4DC7309CE3EE0497DD7C7AEB; // 0x2A80(0xE0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_E7D47C0041318778EFA821AD09B0504C; // 0x2B60(0x120)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_42D13B854D617935831281BC761BAF86; // 0x2C80(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_548E9F084649888B2A47D18116495AFA; // 0x2CD0(0x120)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_29FA2A914600CB47D3C70FBBA7B9AFE6; // 0x2DF0(0x118)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4E7058C64AE4419BFAD6B2A5DC760C5A; // 0x2F08(0xF0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_0E1BB19C433307FB1607649B4CB16845; // 0x2FF8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_FFA83F3A448925E1B647BFBFA1A98D1E; // 0x30D8(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BFD9FF2A41AC4B21EA678AA7E58489ED; // 0x3128(0xF0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8960226D4B76D1877F15959DBD1A76B2; // 0x3218(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_59A105D240EE4AF1D6CD80AA6F12DC14; // 0x3298(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_83458091494E41BB3695CE9345534F14; // 0x3378(0x50)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_B43E27F0462AFB865877FD918F92B4FF; // 0x33C8(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1CFECEA249E79C277FF197935BC0CF63; // 0x3440(0x50)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_669C852B4656CFE17317EDA59C8EA005; // 0x3490(0x68)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_B0EF2AE54957983A30F300931331112B; // 0x34F8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_127B7BAB4D1454BDDC9DBF88CFA15EC9; // 0x35D8(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B989A3B741C52A3C1397C9B96D51E7DF; // 0x3628(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_38F137224F26FC0678B95CAADA8D7517; // 0x3678(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_255E7FC14DEDA773E64305ACEDECA52B; // 0x36C8(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2AEDD1FF4F5B359ED3420F88E255BC46; // 0x37E8(0xF0)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt_19DC7AB94C0E3E8DCD0C099F017B3F9C; // 0x38D8(0xD0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9B47DC8C4F46B281128D7EB4D42C1363; // 0x39A8(0x50)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2F5B1E0A4646869218A0F382C0AC5975; // 0x39F8(0x118)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_81EC06D14C2B498E117E00BBB5FC436A; // 0x3B10(0x50)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_739E4A044ABDD12956EF7E86D5080827; // 0x3B60(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_54ECCC2946BC7F124E99C1ADF3A4C80E; // 0x3C40(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_0E7A0AE548AA21045EABBE912FFDE36A; // 0x3C90(0x120)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E2A2F6334F327C8BFFC070B8B24398E3; // 0x3DB0(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B3019EC1401529F1DB0AB18A89D92ED5; // 0x3E00(0x120)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_39731EF54BA61123861155AE6BB5639D; // 0x3F20(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_F991D0C94321708665754FA96464BCAD; // 0x4040(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_AB5DA7CE4847480CA0B50184DA3784F8; // 0x4120(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_03F0FF1F45DC27DF212BC7A725875239; // 0x4170(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B7DD508D4ED3949A7995859BC3D4AD2F; // 0x41C0(0x50)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_92C73F4841CED23DF35AA9A5577BFD71; // 0x4210(0xF8)(None)
	struct FGbxAnimNode_ApplyBoneModifyProfile   GbxAnimGraphNode_ApplyBoneModifyProfile_2D62339D4936C5EE133EE0B04A02FBFD; // 0x4308(0x180)(None)
	struct FAnimNode_BlendFaceFXAnimation        AnimGraphNode_BlendFaceFXAnimation_9794931D4285C02EFBADD4B7BE84527A; // 0x4488(0x90)(None)
	int32                                        RandomIdle;                                        // 0x4518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time_X;                                      // 0x451C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreviousHipOffset;                                 // 0x4520(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hip_Lean;                                          // 0x452C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HipOffset;                                         // 0x4530(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        R_IK_Offset;                                       // 0x453C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              R_IK_Rot_Offset;                                   // 0x4540(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        R_IK_Alpha;                                        // 0x454C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        L_IK_Offset;                                       // 0x4550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              L_IK_Rot_Offset;                                   // 0x4554(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        HipAlpha;                                          // 0x4560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        L_IK_Alpha;                                        // 0x4564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HipTarget;                                         // 0x4568(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Weapon_Type;                               // 0x4574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ForeGrip_Type;                                     // 0x4578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Pistol_Stock;                                      // 0x457C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grip_Type;                                         // 0x4580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Weapon_Manufacturer;                       // 0x4584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UManufacturerData*                     Manufacturer;                                      // 0x4588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakWeapon*                            BaseWeapon;                                        // 0x4590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Weapon_Mode;                                       // 0x4598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceData*                           Active_Stance_Data;                                // 0x45A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stance_Type_Debug;                                 // 0x45A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceType*                           ActiveStanceType_0;                                // 0x45B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UpperBody;                                         // 0x45B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Offhand;                                           // 0x45C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WA_UpperBody;                                      // 0x45C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FullBody;                                          // 0x45D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14F5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            R_IK_OffsetMinusCurrent;                           // 0x45E0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            L_IK_OffsetMinusCurrent;                           // 0x4610(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Default_PS__Grip;                                  // 0x4640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        R_Hand_IK_Alpha;                                   // 0x4644(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        L_Hand_IK_Alpha;                                   // 0x4648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Check_IKAlpha;                                     // 0x464C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IK_Override;                                       // 0x464D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1504[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        R_Add_Alpha;                                       // 0x4650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FFYL;                                              // 0x4654(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FFYL_Sprint;                                       // 0x4655(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1506[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Base_InjSprintSpeed;                               // 0x4658(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LandingData;                                       // 0x465C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_Flinch;                                         // 0x4660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActiveCrouchAO;                                    // 0x4668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAEnum_WeaponType                 WeaponType;                                        // 0x4670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_150C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LiveWeaponPoses;                                   // 0x4678(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAStruct_WeaponAnimContainer_Menu     AStruct_WeaponAnimContainer;                       // 0x4688(0x780)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         JAK_AR_Crank;                                      // 0x4E08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Atlas_HW;                                          // 0x4E09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AnimSetList;                                       // 0x4E10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         UsesTurnPhases;                                    // 0x4E20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SprintJump;                                        // 0x4E21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Tediore;                                           // 0x4E22(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Has_L_Grip;                                        // 0x4E23(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Has_R_Grip;                                        // 0x4E24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HW_RifleBase;                                      // 0x4E25(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasWeapon;                                         // 0x4E26(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1514[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AdditiveWeaponPose;                                // 0x4E28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AddWeapPose_RHBase;                                // 0x4E30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightGrip;                                         // 0x4E38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LeftGrip;                                          // 0x4E40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AlternateGrip;                                     // 0x4E48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AltMode;                                           // 0x4E50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VLA_AR;                                            // 0x4E51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        WeaponMode;                                        // 0x4E52(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        SecondaryModePart;                                 // 0x4E53(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LandComplete;                                      // 0x4E54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasSprinting_0;                                    // 0x4E55(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1523[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StandAO;                                           // 0x4E58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HardLanded;                                        // 0x4E60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ValidWeapPose;                                     // 0x4E61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ValidWeapPose_RHBase;                              // 0x4E62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsPistol;                                         // 0x4E63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisableAdditives;                                  // 0x4E64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WeaponDownPose;                                    // 0x4E68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DafBarrelType;                                     // 0x4E70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPAnim_Standin_C* GetDefaultObj();

	void ThreerdPerson_IK_Adjust(struct FTransform& InTransform_A, struct FTransform& InTransform_B, float WeaponScale, class USkeletalMeshComponent* Mesh, bool DebugGrips, struct FTransform* OutTransform_A, struct FTransform* OutTransform_B, struct FTransform* A_Offset, struct FTransform* B_Offset, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FVector& CallFunc_NegateVector_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location5, const struct FRotator& CallFunc_BreakTransform_Rotation5, const struct FVector& CallFunc_BreakTransform_Scale5, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue3);
	void CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, bool CallFunc_IsValid_ReturnValue, class UOakInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, class UManufacturerData* CallFunc_GetManufacturer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue12, bool CallFunc_EqualEqual_ObjectObject_ReturnValue13, bool CallFunc_EqualEqual_ObjectObject_ReturnValue14, bool CallFunc_EqualEqual_ObjectObject_ReturnValue15, bool CallFunc_EqualEqual_ObjectObject_ReturnValue16, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool Temp_bool_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName Temp_name_Variable1, class FName Temp_name_Variable2, uint8 Temp_byte_Variable, bool Temp_bool_Variable1, class FName Temp_name_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable2, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item1, class FName CallFunc_Array_Get_Item2, class FName K2Node_Select_Default, class FName CallFunc_Array_Get_Item3, class FName CallFunc_Array_Get_Item4, class FName K2Node_Select1_Default, class FName K2Node_Select2_Default, class FName CallFunc_Array_Get_Item5, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_EqualEqual_IntInt_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class FName Temp_name_Variable4, int32 Temp_int_Variable, class FName Temp_name_Variable5, class FName K2Node_Select3_Default, int32 CallFunc_Array_Add_ReturnValue, class FName Temp_name_Variable6, bool Temp_bool_Variable3, class FName K2Node_Select4_Default, class FName K2Node_Select5_Default);
	void LogError(class FText LogText, class FText ErrorText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_TwoWayBlend_E7D47C0041318778EFA821AD09B0504C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_B94CF96444FFCD8B775F3BA6CD54D280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_269EA82149FEF75D0DA7DE81279DF3AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_6BAC18D140042C8E2916F2B3DAE9574A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_C69AF1CC49D8D97D06EB3D8A6BDCC90A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_DF4483AA41CA4D1D7C06A6B4D64FAC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_8960226D4B76D1877F15959DBD1A76B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_01CEE1C0423DEA9A419096B26A18B3D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_C14C90B742DCCF222D0CA2B134C2F1A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_6E26EAFF44A54AFE6FF5039AC76257C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_F098367A4D07E5C337C9AA8CAF7FB341();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendFaceFXAnimation_9794931D4285C02EFBADD4B7BE84527A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_B3019EC1401529F1DB0AB18A89D92ED5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_2F5B1E0A4646869218A0F382C0AC5975();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_19DC7AB94C0E3E8DCD0C099F017B3F9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_255E7FC14DEDA773E64305ACEDECA52B();
	void OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyMeshSpaceAdditive_B43E27F0462AFB865877FD918F92B4FF();
	void Update_ActiveAnimSet();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_Standin(int32 EntryPoint, class FName Temp_name_Variable, class FName Temp_name_Variable1, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, class FName Temp_name_Variable6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EAEnum_WeaponType Temp_byte_Variable, class AWeapon* K2Node_Event_NewWeapon, class AWeapon* K2Node_Event_PrevWeapon, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item1, bool CallFunc_GetAnimSeqBaseFromAnimSet_bIsValid, class UAnimSequenceBase* CallFunc_GetAnimSeqBaseFromAnimSet_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue);
};

}


