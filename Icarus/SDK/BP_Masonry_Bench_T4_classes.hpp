#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x9E0 - 0x9D0)
// BlueprintGeneratedClass BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C
class ABP_Masonry_Bench_T4_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_DEP_Masonry_Bench_T4_Proxy_Input;               // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Masonry_Bench_T4_C* GetDefaultObj();

	void WaterNetworkStateUpdated(bool Active, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Masonry_Bench_T4(int32 EntryPoint);
};

}


