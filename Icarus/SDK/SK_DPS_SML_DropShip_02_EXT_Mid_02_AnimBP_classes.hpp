#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3CC (0x684 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C
class USK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6766[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x2F8(0x368)(None)
	float                                        __CustomProperty_DoorSpeed_7967AE9249945CF5A2907BA25311E72E; // 0x660(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_DoorOpen__7967AE9249945CF5A2907BA25311E72E; // 0x664(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0x665(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_676A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Door_Speed;                                        // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DoorAudioAttachPoint;                              // 0x66C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_676D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   SFXDoorEvent;                                      // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorPitchCached;                                   // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void StartDoorAudioUpdateTimer();
	void UpdateDoorAudio();
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP(int32 EntryPoint, class UFMODEvent* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFMODEvent* Temp_object_Variable_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class ABP_Part_MID_MK1_C* K2Node_DynamicCast_AsBP_Part_MID_MK1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_1, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, class UFMODEvent* K2Node_Select_Default, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


