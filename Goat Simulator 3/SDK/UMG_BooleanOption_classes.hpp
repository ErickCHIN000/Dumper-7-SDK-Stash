#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x414 - 0x370)
// WidgetBlueprintGeneratedClass UMG_BooleanOption.UMG_BooleanOption_C
class UUMG_BooleanOption_C : public UGGGameSettingOptionUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             BooleanOptionScaleBox;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ControllerFocus;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OffBorder;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               OffButton;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OffIndicator;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OffLabel;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OnBorder;                                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               OnButton;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OnIndicator;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OnLabel;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          OnColor;                                           // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OffColor;                                          // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            OnImage;                                           // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            OffImage;                                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoverColor;                                        // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Enabled;                                        // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BooleanOptionsScaleTabletMultiplier;               // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BooleanOptionsScaleMultiplier;                     // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_BooleanOption_C* GetDefaultObj();

	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Get_Off_Text(class FText* Text, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Get_On_Text(class FText* Text, TArray<struct FGGSettingOption>& CallFunc_GetAvailableOptions_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ToggleOption(bool CallFunc_GetSettingValueAsBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* GetInitialWidgetFocus();
	void UpdateState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetSettingValueAsBool_ReturnValue, class FText CallFunc_Get_Off_Text_Text, class FText CallFunc_Get_On_Text_Text, bool Temp_bool_Variable_2, class UTexture2D* K2Node_Select_Default, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTexture2D* K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void EnableOption(bool Enabled, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void BndEvt__OnButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__OffButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void UpdateUI();
	void OnOptionNavigationInputLeft();
	void OnOptionNavigationInputRight();
	void BndEvt__ControllerFocus_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_BooleanOption_OnButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_BooleanOption_OffButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void RefreshOption();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_BooleanOption(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetSettingValueAsBool_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided);
};

}


