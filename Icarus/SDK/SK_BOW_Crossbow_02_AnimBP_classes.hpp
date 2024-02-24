#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x620 (0x8D8 - 0x2B8)
// AnimBlueprintGeneratedClass SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C
class USK_BOW_Crossbow_02_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5069[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2F8(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x378(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x3C0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3E8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x488(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x508(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x660(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x688(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x7E0(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x880(0x28)(None)
	class UBP_ActionableBehaviour_Firearm_C*     FirearmBehaviour;                                  // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsADS;                                             // 0x8B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Reloading;                                         // 0x8B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Loaded;                                            // 0x8B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionableBehaviour_Firearm_Base_C* NewFirearmBehaviourBase;                           // 0x8B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire_Controller;                                   // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo_Controller;                                   // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim_Controller;                                    // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_BOW_Crossbow_02_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP(int32 EntryPoint, bool CallFunc_IsAiming_IsAiming, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Firearm_Base_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_IsADS_ADS, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_ActionableBehaviour_Firearm_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_IsReloading_Reloading, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController);
};

}


