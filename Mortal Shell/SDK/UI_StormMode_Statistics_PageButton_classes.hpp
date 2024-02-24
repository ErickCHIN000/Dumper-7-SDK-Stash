#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x269 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Statistics_PageButton.UI_StormMode_Statistics_PageButton_C
class UUI_StormMode_Statistics_PageButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Page;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectionLine;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Button_Page;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Value;                                        // 0x250(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Selected;                                          // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_StormMode_Statistics_PageButton_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void HighlightButton(bool Highlight_);
	void SetParentRef(class UWidget* Parent);
	void UpdateSettingValues(TArray<class FText>& Values);
	void Value_Next();
	void Value_Previous();
	void Value_Reset();
	void UpdateSettingName(class FText Text);
	void ForceSelectButton(bool Select);
	void EnableOrDisableButton(bool Enable);
	void ActivateButton();
	void DeactivateButton();
	void NavVertical(int32 Delta);
	void NavHorizontal(int32 Delta);
	void OverrideCurrentValue(int32 Index);
	void UpdateIndexes(TArray<int32>& Indexes);
	void PreConstruct(bool IsDesignTime);
	void SelectButton(bool Select_);
	void ExecuteUbergraph_UI_StormMode_Statistics_PageButton(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_3, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, bool K2Node_Event_Select_, float K2Node_Select_Default_1);
};

}


