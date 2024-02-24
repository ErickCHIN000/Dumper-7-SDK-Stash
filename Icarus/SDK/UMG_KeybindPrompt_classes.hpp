#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2F8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_KeybindPrompt.UMG_KeybindPrompt_C
class UUMG_KeybindPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            LHS;                                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RHS;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          ShadowRetainer;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextPrompt;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Keybind_C*                        UMG_Keybind;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Hold;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeybindingsRowHandle                 Keybinding;                                        // 0x29C(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TextOnRight;                                       // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3892[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideText;                                      // 0x2B8(0x18)(Edit, BlueprintVisible)
	struct FSlateColor                           TextColour;                                        // 0x2D0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_KeybindPrompt_C* GetDefaultObj();

	void SwapText(class UWidget* RHSWidget, class UWidget* LHSWidget, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue, class UWidget* CallFunc_GetContent_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void KeyChanged(bool IsSet);
	void ExecuteUbergraph_UMG_KeybindPrompt(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsSet, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default_1);
};

}


