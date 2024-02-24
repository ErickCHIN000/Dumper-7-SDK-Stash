#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x488 - 0x3D8)
// WidgetBlueprintGeneratedClass WBP_RealmCardGridList.WBP_RealmCardGridList_C
class UWBP_RealmCardGridList_C : public UNWXRealmCardGridListWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            SB_Grid;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_MainContent;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class ERealmCardType, class UWBP_RealmCardListPanel_C*> ListPanelMap;                                      // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnCardHovered;                                     // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCardInstantAction;                               // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCardDragged;                                     // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               GamepadNavigationDown;                             // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNoCardsToFocus;                                  // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_RealmCardGridList_C* GetDefaultObj();

	void OnLastCardInPanelUsed(class UWBP_RealmCardListPanel_C* Panel, int32 L_PanelIndex, const TArray<class UWidget*>& L_PanelList, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWBP_RealmCardListPanel_C* K2Node_DynamicCast_AsWBP_Realm_Card_List_Panel, bool K2Node_DynamicCast_bSuccess);
	void UpdateGamepadFallback(class UWidget* NewFallbackDown, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_RealmCardListPanel_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UWBP_RealmCardListPanel_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InitializeDesignerPreview(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmCardListPanel_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ERealmCardType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_RealmCardListPanel_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void TryGetFirstVisibleChild(class UWidget** Widget, class UWBP_RealmCardListPanel_C* LCurrentGroup, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UWBP_RealmCardListPanel_C*>& CallFunc_Map_Values_Values, class UWBP_RealmCardListPanel_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateNoCardsMessage(const TArray<class UWidget*>& LAllChildren, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void RemoveBindings(class UWBP_RealmCardListPanel_C* LCurrentListPanel, const TArray<class UWidget*>& LScrollBoxChildren, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWBP_RealmCardListPanel_C*>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWBP_RealmCardListPanel_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnCardEntryDragged(bool IsDragging, const struct FInventoryEntry& Card, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue);
	void OnCardEntryInstantAction(const struct FInventoryEntry& Card);
	void OnCardEntryHovered(bool IsHovered, const struct FInventoryEntry& Card, enum class ERealmCardType Type);
	void BP_HandleCardsUpdatedForType(enum class ERealmCardType CardType, TArray<struct FInventoryEntry>& NewCards, class UWBP_RealmCardListPanel_C* LRealmCardListPanelWidget, const TArray<class UWidget*>& NewLocalVar, bool CallFunc_Array_IsEmpty_ReturnValue, class UWBP_RealmCardListPanel_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Initialize(class UWBP_RealmCardListPanel_C* LPreviousRealmCardListPanel, enum class ERealmCardType LCurrentGroupType, const TArray<struct FInventoryEntry>& LCardsForType, class UWBP_RealmCardListPanel_C* LRealmCardListPanel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ERealmCardType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmCardListPanel_C* CallFunc_Create_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetCardsForType_OutCards);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_RealmCardGridList(int32 EntryPoint);
	void OnNoCardsToFocus__DelegateSignature();
	void OnCardDragged__DelegateSignature(bool IsDragging, const struct FInventoryEntry& Card);
	void OnCardInstantAction__DelegateSignature(const struct FInventoryEntry& Card);
	void OnCardHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& Card, enum class ERealmCardType Type);
};

}


