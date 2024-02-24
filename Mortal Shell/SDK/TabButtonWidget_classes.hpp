#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x280 - 0x230)
// WidgetBlueprintGeneratedClass TabButtonWidget.TabButtonWidget_C
class UTabButtonWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_01;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MouseClickyButton;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TabText;                                           // 0x250(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        TabIndex;                                          // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_DEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTabClicked;                                      // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UTabButtonWidget_C* GetDefaultObj();

	struct FSlateColor Get_ButtonText_ColorAndOpacity_0(enum class ECheckBoxState Temp_byte_Variable, const struct FSlateColor& Temp_struct_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnClicked_Event_0();
	void ExecuteUbergraph_TabButtonWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime);
	void OnTabClicked__DelegateSignature(int32 TabIndex);
};

}


