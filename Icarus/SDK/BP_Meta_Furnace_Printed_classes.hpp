#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x9F0 - 0x9D0)
// BlueprintGeneratedClass BP_Meta_Furnace_Printed.BP_Meta_Furnace_Printed_C
class ABP_Meta_Furnace_Printed_C : public ABP_ProcessorBase_C
{
public:
	class UNiagaraComponent*                     Niagara;                                           // 0x9D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Internal;                               // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Fire_Audio;                                   // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Meta_Furnace_Printed_C* GetDefaultObj();

	void GeneratorStateUpdate(bool Active, float CallFunc_RandomFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
};

}


