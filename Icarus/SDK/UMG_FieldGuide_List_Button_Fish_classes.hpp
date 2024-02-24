#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Fish.UMG_FieldGuide_List_Button_Fish_C
class UUMG_FieldGuide_List_Button_Fish_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFishDataRowHandle                    Fish;                                              // 0x278(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectedFish;                                      // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Discovered;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_867[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            HoverAudio;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Button_Fish_C* GetDefaultObj();

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetSelected(bool Selected);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_FieldGuide_List_Button_Fish(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_Selected, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, bool K2Node_Event_IsDesignTime);
	void SelectedFish__DelegateSignature(const struct FFishDataRowHandle& Creature, bool Discovered);
};

}


