#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9D8 - 0x9D0)
// BlueprintGeneratedClass BP_MachiningBench.BP_MachiningBench_C
class ABP_MachiningBench_C : public ABP_ProcessorBase_C
{
public:
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MachiningBench_C* GetDefaultObj();

	void ProcessorStateUpdate(bool Active, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
};

}


