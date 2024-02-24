#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x9E8 - 0x9D0)
// BlueprintGeneratedClass BP_CookingStation_V2.BP_CookingStation_V2_C
class ABP_CookingStation_V2_C : public ABP_ProcessorBase_C
{
public:
	class UStaticMeshComponent*                  SM_DEP_Bench_Cooking_Proxy_Meat3;                  // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Cooking_Proxy_Meat2;                  // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_Cooking_Proxy_Meat1;                  // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CookingStation_V2_C* GetDefaultObj();

	void ProcessorStateUpdate(bool Active, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
};

}


