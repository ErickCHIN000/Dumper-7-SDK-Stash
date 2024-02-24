#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA08 - 0x9D0)
// BlueprintGeneratedClass BP_Armor_Bench.BP_Armor_Bench_C
class ABP_Armor_Bench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Fur_Head;               // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Fur_Chest;              // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Cloth;                  // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Rope;                   // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Leather;                // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Textile_Proxy_Fur;                    // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Armor_Bench_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Armor_Bench(int32 EntryPoint);
};

}


