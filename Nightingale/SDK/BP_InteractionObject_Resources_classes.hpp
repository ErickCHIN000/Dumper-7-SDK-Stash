#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_InteractionObject_Resources.BP_InteractionObject_Resources_C
class UBP_InteractionObject_Resources_C : public UNWXObjectComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_Resources_C* GetDefaultObj();

	void GetInteractionTextForResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, class FText* InteractText);
	void ExecuteInteractionOnResourceNode(class ABP_ResourceNode_IIM_C* ResourceNode, const struct FInteractionData& InteractionData, class AController* Controller, bool* Success);
	void CanInteractWithResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, bool* CanInteract);
};

}


