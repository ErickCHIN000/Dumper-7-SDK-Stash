#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37C (0x7EC - 0x470)
// WidgetBlueprintGeneratedClass UMG_ToggleButtonBase.UMG_ToggleButtonBase_C
class UUMG_ToggleButtonBase_C : public UUMG_ButtonBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsToggled;                                         // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Toggled;                                           // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsRadioToggle;                                     // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         CanUntoggleSelf;                                   // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2EC3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Untoggled;                                         // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           Toggled_Text_Normal;                               // 0x4A8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Toggled_Text_Hovered;                              // 0x4D0(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Toggled_Text_Pressed;                              // 0x4F8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Toggled_Text_Disabled;                             // 0x520(0x28)(Edit, BlueprintVisible)
	class UMaterialInstance*                     Toggled_Image_Normal;                              // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Toggled_Image_Hovered;                             // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Toggled_Image_Pressed;                             // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Toggled_Image_Disabled;                            // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          CachedImageButtonStyle;                            // 0x568(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPanelWidget*                          RadioParent;                                       // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WidthOverride;                                     // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ToggleButtonBase_C* GetDefaultObj();

	void VisuallyToggleButton(bool VisualToggledState, bool Temp_bool_Variable, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_2, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetDisabledTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetDisabledTextColour_Colour, const struct FSlateColor& K2Node_Select_Default);
	void GetPressedTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetPressedTextColour_Colour, const struct FSlateColor& K2Node_Select_Default);
	void GetHoveredTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetHoveredTextColour_Colour, const struct FSlateColor& K2Node_Select_Default);
	void GetNormalTextColour(struct FSlateColor* Colour, bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetNormalTextColour_Colour, const struct FSlateColor& K2Node_Select_Default);
	void UntoggleOthers(class UPanelWidget* InRadioParent, bool StopSearching, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetToggled(bool Toggled, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UPanelWidget* K2Node_Select_Default);
	void Construct();
	void OnClickEvent(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_ToggleButtonBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
};

}


