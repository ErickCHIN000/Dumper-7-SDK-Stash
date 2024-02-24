#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x9E0 - 0x9D0)
// BlueprintGeneratedClass BP_Trophy_Bench.BP_Trophy_Bench_C
class ABP_Trophy_Bench_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGFurComponent*                        GFur;                                              // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Trophy_Bench_C* GetDefaultObj();

	void GrantBestiaryProgress(const struct FProcessingItem& Item, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Trophy_Bench(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


