#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3E8 - 0x3A8)
// BlueprintGeneratedClass BP_PS_BlackStalkerProjectileExplosion_01_01.BP_PS_BlackStalkerProjectileExplosion_01_01_C
class ABP_PS_BlackStalkerProjectileExplosion_01_01_C : public ABP_MindControlLightning_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*              PS_BlackStalkerProjectile_Explosion_02_01;         // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPostProcessComponent*                 PP_ChromaticAberration;                            // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      ChromaticAberration;                               // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_0_time_7ECF32494B5D9229550A1093D7EAED03;  // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_7ECF32494B5D9229550A1093D7EAED03; // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_DF2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PPMaterial;                                        // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PPDynamicMaterial;                                 // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PS_BlackStalkerProjectileExplosion_01_01_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__TurnOffLightning__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void TurnOff();
	void ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue);
};

}


