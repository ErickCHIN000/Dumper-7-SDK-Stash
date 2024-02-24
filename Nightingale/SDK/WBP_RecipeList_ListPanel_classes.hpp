#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3D0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_RecipeList_ListPanel.WBP_RecipeList_ListPanel_C
class UWBP_RecipeList_ListPanel_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateArrow;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               bu_panel;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_toggle;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTileView*                             ItemGrid;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Grid;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       RecipeGrid;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_count;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_EntryGrids;                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUIGroupInfo                          GroupInfo;                                         // 0x390(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UNWXMenuDataEntry*>             AllEntriesInPanel;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Panel_GridWidth;                                   // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasSomeUnlockedEntries;                            // 0x3C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSomeLockedEntries;                              // 0x3C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7010[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UListView*                             ActiveGrid;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RecipeList_ListPanel_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry);
	void OnItemEntryDoubleClicked(const struct FInventoryEntry& ItemEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry);
	void DisplayEntries(const struct FVector2D& LThumbScale, const struct FVector2D& LItemScale, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetEntryWithID(const struct FGuid& ID, class UNWXMenuDataEntry** Entry, class UNWXMenuDataEntry* MenuDataEntry, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, const struct FGameplayTag& CallFunc_GetCurrentCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue);
	void GetForwardArrowStartTime(double* StartTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, double K2Node_FunctionResult_StartTime_ImplicitCast);
	void GetReverseArrowStartTime(double* StartTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void PopulateGrid(const struct FVector2D& EntryScale, class UTileView* LTileView, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UTileView* K2Node_DynamicCast_AsTile_View, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, float CallFunc_SetEntryWidth_NewWidth_ImplicitCast, float CallFunc_SetEntryHeight_NewHeight_ImplicitCast);
	void OnItemEntrySelected(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry_1);
	void OnItemEntryFocusRemoved(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry);
	void OnItemEntryFocusReceived(const struct FInventoryEntry& InventoryEntry, bool CallFunc_IsOwningPlayerUsingGamepad_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry);
	void OnItemEntryHovered(bool HoverOn, const struct FInventoryEntry& ItemEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntry* CallFunc_GetEntryWithID_Entry);
	void OnItemWidgetReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void OnItemWidgetGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void UnbindFromItemGridEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void BindToItemGridEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void PlayArrowAnimation(bool IsOpening, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_real_Variable, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, double CallFunc_GetForwardArrowStartTime_StartTime, double CallFunc_GetReverseArrowStartTime_StartTime, float K2Node_Select_Default_1, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast);
	void GetEntriesInPanel(TArray<class UNWXMenuDataEntry*>* EntriesInPanel);
	void UpdatePanelEntryCounter(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_RecipeList_ListPanel(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
};

}


