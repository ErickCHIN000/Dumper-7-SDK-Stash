#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x3EC - 0x3A8)
// BlueprintGeneratedClass BP_PS_BlackStalkerProjectile_01_01.BP_PS_BlackStalkerProjectile_01_01_C
class ABP_PS_BlackStalkerProjectile_01_01_C : public ABP_MindControlLightning_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPostProcessComponent*                 PP_ChromaticAberration;                            // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      ChromaticAberration;                               // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_BlackStalkerProjectile_01_01;                   // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_0_time_9011D6F4490943E814588884ACC8760E;  // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_9011D6F4490943E814588884ACC8760E; // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_E11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PPMaterial;                                        // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PPDynamicMaterial;                                 // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleModifier;                                     // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PS_BlackStalkerProjectile_01_01_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void TurnOff();
	void ExecuteUbergraph_BP_PS_BlackStalkerProjectile_01_01(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


