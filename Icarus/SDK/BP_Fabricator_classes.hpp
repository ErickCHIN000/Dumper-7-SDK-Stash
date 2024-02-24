#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9D8 - 0x9D0)
// BlueprintGeneratedClass BP_Fabricator.BP_Fabricator_C
class ABP_Fabricator_C : public ABP_ProcessorBase_C
{
public:
	class UPointLightComponent*                  PointLight;                                        // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fabricator_C* GetDefaultObj();

	void GeneratorStateUpdate(bool Active);
	void ProcessorStateUpdate(bool Active, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


