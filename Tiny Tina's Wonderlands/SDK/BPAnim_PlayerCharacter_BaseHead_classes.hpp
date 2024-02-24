#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D9C (0x22D4 - 0x538)
// AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C
class UBPAnim_PlayerCharacter_BaseHead_C : public UGbxAnimInstance
{
public:
	uint8                                        Pad_1D4F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6BC9F3C040F12B2F8EA35F9AE0D95E2B; // 0x548(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_0DFF4BD544810D93F2B95889C2800467; // 0x668(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6A13AC12430185E9ABC63A957F544D3D; // 0x748(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_78C104E34C687864DCF8B88993564FAB; // 0x798(0xF0)(None)
	uint8                                        Pad_1D55[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_79EBD5D942399AAD80FB6C8E2B42EE94; // 0x890(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2119AD104F2908356819E7B77B0EB9BF; // 0x940(0x198)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_EB978FA943BBB8CC8202A2AEF4271FA2; // 0xAD8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_B818E54349ECC15A14A933A1230572C0; // 0xB20(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_566F0AD647F2C2F8BDDF02B890C29422; // 0xCB8(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_475D7A9E4DC6853CA20F5B960B9C23D7; // 0xE50(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_897AABB44F0D1FF7AA06B5AEAFD40F76; // 0xFE8(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_40F0267C4E8EB5CC41E6959D2B086FFF; // 0x1180(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5A0F2BED48A2E48A0AE3428C2B51059C; // 0x1318(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5343EF1D4E64647B5282A2AD36BC9053; // 0x14B0(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5F35E34640D0A7E195AED4B354C177EC; // 0x1648(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E55BFB4A47DC671BC4A3D7B40959752D; // 0x17E0(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_08EE690148E7A9EC7BD22BB6A05EDEE4; // 0x1978(0x198)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D8DE0B30465179D8D111F9923CE3E62E; // 0x1B10(0x48)(None)
	struct FGbxAnimNode_CopyParentTransforms     GbxAnimGraphNode_CopyParentTransforms_38D4052440DFC51A4DAE388E1A9E8834; // 0x1B58(0x40)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2247D28045061B601ADCA3B21C3610F3; // 0x1B98(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C125515A4565FD75DA4AC48A1F7C18E3; // 0x1BE0(0xB0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_0060F38644793A98CB769D9C8961F693; // 0x1C90(0x50)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1C204817489F6A6E367C6A9F62950FE0; // 0x1CE0(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_79BA5CC64542ECD3A8BAE9A1448258E9; // 0x1E78(0x198)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_241967EE4AF6CE33F006EE921D678C50; // 0x2010(0x198)(None)
	struct FVector                               Face_LeftEar_Translation;                          // 0x21A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_LeftEar_Rotation;                             // 0x21B4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_LeftEar_Scale;                                // 0x21C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_RightEar_Translation;                         // 0x21CC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_RightEar_Rotation;                            // 0x21D8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_RightEar_Scale;                               // 0x21E4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_LeftEye_Translation;                          // 0x21F0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_LeftEye_Rotation;                             // 0x21FC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_LeftEye_Scale;                                // 0x2208(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_RightEye_Translation;                         // 0x2214(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_RightEye_Rotation;                            // 0x2220(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_RightEye_Scale;                               // 0x222C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_Nose_Translation;                             // 0x2238(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_Nose_Rotation;                                // 0x2244(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_Nose_Scale;                                   // 0x2250(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_NoseEnd_Translation;                          // 0x225C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Face_NoseEnd_Rotation;                             // 0x2268(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Face_NoseEnd_Scale;                                // 0x2274(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_Mouth_Translation;                            // 0x2280(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_LipsUpper_Scale;                              // 0x228C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_LipsLower_Scale;                              // 0x2298(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Face_Jaw_Translation;                              // 0x22A4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HeadAndNeck_Scale;                                 // 0x22B0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HeadAndNeck_Rotation;                              // 0x22BC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               HeadAndNeck_Translation;                           // 0x22C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPAnim_PlayerCharacter_BaseHead_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_79BA5CC64542ECD3A8BAE9A1448258E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_241967EE4AF6CE33F006EE921D678C50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_E55BFB4A47DC671BC4A3D7B40959752D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_1C204817489F6A6E367C6A9F62950FE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_5F35E34640D0A7E195AED4B354C177EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_5343EF1D4E64647B5282A2AD36BC9053();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_5A0F2BED48A2E48A0AE3428C2B51059C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_40F0267C4E8EB5CC41E6959D2B086FFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_897AABB44F0D1FF7AA06B5AEAFD40F76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_475D7A9E4DC6853CA20F5B960B9C23D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_566F0AD647F2C2F8BDDF02B890C29422();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_B818E54349ECC15A14A933A1230572C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_08EE690148E7A9EC7BD22BB6A05EDEE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_AnimGraphNode_ModifyBone_2119AD104F2908356819E7B77B0EB9BF();
	void ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead(int32 EntryPoint);
};

}


