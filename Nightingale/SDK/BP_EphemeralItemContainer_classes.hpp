#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// BlueprintGeneratedClass BP_EphemeralItemContainer.BP_EphemeralItemContainer_C
class ABP_EphemeralItemContainer_C : public AActor
{
public:
	class UInWorldItemContainerComponent*        InWorldItemContainer;                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FContainerCapacityData                Container_Capacity;                                // 0x2B0(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_EphemeralItemContainer_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	void OnRep_Container_Capacity();
};

}


