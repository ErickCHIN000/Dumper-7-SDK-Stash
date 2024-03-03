#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass w_piercings_buttons.w_piercings_buttons_C
class UW_piercings_buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               BodyButton;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BodyImage;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Reset;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CockButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CockImage;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContainerBox;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               FaceButton;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FaceImage;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HeadButton;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeadImage;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LineOverlay;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_piercings_buttons_C* GetDefaultObj();

	void BndEvt__w_piercings_buttons_Button_105_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_BodyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_CockButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_HeadButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_BodyButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_CockButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__w_piercings_buttons_FaceButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Asd(float ParamA, class UImage* ParamB);
	void BndEvt__w_piercings_buttons_Button_Reset_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_w_piercings_buttons(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UWB_ToolTip_piercings_C* CallFunc_Create_ReturnValue, class UWB_ToolTip_piercings_C* CallFunc_Create_ReturnValue_1, class UWB_ToolTip_piercings_C* CallFunc_Create_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, bool CallFunc_Get_MPC_Value_Scalar_1, float CallFunc_Get_MPC_Value_ReturnValue, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_4, bool CallFunc_Get_MPC_Value_Scalar_1_1, float CallFunc_Get_MPC_Value_ReturnValue_1, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1_1, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Get_MPC_Value_Scalar_1_2, float CallFunc_Get_MPC_Value_ReturnValue_2, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, float CallFunc_BreakColor_R_2, float CallFunc_BreakColor_G_2, float CallFunc_BreakColor_B_2, float CallFunc_BreakColor_A_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_6, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_7, bool CallFunc_Get_MPC_Value_Scalar_1_3, float CallFunc_Get_MPC_Value_ReturnValue_3, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_8, float CallFunc_BreakColor_R_3, float CallFunc_BreakColor_G_3, float CallFunc_BreakColor_B_3, float CallFunc_BreakColor_A_3, int32 CallFunc_FTrunc_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_4, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_9, bool CallFunc_Get_MPC_Value_Scalar_1_4, float CallFunc_Get_MPC_Value_ReturnValue_4, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1_4, float CallFunc_BreakColor_R_4, float CallFunc_BreakColor_G_4, float CallFunc_BreakColor_B_4, float CallFunc_BreakColor_A_4, class FText Temp_text_Variable_2, float K2Node_CustomEvent_ParamA, class UImage* K2Node_CustomEvent_ParamB, int32 CallFunc_FTrunc_ReturnValue_4, bool CallFunc_Conv_IntToBool_ReturnValue_4);
};

}


