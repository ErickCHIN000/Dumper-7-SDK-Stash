#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3A0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_RealmInfo.WBP_RealmInfo_C
class UWBP_RealmInfo_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_Tab_C*                     btn_Discoveries;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                     btn_NPCCreature;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Tab_C*                     btn_Overview;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NavLeft;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_NavRight;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfoTab_Discoveries_C*    DiscoveriesTab;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_71;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfoTab_NPC_Creatures_C*  NPCAndCreatureTab;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfoTab_Overview_C*       OverviewInfoTab;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TabsContainer;                                     // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmInfo_C* GetDefaultObj();

	void GetAdjacentTabIndex(bool Left_, int32* Index, const TArray<class UWBP_Button_Tab_C*>& ButtonTabs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWBP_Button_Tab_C* CallFunc_Array_Get_Item, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, class UWBP_Button_Tab_C* CallFunc_Array_Get_Item_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UWBP_Button_Tab_C*>& K2Node_MakeArray_Array);
	void UpdateRealmCards(TArray<struct FInventoryEntry>& Realm_Cards, const TArray<struct FItemData>& Cards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateRealmInformation(const struct FRealmSettings& RealmSettings, const TArray<struct FDataTableRowHandle>& NewLocalVar, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TArray<struct FItemData>& CallFunc_GenerateRealmCardsData_ReturnValue, TArray<struct FNWXNPCNarrativeData>& CallFunc_GetNarrativeNPCsFromRealm_OutNPCs, TArray<struct FInventoryEntry>& CallFunc_GetRealmEssenceTypes_Essences, TArray<enum class EFaction>& CallFunc_GetFactionsFromRealm_Factions, TArray<struct FDataTableRowHandle>& CallFunc_GetCreaturesFromRealm_SpawnerData);
	void PreConstruct(bool IsDesignTime);
	void OnTabClicked(class FText Name, int32 TabIndex);
	void BndEvt__WBP_RealmInfo_CBU_NavLeft_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_RealmInfo_CBU_NavRight_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_RealmInfo(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_Name, int32 K2Node_CustomEvent_TabIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_4, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, int32 CallFunc_GetAdjacentTabIndex_Index, int32 Temp_int_Variable_5, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_3, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_Select_Default, int32 Temp_int_Variable_6, class UWidget* K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_4, class UWidget* K2Node_Select_Default_3, class UWidget* K2Node_Select_Default_4, int32 CallFunc_GetAdjacentTabIndex_Index_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_5, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_6, class UWidget* K2Node_Select_Default_5, class UWidget* K2Node_Select_Default_6);
};

}


