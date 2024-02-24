#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C
class UBP_MenuData_CM_GuideBook_Shops_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Shops_C* GetDefaultObj();

	void PostInitialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FShopDescriptorRegistryEntry>& CallFunc_GetAllShopDescriptors_OutShopRegistryEntries, const struct FShopDescriptorRegistryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CreateAndQuickAddEntry(struct FShopDescriptorRegistryEntry& ShopRegistryEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UNWXMenuDataEntryShop* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop, bool K2Node_DynamicCast_bSuccess);
};

}


