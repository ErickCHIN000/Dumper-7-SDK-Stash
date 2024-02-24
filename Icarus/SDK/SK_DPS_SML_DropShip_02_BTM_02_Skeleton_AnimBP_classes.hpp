#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x509 (0x7C1 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
class USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_67DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x320(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x348(0x30)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x378(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3A8(0xB0)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x458(0x368)(None)
	bool                                         IsDeployed;                                        // 0x7C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_PlaySound();
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerControllerSurvival* CallFunc_GetAssignedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFMODEvent* Temp_object_Variable_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class ABP_Part_BTM_MK1_C* K2Node_DynamicCast_AsBP_Part_BTM_MK1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UFMODEvent* K2Node_Select_Default, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


