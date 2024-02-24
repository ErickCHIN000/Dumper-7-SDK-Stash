#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2EC - 0x278)
// BlueprintGeneratedClass ba_rad_RadioactiveZoneBox_01.ba_rad_RadioactiveZoneBox_01_C
class Aba_rad_RadioactiveZoneBox_01_C : public Aba_rad_RadioactiveZone_01_C
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CubeStaticMesh;                                    // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                         BoxTriggerInternal;                                // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                         BoxTrigger;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               Box_Extents;                                       // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RadiationMaterialInstanceDynamicReference;         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                  Destination_points;                                // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                Destination_delays;                                // 0x2C0(0x10)(Edit, BlueprintVisible)
	bool                                         Randomize_movement;                                // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A08[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomListNumber;                                  // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartPoint;                                        // 0x2D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_count;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_rad_RadioactiveZoneBox_01_C* GetDefaultObj();

	void GetRadiationForWorldPos(const struct FVector& World_Position, float* Radiation, float InverseInnerShapeScale, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsInEditor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1);
};

}


