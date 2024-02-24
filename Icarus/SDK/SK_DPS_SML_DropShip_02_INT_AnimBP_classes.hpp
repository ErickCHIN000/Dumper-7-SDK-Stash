#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x438 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_INT_AnimBP.SK_DPS_SML_DropShip_02_INT_AnimBP_C
class USK_DPS_SML_DropShip_02_INT_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_39C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2F8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x398(0x80)(None)
	bool                                         Shake;                                             // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   SFX_MediumShake;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   SFX_RattleSmall;                                   // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   SFX_RattleC;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_DPS_SML_DropShip_02_INT_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_INT_AnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Part_MID_MK1_C* K2Node_DynamicCast_AsBP_Part_MID_MK1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

}


