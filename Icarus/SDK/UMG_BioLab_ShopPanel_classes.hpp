#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x27D - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_ShopPanel.UMG_BioLab_ShopPanel_C
class UUMG_BioLab_ShopPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                            ShopGrid;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ShopGridSpacingVertical;                           // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ShopGridSpacingHorizontal;                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ShopGridRowSize;                                   // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         EventsRegistered;                                  // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_BioLab_ShopPanel_C* GetDefaultObj();

	void GetItemsToShow(TArray<struct FLivingItemShopItemsRowHandle>* ItemsToShow, const TArray<struct FLivingItemShopItemsRowHandle>& ShopItems, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FLivingItemShopItemsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLivingItemShopItemsRowHandle& CallFunc_StructToRowHandle_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void FillShopGrid(TArray<struct FLivingItemShopItemsRowHandle>& ShopItemsToShow, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FLivingItemShopItemsRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, class UUMG_BioLab_ShopItem_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void OnMetaCurrencyChanged();
	void RegisterEvents();
	void UnregisterEvents();
	void ExecuteUbergraph_UMG_BioLab_ShopPanel(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, TArray<struct FLivingItemShopItemsRowHandle>& CallFunc_GetItemsToShow_ItemsToShow, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UUMG_BioLab_ShopItem_C* K2Node_DynamicCast_AsUMG_Bio_Lab_Shop_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


