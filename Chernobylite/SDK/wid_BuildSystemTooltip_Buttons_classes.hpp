#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x271 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystemTooltip_Buttons.wid_BuildSystemTooltip_Buttons_C
class UWid_BuildSystemTooltip_Buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Buttons_Entry_C*        Edit;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LastInputWasFromGamepad;                           // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_BuildSystemTooltip_Buttons_C* GetDefaultObj();

	void SetEditMode_Visibility(enum class ESlateVisibility InVisibility);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_BuildSystemTooltip_Buttons(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, class FText K2Node_Select_Default);
};

}


