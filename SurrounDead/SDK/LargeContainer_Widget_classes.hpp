#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E8 - 0x2C0)
// WidgetBlueprintGeneratedClass LargeContainer_Widget.LargeContainer_Widget_C
class ULargeContainer_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_66;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       MainContainer;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UJSI_Slot_C*>                   Array_Of_Items;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULargeContainer_Widget_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void GetAllAttachments(TArray<class FName>* Attachments);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void SetActorOwner(class AActor* ActorRef);
	void JSICheckStatus();
	void JSIOnWeightUpdated(double NewWeight);
	void BndEvt__LargeContainer_Widget_Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_LargeContainer_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UJSI_Slot_C* CallFunc_Array_Get_Item, int32 CallFunc_GetCount_Count, bool CallFunc_JSI_CheckIfCanAddItemToContainer_Result, class UJSIContainer_C* CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer, int32 CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex, bool CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation, bool CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result, class UJSI_Slot_C* CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem, bool CallFunc_CanStack__CanStack, bool CallFunc_CanStack__FreeSpaceAvailable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
};

}


