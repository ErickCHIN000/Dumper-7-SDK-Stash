#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x531 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_RealmCardMachine_Screen.WBP_RealmCardMachine_Screen_C
class UWBP_RealmCardMachine_Screen_C : public UNWXRealmCardMachineScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Draggable_DropTarget_C*           BackdropDropTarget;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       Blur_Disabled;                                     // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_PortalOpeningMessage;                       // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Close;                                         // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Draggable_DropTarget_C*           GridListDropTarget;                                // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_RealmPreview;                             // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PortalOpeningHeader;                           // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_PortalOpeningMessage;                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmCardGridList_C*              WBP_RealmCardGridList;                             // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmInfo_C*                      WBP_RealmInfo;                                     // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmMachine_BoardBackdrop_C*     WBP_RealmMachine_BoardBackdrop;                    // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPortalControllerComponent*            CachedPortalController;                            // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class URealmCardMachineComponent*            CachedRealmCardMachineComponent;                   // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ADeploymentPortal*                     DeploymentPortal;                                  // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPortalActive;                                    // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RealmCardMachine_Screen_C* GetDefaultObj();

	void OnNoCardsOnGridListtoFocus();
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* LFirstVisibleChild, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_TryGetFirstVisibleChild_FirstVisibleChild, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_TryGetFirstVisibleChild_Widget);
	void OnTableCardDragged(bool IsDragging, const struct FInventoryEntry& CardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnGridListCardDragged(bool IsDragging, const struct FInventoryEntry& Card, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CanAddCardToTable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnRealmSettingUpdated(const struct FRealmSettings& NewRealmSettings, const TArray<struct FInventoryEntry>& LTableCards, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetTableCards_TableCards, enum class ESlateVisibility K2Node_Select_Default);
	void OnBackdropInstantAction(const struct FInventoryEntry& Card, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void UpdateDropTargetAnimations(class UWBP_Draggable_DropTarget_C* DropTarget, bool IsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnGridListInstantActionConfirmed(const struct FInventoryEntry& Card, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void OnCardHovered(bool IsHovered, const struct FInventoryEntry& Card, enum class ERealmCardType Type, bool Temp_bool_Variable, enum class ERealmCardType Temp_byte_Variable, bool CallFunc_IsDragDropping_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ERealmCardType K2Node_Select_Default);
	void InitalizeCardMachine(class UPortalControllerComponent* PortalController, class URealmCardMachineComponent* RealmCardMachineComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IPortalControllerInterface> CallFunc_GetPortalState_self_CastInput, enum class ETemporalPortalState CallFunc_GetPortalState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ADeploymentPortal* CallFunc_GetDeploymentPortal_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void InitializeInternal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
	void OnPortalStateChanged(enum class ETemporalPortalState InPortalState, class ADeploymentPortal* DeploymentPortal, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8);
	void Construct();
	void Destruct();
	void BndEvt__WBP_RealmCardMachine_Screen_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_RealmCardMachine_Screen_GridListDropTarget_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void BndEvt__WBP_RealmCardMachine_Screen_WBP_Draggable_DropTarget_K2Node_ComponentBoundEvent_2_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void DoDelay();
	void ExecuteUbergraph_WBP_RealmCardMachine_Screen(int32 EntryPoint, class UWidget* CallFunc_TryGetFirstVisibleChild_FirstVisibleChild, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload_1, class UDragDropOperation_RealmCard_C* K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class UDragDropOperation_RealmCard_C* K2Node_DynamicCast_AsDrag_Drop_Operation_Realm_Card_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3);
};

}


