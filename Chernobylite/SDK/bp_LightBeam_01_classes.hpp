#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0x26E - 0x220)
// BlueprintGeneratedClass bp_LightBeam_01.bp_LightBeam_01_C
class Abp_LightBeam_01_C : public AActor
{
public:
	class UBillboardComponent*                   UISprite;                                          // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  GodRayMesh;                                        // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Light;                                             // 0x230(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Width;                                             // 0x238(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Length;                                            // 0x23C(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x248(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0x258(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_distance;                                     // 0x25C(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Animated;                                          // 0x260(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomStream                         RandomTime;                                        // 0x264(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	bool                                         SpotLight;                                         // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_light_for_rotation;                            // 0x26D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Abp_LightBeam_01_C* GetDefaultObj();

	void SetBrightness(float NewBrightness);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
};

}


