#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x9E8 - 0x9D0)
// BlueprintGeneratedClass BP_Electric_Armor_Bench.BP_Electric_Armor_Bench_C
class ABP_Electric_Armor_Bench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Proxy_Head;                                        // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Proxy_Chest;                                       // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Electric_Armor_Bench_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Electric_Armor_Bench(int32 EntryPoint);
};

}


