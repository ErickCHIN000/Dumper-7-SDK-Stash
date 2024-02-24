#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F8 (0x540 - 0x248)
// WidgetBlueprintGeneratedClass TooltipButton.TooltipButton_C
class UTooltipButton_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonImage;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HotkeyText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           B;                                                 // 0x278(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           A;                                                 // 0x300(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           X;                                                 // 0x388(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           Y;                                                 // 0x410(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETooltipButtonType                ButtonType;                                        // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonText;                                        // 0x4A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           NullBrush;                                         // 0x4B8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTooltipButton_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_1(enum class ETooltipButtonType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_ButtonImage_Visibility_0(enum class ESlateBrushDrawType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default);
	void SetHotkeyText(enum class ETooltipButtonType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_Select_Default);
	enum class ESlateVisibility GetVisibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetImage(enum class ETooltipButtonType Temp_byte_Variable, const struct FSlateBrush& K2Node_Select_Default);
	void OnSynchronizeProperties();
	void Update();
	void ExecuteUbergraph_TooltipButton(int32 EntryPoint);
};

}


