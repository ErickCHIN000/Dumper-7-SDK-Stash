#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x2E1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C
class UUMG_PhysicalKeyPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            LHS;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RHS;                                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          ShadowRetainer;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextPrompt;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhysicalKey_C*                    UMG_PhysicalKey;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Hold;                                              // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3C46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Physical_Key;                                      // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  PromptTextString;                                  // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FKey                                  Physical_Gamepad_Key;                              // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TextOnRight;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_PhysicalKeyPrompt_C* GetDefaultObj();

	void SwapText(class UWidget* RHSWidget, class UWidget* LHSWidget, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue, class UWidget* CallFunc_GetContent_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void KeyChanged(bool IsSet);
	void ExecuteUbergraph_UMG_PhysicalKeyPrompt(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_Set_Key_IsSet, bool K2Node_CustomEvent_IsSet, enum class ESlateVisibility K2Node_Select_Default);
};

}


