#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x380 (0x718 - 0x398)
// WidgetBlueprintGeneratedClass WBP_RealmCardHolder.WBP_RealmCardHolder_C
class UWBP_RealmCardHolder_C : public UNWXStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Highlight;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_CardContainer;                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_CardType;                                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_CardHolderDetails;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryEntry                       Card;                                              // 0x3C0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ERealmCardType                    CardType;                                          // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_7176[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdated;                                         // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInWorldItemContainerComponent*        TableContainer;                                    // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class URealmCardMachineComponent*            RealmCardMachineComponent;                         // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_RealmCard_C*                      RealmCardWidget;                                   // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInstantActionConfirmed;                          // 0x6F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHopeUpdated;                                     // 0x700(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ADeploymentPortal*                     DeploymentPortalObj;                               // 0x710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmCardHolder_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void RemoveRealmCardWidgetBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1);
	void OnDeploymentPortalStateChanged(enum class ETemporalPortalState State, class ADeploymentPortal* DeploymentPortal, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCardDragged(bool IsDragging, const struct FInventoryEntry& CardData, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue);
	void OnInstantAction(const struct FInventoryEntry& InventoryEntry);
	void OnTableCardsUpdated(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, TArray<struct FInventoryEntry>& CallFunc_GetCardsOnTable_OutTableCards);
	void UpdateCardFromList(TArray<struct FInventoryEntry>& CardList, const struct FInventoryEntry& LCurrentCard, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ERealmCardType CallFunc_GetRealmCardAssetTypeFromEntry_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateCardTypeText(bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateCard(const struct FInventoryEntry& NewCard, bool LIsValidNewCard, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_FInventoryEntry_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmCard_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, float K2Node_MakeStruct_Angle_ImplicitCast);
	void GetCard(struct FInventoryEntry* Card);
	void UpdateHighlightForType(enum class ERealmCardType Type, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Initialize(class URealmCardMachineComponent* RealmCardMachineComponent, class ADeploymentPortal* DeploymentPortal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FInventoryEntry>& CallFunc_GetLastPlayedRealmCards_ReturnValue, class UInWorldItemContainerComponent* CallFunc_GetTableContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Destruct();
	void ExecuteUbergraph_WBP_RealmCardHolder(int32 EntryPoint);
	void OnInstantActionConfirmed__DelegateSignature(const struct FInventoryEntry& Card);
	void OnHopeUpdated__DelegateSignature();
	void OnDragged__DelegateSignature(bool IsDragging, const struct FInventoryEntry& CardData);
	void OnUpdated__DelegateSignature(const struct FInventoryEntry& Card, enum class ERealmCardType Type);
};

}


