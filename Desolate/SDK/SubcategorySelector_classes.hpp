#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2B0 - 0x248)
// WidgetBlueprintGeneratedClass SubcategorySelector.SubcategorySelector_C
class USubcategorySelector_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Caption;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ControlBox;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         ControlGroup;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GamePadIcon;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CaptionText;                                       // 0x270(0x18)(Edit, BlueprintVisible)
	TArray<class FText>                          ControlCaptions;                                   // 0x288(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USHUserWidget*>                 SavedChilds;                                       // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FTimerHandle                          SelectorAnimationTimer;                            // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USubcategorySelector_C* GetDefaultObj();

	enum class ESlateVisibility Get_GamePadIcon_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateSelectorPosition(bool bInstant, float* Diff, const struct FVector2D& SummSize, float CallFunc_SelectFloat_ReturnValue, int32 Temp_int_Variable, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Abs_ReturnValue);
	void Construct();
	void OnSynchronizeProperties();
	void OnWidgetSelectedEvent_Event_0(int32 GroupIndex);
	void OnSelectorAnimate();
	void SetSelectorPosition();
	void Update();
	void Rebuild();
	void ExecuteUbergraph_SubcategorySelector(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_TextToUpper_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USubcategoryCaption_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_GroupIndex, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_UpdateSelectorPosition_Diff, bool CallFunc_Less_FloatFloat_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UNavButton_C* K2Node_DynamicCast_AsNav_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


