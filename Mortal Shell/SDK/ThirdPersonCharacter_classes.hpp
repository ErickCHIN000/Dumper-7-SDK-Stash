#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x4E1 - 0x4B8)
// BlueprintGeneratedClass ThirdPersonCharacter.ThirdPersonCharacter_C
class AThirdPersonCharacter_C : public ACharacter
{
public:
	uint8                                        Pad_F12[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      FollowCamera;                                      // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   CameraBoom;                                        // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BaseTurnRate;                                      // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseLookUpRate;                                    // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMeleeAtk_;                                       // 0x4E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AThirdPersonCharacter_C* GetDefaultObj();

	void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_AtkPrimary_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53(float AxisValue);
	void ServerMeleeAtk(bool BoolVal);
	void ReceiveBeginPlay();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_47(float AxisValue);
	void ExecuteUbergraph_ThirdPersonCharacter(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float K2Node_InputAxisEvent_AxisValue_5, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float K2Node_InputAxisEvent_AxisValue_4, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool K2Node_CustomEvent_BoolVal, float K2Node_InputAxisEvent_AxisValue);
};

}


