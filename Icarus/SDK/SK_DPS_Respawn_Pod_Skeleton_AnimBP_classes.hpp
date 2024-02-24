#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D8 (0x690 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
class USK_DPS_Respawn_Pod_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6801[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x2F8(0x368)(None)
	float                                        __CustomProperty_DoorOpenPosition_4E7C5A6944FCDF17C664BBB7240CF69E; // 0x660(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               External_Force;                                    // 0x664(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorOpenValue;                                     // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Landed;                                            // 0x674(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsOpen;                                            // 0x675(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_680E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DoorPitchCached;                                   // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6811[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   SFXDoorEvent;                                      // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DoorAudioAttachPoint;                              // 0x688(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_DPS_Respawn_Pod_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnDoorOpenComplete();
	void ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Part_MID_RespawnPod_C* K2Node_DynamicCast_AsBP_Part_MID_Respawn_Pod, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_3, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_4, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4);
};

}


