#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9D8 - 0x9D0)
// BlueprintGeneratedClass BP_Anvil_Bench_T3.BP_Anvil_Bench_T3_C
class ABP_Anvil_Bench_T3_C : public ABP_ProcessorBase_C
{
public:
	class UFMODAudioComponent*                   ActivatedAudio;                                    // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Anvil_Bench_T3_C* GetDefaultObj();

	void GeneratorStateUpdate(bool Active);
	void ProcessorStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


