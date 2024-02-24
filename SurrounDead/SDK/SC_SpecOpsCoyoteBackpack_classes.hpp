#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass SC_SpecOpsCoyoteBackpack.SC_SpecOpsCoyoteBackpack_C
class USC_SpecOpsCoyoteBackpack_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                       JSIContainer_1;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSI_Slot_C*                           CoyoteBackpack_Ref;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USC_SpecOpsCoyoteBackpack_C* GetDefaultObj();

	void SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return);
	void GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array);
	void GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex);
	void GetDropWidget(class UDropItemBackGwidget_C** DropWRef);
	void GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_);
	void GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers);
	void GetAllAttachments(TArray<class FName>* Attachments);
	void JSIOnWeightUpdated(double NewWeight);
	void SetItemReference(class UJSI_Slot_C* ItemRef);
	void Event_Callback(bool NewValue);
	void SetActorOwner(class AActor* ActorRef);
	void JSICheckStatus();
	void ExecuteUbergraph_SC_SpecOpsCoyoteBackpack(int32 EntryPoint, double K2Node_Event_NewWeight, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UJSI_Slot_C* K2Node_Event_ItemRef, bool K2Node_CustomEvent_NewValue, class AActor* K2Node_Event_ActorRef);
};

}


