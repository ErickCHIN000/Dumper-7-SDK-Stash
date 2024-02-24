#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x318 - 0x2E8)
// WidgetBlueprintGeneratedClass UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C
class UUMG_RecipeElementNonInteractive_C : public UUMG_ListElement_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        LeftSide;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Output;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RecipeBase;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RecipeFrame;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeElementNonInteractive_C* GetDefaultObj();

	class UOverlay* GetOverlay();
	void InitialiseIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FResourceItem>& CallFunc_GetResourceInputs_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText CallFunc_CreateInputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateInputItem_Icon, int32 CallFunc_Array_Length_ReturnValue_1, const struct FItemData& Temp_wildcard_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FItemData& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceIcon_Icon, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	struct FProcessorRecipesRowHandle GetProcessorRecipe();
	void GetResourceIcon(TSoftObjectPtr<class UTexture2D>* Icon, class UTexture2D* RecipeIcon, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EIcarusResourceType Temp_wildcard_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_RecipeElementNonInteractive(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool K2Node_Event_IsDesignTime, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTexture2D* K2Node_Select_Default);
};

}


