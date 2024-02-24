#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x304 (0xAF0 - 0x7EC)
// WidgetBlueprintGeneratedClass UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C
class UUMG_ToggleButton_IconSwap_C : public UUMG_ToggleButtonBase_C
{
public:
	uint8                                        Pad_427B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ToggleAnimation;                                   // 0x7F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x800(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ToggleConfirm;                               // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ButtonText;                                // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ButtonText;                              // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x830(0x278)(Edit, BlueprintVisible)
	class UTexture2D*                            ButtonIcon;                                        // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ToggledButtonIcon;                                 // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowText;                                          // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_42B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ToggleText;                                        // 0xAC0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  NonToggleText;                                     // 0xAD8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ToggleButton_IconSwap_C* GetDefaultObj();

	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void VisuallyToggleButton(bool VisualToggledState);
	void OnClickEvent(class UUMG_ButtonBase_C* Button);
	void UpdateToggleText();
	void ExecuteUbergraph_UMG_ToggleButton_IconSwap(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Event_IsDesignTime, bool K2Node_Event_VisualToggledState, class UTexture2D* K2Node_Select_Default, class UUMG_ButtonBase_C* K2Node_Event_Button, enum class ESlateVisibility K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
};

}


