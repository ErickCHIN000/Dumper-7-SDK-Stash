#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A8 - 0x398)
// BlueprintGeneratedClass BP_Overflow_Bag_Gravestone.BP_Overflow_Bag_Gravestone_C
class ABP_Overflow_Bag_Gravestone_C : public ABP_Overflow_Bag_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionComponent_C*           BP_UIProjectionComponent;                          // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Overflow_Bag_Gravestone_C* GetDefaultObj();

	void NetMulticast_Unstuck(const struct FVector& NewLocation);
	void ExecuteUbergraph_BP_Overflow_Bag_Gravestone(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_NewLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


