#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5A0 - 0x580)
// BlueprintGeneratedClass BP_FLODItemActor.BP_FLODItemActor_C
class ABP_FLODItemActor_C : public AStaticItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFLODRewardComponent*                  IcarusFLODReward;                                  // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFLODActorComponent*                   IcarusFLODActor;                                   // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                Interactable;                                      // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FLODItemActor_C* GetDefaultObj();

	void BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature(class UFLODActorComponent* Component, struct FFLODActorRecordInstance& Current, struct FFLODActorRecordInstance& Previous);
	void ExecuteUbergraph_BP_FLODItemActor(int32 EntryPoint, class UFLODActorComponent* K2Node_ComponentBoundEvent_Component, const struct FFLODActorRecordInstance& K2Node_ComponentBoundEvent_Current, const struct FFLODActorRecordInstance& K2Node_ComponentBoundEvent_Previous, enum class EValid CallFunc_GetTrait_Paths, class UDecayableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


