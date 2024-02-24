#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C
class UUMG_FarmingPlot_Fertilizer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        AvailableFuel;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SimpleProgressbar_C*              FertilizerDurability;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar_Fertiziler;                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_C*                      UMG_Inventory;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemStats_C*                      UMG_ItemStats;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FarmingPlot_Fertilizer_C* GetDefaultObj();

	void UpdateTitleBarText(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, class ABP_Farming_Plot_Base_C* K2Node_DynamicCast_AsBP_Farming_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1);
	void Initialise(class AActor* LinkedActor);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ItemModified(class UInventory* Inventory, int32 Location);
	void ItemChanged(class UInventory* Inventory);
	void ExecuteUbergraph_UMG_FarmingPlot_Fertilizer(int32 EntryPoint, TArray<class UUMG_StatDescription_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_StatDescription_C* CallFunc_Array_Get_Item, class AActor* K2Node_CustomEvent_LinkedActor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_GetItem_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, int32 CallFunc_GetStat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FItemData& CallFunc_GetItem_ReturnValue_1, class UInventory* K2Node_CustomEvent_Inventory, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_5);
};

}


