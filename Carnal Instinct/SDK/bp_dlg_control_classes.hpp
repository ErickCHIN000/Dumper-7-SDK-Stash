#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass bp_dlg_control.bp_dlg_control_C
class Abp_dlg_control_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_dlg_control_C* GetDefaultObj();

	void Sort_dlg_actors(TArray<class Abp_dlg_actor_C*>* Sorted_actors_reversed, int32 Local_min_index, const TArray<class Abp_dlg_actor_C*>& Local_sorted_actors, const TArray<class Abp_dlg_actor_C*>& Local_actors_list, const TArray<float>& Local_actors_distance, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class Abp_dlg_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Dlg_axis(class FName Input_id, float Axis_x, float Axis_y, class FName Local_input, const TArray<class FName>& Local_block, const TArray<class FName>& Local_ignore);
	void Dlg_action(const struct FKey& Input_key, class FName Input_id, const TArray<class Abp_dlg_actor_C*>& Local_unblocked_list, const TArray<class Abp_dlg_actor_C*>& Local_sorted_list, const TArray<class FName>& Local_block, const TArray<class FName>& Local_ignore, class FName Local_input, bool Local_pressed, const struct FKey& Local_key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_NotEqual_IntInt_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_2, class Abp_dlg_actor_C* CallFunc_Array_Get_Item_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, TArray<class Abp_dlg_actor_C*>& CallFunc_sort_dlg_actors_sorted_actors_reversed, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsInputKeyDown_ReturnValue);
	void InpActEvt_q_special_l_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_q_special_l_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_q_special_r_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_q_special_r_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_q_thumb_l_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_q_thumb_l_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_q_thumb_r_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_q_thumb_r_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_q_shoulder_l_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_q_shoulder_l_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_q_shoulder_r_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_q_shoulder_r_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_q_trigger_l_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_q_trigger_l_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_q_trigger_r_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_q_trigger_r_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_q_dpad_u_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_q_dpad_u_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_q_dpad_d_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_q_dpad_d_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_q_dpad_l_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_q_dpad_l_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_q_dpad_r_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_q_dpad_r_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_q_face_u_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_q_face_u_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_q_face_d_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_q_face_d_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_q_face_l_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_q_face_l_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_q_face_r_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_q_face_r_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_Five_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Five_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Six_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Six_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Seven_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Seven_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisEvt_q_move_x_K2Node_InputAxisEvent_54(float AxisValue);
	void InpAxisEvt_q_move_y_K2Node_InputAxisEvent_61(float AxisValue);
	void InpAxisEvt_q_turn_x_K2Node_InputAxisEvent_74(float AxisValue);
	void InpAxisEvt_q_turn_y_K2Node_InputAxisEvent_87(float AxisValue);
	void InpAxisEvt_q_trigger_axis_l_K2Node_InputAxisEvent_100(float AxisValue);
	void InpAxisEvt_q_trigger_axis_r_K2Node_InputAxisEvent_113(float AxisValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_dlg_control(int32 EntryPoint, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_17, const struct FKey& K2Node_InputActionEvent_Key_16, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_13, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_6, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& Temp_struct_Variable_7, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& Temp_struct_Variable_8, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable_9, const struct FKey& K2Node_InputKeyEvent_Key_27, const struct FKey& K2Node_InputKeyEvent_Key_26, const struct FKey& Temp_struct_Variable_10, const struct FKey& K2Node_InputKeyEvent_Key_25, const struct FKey& K2Node_InputKeyEvent_Key_24, const struct FKey& Temp_struct_Variable_11, const struct FKey& K2Node_InputKeyEvent_Key_23, const struct FKey& K2Node_InputKeyEvent_Key_22, const struct FKey& Temp_struct_Variable_12, const struct FKey& K2Node_InputKeyEvent_Key_21, const struct FKey& K2Node_InputKeyEvent_Key_20, const struct FKey& Temp_struct_Variable_13, const struct FKey& K2Node_InputKeyEvent_Key_19, const struct FKey& K2Node_InputKeyEvent_Key_18, const struct FKey& Temp_struct_Variable_14, const struct FKey& K2Node_InputKeyEvent_Key_17, const struct FKey& K2Node_InputKeyEvent_Key_16, const struct FKey& Temp_struct_Variable_15, const struct FKey& K2Node_InputKeyEvent_Key_15, const struct FKey& K2Node_InputKeyEvent_Key_14, const struct FKey& Temp_struct_Variable_16, const struct FKey& K2Node_InputKeyEvent_Key_13, const struct FKey& K2Node_InputKeyEvent_Key_12, const struct FKey& Temp_struct_Variable_17, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& Temp_struct_Variable_18, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& Temp_struct_Variable_19, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& Temp_struct_Variable_20, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& Temp_struct_Variable_21, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& Temp_struct_Variable_22, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_23, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_9, class FName CallFunc_MakeLiteralName_ReturnValue_10, class FName CallFunc_MakeLiteralName_ReturnValue_11, class FName CallFunc_MakeLiteralName_ReturnValue_12, class FName CallFunc_MakeLiteralName_ReturnValue_13, class FName CallFunc_MakeLiteralName_ReturnValue_14, class FName CallFunc_MakeLiteralName_ReturnValue_15, class FName CallFunc_MakeLiteralName_ReturnValue_16, const struct FKey& Temp_struct_Variable_24, const struct FKey& K2Node_InputActionEvent_Key_20, const struct FKey& K2Node_InputActionEvent_Key_21, const struct FKey& Temp_struct_Variable_25, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FKey& Temp_struct_Variable_26, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FKey& K2Node_InputActionEvent_Key_25, const struct FKey& Temp_struct_Variable_27, float K2Node_InputAxisEvent_AxisValue_5, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputActionEvent_Key_18, class FName CallFunc_MakeLiteralName_ReturnValue_17, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_26, const struct FKey& K2Node_InputActionEvent_Key_27, class FName CallFunc_MakeLiteralName_ReturnValue_18, class FName CallFunc_MakeLiteralName_ReturnValue_19, class FName CallFunc_MakeLiteralName_ReturnValue_20, class FName CallFunc_MakeLiteralName_ReturnValue_21, const struct FKey& Temp_struct_Variable_28, const struct FKey& K2Node_InputActionEvent_Key_28, const struct FKey& K2Node_InputActionEvent_Key_29, const struct FKey& Temp_struct_Variable_29, const struct FKey& K2Node_InputActionEvent_Key_30, const struct FKey& K2Node_InputActionEvent_Key_31, class FName CallFunc_MakeLiteralName_ReturnValue_22, class FName CallFunc_MakeLiteralName_ReturnValue_23, class FName CallFunc_MakeLiteralName_ReturnValue_24, class FName CallFunc_MakeLiteralName_ReturnValue_25, class FName CallFunc_MakeLiteralName_ReturnValue_26, class FName CallFunc_MakeLiteralName_ReturnValue_27, class FName CallFunc_MakeLiteralName_ReturnValue_28, class FName CallFunc_MakeLiteralName_ReturnValue_29, class FName CallFunc_MakeLiteralName_ReturnValue_30, class FName CallFunc_MakeLiteralName_ReturnValue_31, class FName CallFunc_MakeLiteralName_ReturnValue_32, const struct FKey& K2Node_InputActionEvent_Key_19);
};

}


