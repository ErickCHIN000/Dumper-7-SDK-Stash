#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2D0 - 0x2B0)
// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C
class UUMG_FieldGuideItem_ResourceNetwork_C : public UFieldGuideItemWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ProvidesBox;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RequiresBox;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_NA;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FieldGuideItem_ResourceNetwork_C* GetDefaultObj();

	void PopulateResourceNetworkDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, bool CallFunc_AnyChildrenVisible_ReturnValue, bool CallFunc_AnyChildrenVisible_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue, const struct FGeneratorData& CallFunc_GetGeneratorStruct_Generator, enum class EValid CallFunc_GetGeneratorStruct_Paths, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_2, enum class EIcarusResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_4, bool Temp_bool_Variable_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic_1, enum class EValid CallFunc_GetItemsStaticStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFuelData& CallFunc_GetFuelStruct_Fuel, enum class EValid CallFunc_GetFuelStruct_Paths, const struct FOxygenData& CallFunc_GetOxygenStruct_Oxygen, enum class EValid CallFunc_GetOxygenStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, class UHorizontalBox* K2Node_Select_Default, class UHorizontalBox* K2Node_Select_Default_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FWaterData& CallFunc_GetWaterStruct_Water, enum class EValid CallFunc_GetWaterStruct_Paths, const struct FEnergyData& CallFunc_GetEnergyStruct_Energy, enum class EValid CallFunc_GetEnergyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, class UHorizontalBox* K2Node_Select_Default_2, class UHorizontalBox* K2Node_Select_Default_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4);
	void InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn);
	void ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn);
};

}


