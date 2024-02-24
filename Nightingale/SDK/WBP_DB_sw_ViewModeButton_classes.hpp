#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x408 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_sw_ViewModeButton.WBP_DB_sw_ViewModeButton_C
class UWBP_DB_sw_ViewModeButton_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Mode;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon_1;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedPip;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_92;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Soft_Texture;                                      // 0x370(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ButtonClick;                                       // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  FunctionName;                                      // 0x3A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                Command;                                           // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsParentGroup;                                     // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Hovered;                                           // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsToggle;                                          // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggledOn;                                         // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DB_ViewModes                    ViewModeType;                                      // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowIcon;                                          // 0x3EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Tooltip_Text;                                      // 0x3F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_DB_sw_ViewModeButton_C* GetDefaultObj();

	class UWidget* Get_Button_Mode_ToolTipWidget(bool Temp_bool_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void Refresh(bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const class FString& CallFunc_GetCurrentViewModeName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, const class FString& CallFunc_GetCurrentViewModeName_ReturnValue_1, const class FString& CallFunc_GetCurrentViewModeName_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_2);
	void RefreshSelected(bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float K2Node_Select_Default, float K2Node_Select_Default_1);
	void BndEvt__WBP_DB_sw_ViewModeButton_Button_Mode_BaseColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_sw_ViewModeButton_Button_Mode_BaseColor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_DB_sw_ViewModeButton_Button_Mode_BaseColor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_DB_sw_ViewModeButton(int32 EntryPoint, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess);
	void Hovered__DelegateSignature(bool Hovered);
	void ButtonClick__DelegateSignature();
};

}


