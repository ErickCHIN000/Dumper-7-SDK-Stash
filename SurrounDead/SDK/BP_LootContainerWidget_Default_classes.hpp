#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass BP_LootContainerWidget_Default.BP_LootContainerWidget_Default_C
class UBP_LootContainerWidget_Default_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                       MainContainer;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       MainContainer_2;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LootContainerWidget_Default_C* GetDefaultObj();

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
	void ExecuteUbergraph_BP_LootContainerWidget_Default(int32 EntryPoint, double K2Node_Event_NewWeight, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef);
};

}


