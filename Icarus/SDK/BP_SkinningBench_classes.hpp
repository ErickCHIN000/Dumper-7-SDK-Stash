#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x9F0 - 0x9D0)
// BlueprintGeneratedClass BP_SkinningBench.BP_SkinningBench_C
class ABP_SkinningBench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         StopCorpseFallRight;                               // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         StopCorpseFallBack;                                // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         StopCorpseFallFront;                               // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkinningBench_C* GetDefaultObj();

	void GrantBestiaryProgress(const struct FProcessingItem& Item, int32 TotalCount, class UPlayerDataComponent* PlayerData, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkinningBench(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


