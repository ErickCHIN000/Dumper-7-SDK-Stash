#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2B9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_Space.UMG_BioLab_Space_C
class UUMG_BioLab_Space_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_BasicButton_2_C*                  BuyButton;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BuyWeaponsPanel;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             InventoryListView;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ModifyButton;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PlayerInventoryVBox;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_ShopPanel_C*               UMG_BioLab_ShopPanel;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_CustomisationPanel_C*      UMG_BioLab_WeaponCustomisationPanel;               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MetaResourceDisplay_C*            UMG_MetaResourceDisplay;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WeaponCustomisationPanel;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EventsRegistered;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_BioLab_Space_C* GetDefaultObj();

	void Initialise(class UInventory* Main, class UInventory* Loadout, const TArray<struct FMetaItem>& LoadoutInventory, const TArray<struct FMetaItem>& MetaInventory, const TArray<struct FDropship>& Dropships, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, TArray<struct FMetaItem>& CallFunc_GetMetaInventory_ReturnValue, TArray<struct FMetaItem>& CallFunc_GetLoadoutInventory_ReturnValue);
	void Construct();
	void BndEvt__UMG_BioLab_Space_ModifyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void ShowWeaponCustomisation();
	void ShowWeaponShop();
	void Destruct();
	void RegisterEvents();
	void UnregisterEvents();
	void OnMetaInventoryChanged();
	void HandleListItemSelected(class UObject* Item);
	void ExecuteUbergraph_UMG_BioLab_Space(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UBioLabInventoryListItemData_C* K2Node_DynamicCast_AsBio_Lab_Inventory_List_Item_Data, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class UObject* K2Node_ComponentBoundEvent_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_2, TArray<struct FItemData>& CallFunc_GetMetaInventoryItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FLivingItemData& CallFunc_GetLivingItemData_LivingItem, enum class EDataValid CallFunc_GetLivingItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, class UBioLabInventoryListItemData_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


