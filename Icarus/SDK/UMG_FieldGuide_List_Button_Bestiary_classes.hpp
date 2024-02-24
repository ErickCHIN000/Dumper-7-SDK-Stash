#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2B9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C
class UUMG_FieldGuide_List_Button_Bestiary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Discovered;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBestiaryDataRowHandle                Creature;                                          // 0x280(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectedCreature;                                  // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Percent;                                           // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_38CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            HoverSound;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Button_Bestiary_C* GetDefaultObj();

	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetSelected(bool Selected);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_FieldGuide_List_Button_Bestiary(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, bool K2Node_CustomEvent_Selected, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, class FText CallFunc_Format_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, bool K2Node_Event_IsDesignTime);
	void SelectedCreature__DelegateSignature(const struct FBestiaryDataRowHandle& Creature, int32 Percent);
};

}


