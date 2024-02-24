#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x338 - 0x248)
// WidgetBlueprintGeneratedClass ItemSelectionButton.ItemSelectionButton_C
class UItemSelectionButton_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ButtonBG;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonImage;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HotkeyText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MouseBox;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MouseImage;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           X;                                                 // 0x288(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETooltipButtonType                ButtonType;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_160E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonText;                                        // 0x318(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  ActionName;                                        // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemSelectionButton_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_1(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_ButtonImage_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetHotkeyText(enum class ESlateVisibility CallFunc_Get_ButtonImage_Visibility_0_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_1_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_GetKeyUIName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue);
	enum class ESlateVisibility GetVisibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetImage();
	void OnSynchronizeProperties();
	void Update();
	void ExecuteUbergraph_ItemSelectionButton(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue);
};

}


