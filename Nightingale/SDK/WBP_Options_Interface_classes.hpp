#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x558 - 0x510)
// WidgetBlueprintGeneratedClass WBP_Options_Interface.WBP_Options_Interface_C
class UWBP_Options_Interface_C : public UNWXOptionTabWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_0;                                       // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Options_Dropdown_C*               WBP_Options_Dropdown;                              // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionBool_C*                     WBP_ShowSubtitles_Checkbox;                        // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bLanaguageDisplayLocalised;                        // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        LocalizedCultures;                                 // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWidget*>                       NavigationWidgets;                                 // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_Options_Interface_C* GetDefaultObj();

	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* FocusedWidget, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsEnabled_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void SetupNavigationWidgets(TArray<class UWidget*>& K2Node_MakeArray_Array);
	void OnSubtitlesToggled(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsFeatureFlagEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void OnLanguageChanged(int32 New_Value, const class FString& SelectedOption, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetSuitableCulture_ReturnValue, const class FString& CallFunc_GetCultureDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void InitializeWidgets(const TArray<class FText>& Languages, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_GetShowSubtitles_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetSuitableCulture_ReturnValue, const class FString& CallFunc_GetCultureDisplayName_ReturnValue, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetCurrentLanguage_ReturnValue, const class FString& CallFunc_GetCultureDisplayName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_Options_Interface(int32 EntryPoint, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


