#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x290 - 0x230)
// WidgetBlueprintGeneratedClass UI_TwitchDropEntry.UI_TwitchDropEntry_C
class UUI_TwitchDropEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            SlotLabel;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UnlockName;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDHTwitchDrop                         Drop;                                              // 0x248(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Highlighted;                                       // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_AFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Slot_Text;                                         // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_TwitchDropEntry_C* GetDefaultObj();

	bool IsSkin_(bool K2Node_SwitchString_CmpSuccess);
	enum class ESlateVisibility SlotLabelVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_TwitchDropEntry(int32 EntryPoint, enum class ESlateVisibility CallFunc_SlotLabelVisibility_ReturnValue, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool K2Node_Event_IsDesignTime, class FText CallFunc_TwitchDrop_DisplayName_Name, enum class ESlateVisibility CallFunc_SlotLabelVisibility_ReturnValue_1, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


