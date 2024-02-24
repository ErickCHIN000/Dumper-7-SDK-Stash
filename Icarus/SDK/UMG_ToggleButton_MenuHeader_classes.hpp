#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C4 (0xAB0 - 0x7EC)
// WidgetBlueprintGeneratedClass UMG_ToggleButton_MenuHeader.UMG_ToggleButton_MenuHeader_C
class UUMG_ToggleButton_MenuHeader_C : public UUMG_ToggleButtonBase_C
{
public:
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x7F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x800(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x818(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSessionFlagsRowHandle                HighlightFlag;                                     // 0xA90(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UUMG_QuestHelper_C*                    QuestHelper;                                       // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ToggleButton_MenuHeader_C* GetDefaultObj();

	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void GetButtonText(class UTextBlock** ButtonText);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ToggleButton_MenuHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


