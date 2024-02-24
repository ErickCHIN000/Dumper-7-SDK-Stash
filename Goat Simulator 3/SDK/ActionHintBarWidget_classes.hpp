#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x3D4 - 0x398)
// WidgetBlueprintGeneratedClass ActionHintBarWidget.ActionHintBarWidget_C
class UActionHintBarWidget_C : public UGGActionHintBarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background_Center;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_Left;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_Right;                                  // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SplitscreenScaleBox;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SplitscreenActive;                                 // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F69[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               MobileOffset;                                      // 0x3C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UActionHintBarWidget_C* GetDefaultObj();

	void CreateHintEntry(const struct FActionHintStruct& ActionHint, class UMenuNavigationFaceButton_C** OutButton, bool* Interactable, enum class EActionHintPosition HintSlot, class UPanelWidget* TargetHBox, enum class EActionHintPosition Temp_byte_Variable, class UMenuNavigationFaceButton_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class EActionHintPosition Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UActionHintEntry_C* CallFunc_Create_ReturnValue_1, enum class EActionHintPosition K2Node_Select_Default, enum class EActionHintPosition K2Node_Select_Default_1, class UPanelWidget* K2Node_Select_Default_2);
	void DetermineSplitscreen(class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsInMainMenu_ReturnValue, bool CallFunc_IsSplitScreenActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetPlayerScreenDPIScale_OutAspectRatio, float CallFunc_GetPlayerScreenDPIScale_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin);
	void OnButtonClicked(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void RebuildHints();
	void ShowBackground(bool ShowLeft, bool ShowRight, bool ShowCenter);
	void Construct();
	void OnActionHintEntryCreated(class UGGActionHintBarEntry* EntryWidget);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ActionHintBarWidget(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UMenuNavigationFaceButton_C* K2Node_DynamicCast_AsMenu_Navigation_Face_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_ShowLeft, bool K2Node_CustomEvent_ShowRight, bool K2Node_CustomEvent_ShowCenter, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, class UGGActionHintBarEntry* K2Node_Event_EntryWidget, bool CallFunc_BooleanAND_ReturnValue_2, class UActionHintEntry_C* K2Node_DynamicCast_AsAction_Hint_Entry, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


