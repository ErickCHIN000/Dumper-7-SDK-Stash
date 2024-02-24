#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass SC_HeavyCoat.SC_HeavyCoat_C
class USC_HeavyCoat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                       JSIContainer7;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSI_Slot_C*                           CoyoteBackpack_Ref;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USC_HeavyCoat_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetAllAttachments(TArray<class FName>* Attachments);
	void SetActorOwner(class AActor* ActorRef);
	void JSICheckStatus();
	void JSIOnWeightUpdated(double NewWeight);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void ExecuteUbergraph_SC_HeavyCoat(int32 EntryPoint, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight);
};

}


