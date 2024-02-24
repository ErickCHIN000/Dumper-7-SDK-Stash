#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x580 (0x7B0 - 0x230)
// WidgetBlueprintGeneratedClass UI_Dialogue_Answer.UI_Dialogue_Answer_C
class UUI_Dialogue_Answer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_DialogueAnswer;                             // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_DialogueAnswer;                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Answer;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Value;                                        // 0x250(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FButtonStyle                          Inactive;                                          // 0x268(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Active;                                            // 0x4E0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorInactive;                                 // 0x758(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorActive;                                   // 0x780(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ID;                                                // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Dialogue_Answer_C* GetDefaultObj();

	void SetText();
	void SetHighlighted(bool Highlighted, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FButtonStyle& K2Node_Select_Default_1);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Dialogue_Answer(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


