#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x2A8 - 0x285)
// WidgetBlueprintGeneratedClass BaseCharacterUIWidget.BaseCharacterUIWidget_C
class UBaseCharacterUIWidget_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1B1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                Namespace;                                         // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class USHUserWidget*                         LastFocusedWidget;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBaseCharacterUIWidget_C* GetDefaultObj();

	void FocusLastWidget(bool CallFunc_IsValid_ReturnValue);
	void UpdateTooltips(bool Temp_bool_Variable, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, const struct FTooltipButtonInfo& K2Node_Select_Default, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array);
	void OnTooltipButtonClicked(enum class ETooltipButtonType Type);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Show();
	void ExecuteUbergraph_BaseCharacterUIWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


