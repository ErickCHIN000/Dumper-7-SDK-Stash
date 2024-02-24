#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E8 - 0x2C0)
// WidgetBlueprintGeneratedClass DeadZombieUI.DeadZombieUI_C
class UDeadZombieUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_66;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       JSIContainer;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UJSI_Slot_C*>                   Array_Of_Items;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UDeadZombieUI_C* GetDefaultObj();

	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetAllAttachments(TArray<class FName>* Attachments);
	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void SetActorOwner(class AActor* ActorRef);
	void JSICheckStatus();
	void JSIOnWeightUpdated(double NewWeight);
	void BndEvt__DeadZombieUI_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DeadZombieUI(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UJSI_Slot_C* CallFunc_Array_Get_Item, int32 CallFunc_GetCount_Count, bool CallFunc_CanStack__CanStack, bool CallFunc_CanStack__FreeSpaceAvailable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_JSI_CheckIfCanAddItemToContainer_Result, class UJSIContainer_C* CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer, int32 CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex, bool CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation, bool CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result, class UJSI_Slot_C* CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


