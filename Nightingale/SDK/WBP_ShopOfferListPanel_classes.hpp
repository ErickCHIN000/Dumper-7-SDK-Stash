#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x390 - 0x368)
// WidgetBlueprintGeneratedClass WBP_ShopOfferListPanel.WBP_ShopOfferListPanel_C
class UWBP_ShopOfferListPanel_C : public UNWXShopOfferListPanelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          CategoriesContainer;                               // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Cb_MissingReqsFilter;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          CommonHierarchicalScrollBox_182;                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_714;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShopOfferListPanel_C* GetDefaultObj();

	void GetFirstScrollChild(class UWidget** Output, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ShopCategoryEntry_C* K2Node_DynamicCast_AsWBP_Shop_Category_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetNavigableButton_Output);
	void HandleMissingReqsFilterChanged(bool bIsChecked, bool CallFunc_Not_PreBool_ReturnValue);
	void OnDataLoaded(class UWidget* LScrollTo, int32 Temp_int_Array_Index_Variable, class UWBP_ShopCategoryEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXShopCategoryListItem* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ShopOfferListPanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


