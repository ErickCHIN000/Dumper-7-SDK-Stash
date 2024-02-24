#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass bp_CompassDirections.bp_CompassDirections_C
class Abp_CompassDirections_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            North;                                             // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            South;                                             // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            West;                                              // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            East;                                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_CompassDirections_C* GetDefaultObj();

	struct FVector GetWest(const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	struct FVector GetSouth(const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	struct FVector GetEast(const struct FVector& CallFunc_GetActorRightVector_ReturnValue);
	struct FVector GetNorth(const struct FVector& CallFunc_GetActorForwardVector_ReturnValue);
};

}


