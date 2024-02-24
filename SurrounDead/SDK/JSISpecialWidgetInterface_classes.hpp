#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass JSISpecialWidgetInterface.JSISpecialWidgetInterface_C
class IJSISpecialWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IJSISpecialWidgetInterface_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void JSIOnWeightUpdated(double NewWeight);
	void GetAllAttachments(TArray<class FName>* Attachments);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void JSICheckStatus();
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void SetActorOwner(class AActor* ActorRef);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
};

}


