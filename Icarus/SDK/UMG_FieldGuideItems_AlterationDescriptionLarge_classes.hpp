#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x29B - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_AlterationDescriptionLarge.UMG_FieldGuideItems_AlterationDescriptionLarge_C
class UUMG_FieldGuideItems_AlterationDescriptionLarge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Description;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider_2;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Stats;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_505F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlterationsEnum                      Alteration;                                        // 0x288(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Item;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Attachment;                                        // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         HideDivider;                                       // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItems_AlterationDescriptionLarge_C* GetDefaultObj();

	void Initialise(bool HideDivider, class FText RetrievedDescription, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMG_StatDescriptionLarge_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FAlterationsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAlteration& CallFunc_GetAlterationsStruct_Alterations, enum class EValid CallFunc_GetAlterationsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FStatsEnum& CallFunc_Array_Get_Item, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void Set_Active_State(bool Active);
	void Reinitalise(const struct FAlterationsEnum& Alteration, bool HideDivider);
	void ExecuteUbergraph_UMG_FieldGuideItems_AlterationDescriptionLarge(int32 EntryPoint, const struct FAlterationsEnum& K2Node_CustomEvent_Alteration, bool K2Node_CustomEvent_HideDivider, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_Active, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_StatDescriptionLarge_C* K2Node_DynamicCast_AsUMG_Stat_Description_Large, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
};

}


