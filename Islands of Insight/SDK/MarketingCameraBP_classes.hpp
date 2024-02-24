#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E8 - 0x2D8)
// BlueprintGeneratedClass MarketingCameraBP.MarketingCameraBP_C
class AMarketingCameraBP_C : public AMarketingCameraActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CameraValues_C*                   Widget;                                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMarketingCameraBP_C* GetDefaultObj();

	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MarketingCameraBP(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_13, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_12, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_2, class UWBP_CameraValues_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_14, float K2Node_InputAxisKeyEvent_AxisValue_3, float K2Node_InputAxisKeyEvent_AxisValue_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputKeyEvent_Key_15, const struct FKey& K2Node_InputKeyEvent_Key_16, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputKeyEvent_Key_17, const struct FKey& K2Node_InputKeyEvent_Key_18, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputKeyEvent_Key_19, const struct FKey& K2Node_InputKeyEvent_Key_20, float K2Node_Event_DeltaSeconds, float CallFunc_GetDOF_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_21, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


