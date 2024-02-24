#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x9F0 - 0x9D0)
// BlueprintGeneratedClass BP_Herbalism_Bench.BP_Herbalism_Bench_C
class ABP_Herbalism_Bench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_DEP_Bench_Herbalism_Proxy_Herb2;                // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Herbalism_Proxy_Herb1;                // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Herbalism_Proxy_Herb3;                // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Herbalism_Bench_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Herbalism_Bench(int32 EntryPoint);
};

}


