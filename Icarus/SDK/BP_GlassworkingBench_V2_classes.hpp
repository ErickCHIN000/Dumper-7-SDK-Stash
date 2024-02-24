#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xA10 - 0x9D0)
// BlueprintGeneratedClass BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C
class ABP_GlassworkingBench_V2_C : public ABP_ProcessorBase_C
{
public:
	class UPointLightComponent*                  PointLight1;                                       // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_GlassWorking_v2_Proxy_Output3;        // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_GlassWorking_v2_Proxy_Output2;        // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_GlassWorking_v2_Proxy_Output1;        // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Bench_GlassWorking_v2_Proxy_Input1;         // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GlassworkingBench_V2_C* GetDefaultObj();

	void ProcessorStateUpdate(bool Active, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default);
	void UserConstructionScript();
};

}


