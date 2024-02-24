#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xD0 - 0xB8)
// BlueprintGeneratedClass VehicleDrivingComponent.VehicleDrivingComponent_C
class UVehicleDrivingComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerCharacter_C*                 PlayerRef;                                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_VehicleMaster_C*                   Vehicle;                                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVehicleDrivingComponent_C* GetDefaultObj();

	void GetName(class FString* Name, bool CallFunc_IsValid_ReturnValue);
	void InpActEvt_VehicleHandbrake_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_VehicleHandbrake_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Flashlight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_FlipVehicle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_VehicleHorn_K2Node_InputActionEvent_0(const struct FKey& Key);
	void LoadComponent();
	void InpAxisEvt_Forward_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_Left_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_Backwards_K2Node_InputAxisEvent_10(float AxisValue);
	void InpAxisEvt_Right_K2Node_InputAxisEvent_11(float AxisValue);
	void ExecuteUbergraph_VehicleDrivingComponent(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, const struct FKey& K2Node_InputActionEvent_Key_2, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float K2Node_InputAxisEvent_AxisValue_1, bool CallFunc_IsValid_ReturnValue_16, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, float K2Node_InputAxisEvent_AxisValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetBrakeInput_Brake_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetSteeringInput_Steering_ImplicitCast);
};

}


