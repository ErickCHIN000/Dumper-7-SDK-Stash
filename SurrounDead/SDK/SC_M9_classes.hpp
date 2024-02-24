#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x310 - 0x2C0)
// WidgetBlueprintGeneratedClass SC_M9.SC_M9_C
class USC_M9_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                       ChamberContainer;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       MagContainer;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       MuzzleContainer;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       SightContainer;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSI_Slot_C*                           ItemRef;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                WeaponRef;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          InstalledAttachments;                              // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UJSI_Slot_C*                           ActionbarFollower;                                 // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USC_M9_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void GetAllAttachments(TArray<class FName>* Attachments, const TArray<class FName>& AllAtt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UJSIContainer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, class FName CallFunc_GetItemID_ItemID, int32 CallFunc_Array_Add_ReturnValue);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex, enum class EAttachmentType Temp_byte_Variable, class UJSIContainer_C* Temp_object_Variable, class UJSIContainer_C* Temp_object_Variable_1, class UJSIContainer_C* Temp_object_Variable_2, class UJSIContainer_C* Temp_object_Variable_3, class UJSIContainer_C* Temp_object_Variable_4, class UJSIContainer_C* Temp_object_Variable_5, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, class UJSIContainer_C* K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetIDIfEquipped(class UJSIContainer_C* Container, class FName* ItemId, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, class FName CallFunc_GetItemID_ItemID);
	void SetActorOwner(class AActor* ActorRef);
	void JSIOnWeightUpdated(double NewWeight);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void DropInfo_OnItemEquippedChange_Event_0(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void JSICheckStatus();
	void EventOnAttachmentEquipped(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void DropInfo_OnItemEquippedChange_Event_1(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void OnHandguardEquipped(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void UpdateSnap();
	void OnHandguardAttachment(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void ExecuteUbergraph_SC_M9(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, class UJSI_Slot_C* K2Node_Event_ItemRef, class UJSIContainer_C* K2Node_CustomEvent_FromContainer_4, class UJSIContainer_C* K2Node_CustomEvent_ToContainer_4, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef_4, bool K2Node_CustomEvent_Equipped__4, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, bool CallFunc_JigCheckWeaponAmmoCount_Result, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetContainerCapacity_Cap_1, int32 CallFunc_GetContainerCapacity_MaxCapacity_1, bool CallFunc_JigCheckWeaponAmmoCount_Result_1, class UJSIContainer_C* K2Node_CustomEvent_FromContainer_3, class UJSIContainer_C* K2Node_CustomEvent_ToContainer_3, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef_3, bool K2Node_CustomEvent_Equipped__3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class UBP_InspectorWindowWidget_C* K2Node_DynamicCast_AsBP_Inspector_Window_Widget, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsVisible_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IIT_ItemSnapCaptor_C> K2Node_DynamicCast_AsIT_Item_Snap_Captor, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPendingSnap__PendingSnap, bool CallFunc_AddItemToQueue_Result, class UJSIContainer_C* K2Node_CustomEvent_FromContainer_2, class UJSIContainer_C* K2Node_CustomEvent_ToContainer_2, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef_2, bool K2Node_CustomEvent_Equipped__2, bool CallFunc_IsEquipped__ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UJSIContainer_C* K2Node_CustomEvent_FromContainer_1, class UJSIContainer_C* K2Node_CustomEvent_ToContainer_1, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef_1, bool K2Node_CustomEvent_Equipped__1, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef_1, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_5, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers_1, class UJSIContainer_C* CallFunc_Array_Get_Item, class UJSIContainer_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UJSIContainer_C* K2Node_CustomEvent_FromContainer, class UJSIContainer_C* K2Node_CustomEvent_ToContainer, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef, bool K2Node_CustomEvent_Equipped_, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_OnSpecialContainerattachmentUpdated_Result);
};

}


