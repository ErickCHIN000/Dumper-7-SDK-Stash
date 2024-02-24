#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// WidgetBlueprintGeneratedClass SC_Respirator.SC_Respirator_C
class USC_Respirator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                       GogglesContainer;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSI_Slot_C*                           ItemRef;                                           // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                WeaponRef;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          InstalledAttachments;                              // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USC_Respirator_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void GetAllAttachments(TArray<class FName>* Attachments, const TArray<class FName>& AllAtt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UJSIContainer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, class FName CallFunc_GetItemID_ItemID, int32 CallFunc_Array_Add_ReturnValue);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex, enum class EAttachmentType Temp_byte_Variable, class UJSIContainer_C* Temp_object_Variable, class UJSIContainer_C* Temp_object_Variable_1, class UJSIContainer_C* Temp_object_Variable_2, class UJSIContainer_C* Temp_object_Variable_3, class UJSIContainer_C* Temp_object_Variable_4, class UJSIContainer_C* Temp_object_Variable_5, class UJSIContainer_C* Temp_object_Variable_6, class UJSIContainer_C* Temp_object_Variable_7, class UJSIContainer_C* Temp_object_Variable_8, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, class UJSIContainer_C* K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetIDIfEquipped(class UJSIContainer_C* Container, class FName* ItemId, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, class FName CallFunc_GetItemID_ItemID);
	void SetActorOwner(class AActor* ActorRef);
	void JSICheckStatus();
	void JSIOnWeightUpdated(double NewWeight);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void EventOnAttachmentEquipped(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_);
	void UpdateSnap();
	void ExecuteUbergraph_SC_Respirator(int32 EntryPoint, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, class UJSI_Slot_C* K2Node_Event_ItemRef, class UJSIContainer_C* K2Node_CustomEvent_FromContainer, class UJSIContainer_C* K2Node_CustomEvent_ToContainer, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef, bool K2Node_CustomEvent_Equipped_, bool CallFunc_IsValid_ReturnValue, class UBP_InspectorWindowWidget_C* K2Node_DynamicCast_AsBP_Inspector_Window_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IIT_ItemSnapCaptor_C> K2Node_DynamicCast_AsIT_Item_Snap_Captor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsPendingSnap__PendingSnap, bool CallFunc_AddItemToQueue_Result, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_OnSpecialContainerattachmentUpdated_Result);
};

}


