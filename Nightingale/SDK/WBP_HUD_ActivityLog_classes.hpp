#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3D0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_ActivityLog.WBP_HUD_ActivityLog_C
class UWBP_HUD_ActivityLog_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_122;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Messages;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IGameplayEffectUIObservable> GameplayEffectUIObservable;                        // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryComponent_C*              InventoryComponent;                                // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpdateTimer;                                       // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           DefaultColor;                                      // 0x380(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NegativeColor;                                     // 0x394(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           SpecialColor;                                      // 0x3A8(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_71D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URealmCardsProcessor*                  RealmCardsProcessor;                               // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URedemptionComponent*                  RedemptionComponent;                               // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_ActivityLog_C* GetDefaultObj();

	void On_Claim_Redemption_Response_Received(bool bSuccess, const class FString& RewardName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnMinorCardAddedToRealm(TScriptInterface<class IRealmCard>& RealmCard, enum class ERealmCardAction CardAction, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnInventoryOverflowed();
	void OnPartyMemberLeftParty(const class FString& PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnPartyMemberJoinedParty(const class FString& PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void FormatInventoryMessage(struct FInventoryEntry& Entry, bool IsPositive, int32 Quantity, const class FString& Temp_string_Variable, class FText CallFunc_GetItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void RedemptionUnbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void RedemptionBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void RealmCardUnbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void RealmCardBindings(class URealmDataSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UObject* CallFunc_FindDataProcessor_ReturnValue, class URealmCardsProcessor* K2Node_DynamicCast_AsRealm_Cards_Processor, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void StatusEffectUnbindings(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnStatusEffectRemoved(struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle, class UGameplayEffectUIData* GameplayEffectUIData, class FText LStatusDescription, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasAppliedDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetEffectRemovedDescription_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnStatusEffectAdded(struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle, class UGameplayEffectUIData* GameplayEffectUIData, class FText LStatusDescription, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasAppliedDescription_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetEffectAppliedDescription_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EGameplayImpact CallFunc_GetEffectGameplayImpact_ReturnValue, enum class EGameplayImpact Temp_byte_Variable, const struct FSlateColor& K2Node_Select_Default);
	void PostMessage(class FText InText, const struct FSlateColor& MessageColor, const struct FSlateFontInfo& L_FontInfo, class UTextBlock* L_TextBlock, class UEditableTextBox* L_txt_message, class UWBP_ActivityLogMessage_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnItemRemovedFromInventory(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity);
	void OnItemAddedToInventory(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity);
	void StatusEffectBindings(TSubclassOf<class IInterface> Temp_class_Variable, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> K2Node_DynamicCast_AsGameplay_Effect_UIObservable, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void PartyUnbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent);
	void PartyBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent);
	void InventoryUnbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnInventoryReady(bool Success, class UBP_InventoryComponent_C* LInventoryComponent, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, bool CallFunc_IsValid_ReturnValue);
	void InventoryBindings(class UBP_InventoryComponent_C* InInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RemoveBindings();
	void SetupBindings();
	void UnregisterFromContainerEvents(TScriptInterface<class IItemContainer> Container, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RegisterToContainerEvents(TScriptInterface<class IItemContainer> Container, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Construct();
	void Destruct();
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void ExecuteUbergraph_WBP_HUD_ActivityLog(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, class APawn* K2Node_Event_NewPawn);
	void UpdateTimer__DelegateSignature();
};

}


