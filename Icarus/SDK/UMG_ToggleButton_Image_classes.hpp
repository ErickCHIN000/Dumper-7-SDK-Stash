#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A4 (0xA90 - 0x7EC)
// WidgetBlueprintGeneratedClass UMG_ToggleButton_Image.UMG_ToggleButton_Image_C
class UUMG_ToggleButton_Image_C : public UUMG_ToggleButtonBase_C
{
public:
	uint8                                        Pad_5471[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ImageButton;                                       // 0x7F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon;                                         // 0x800(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          NormalStyle;                                       // 0x810(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            ButtonIcon;                                        // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ToggleButton_Image_C* GetDefaultObj();

	void FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis);
	void GetImageButton(class UButton** ImageButton);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ToggleButton_Image(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


