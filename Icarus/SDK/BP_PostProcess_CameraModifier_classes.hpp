#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_PostProcess_CameraModifier.BP_PostProcess_CameraModifier_C
class UBP_PostProcess_CameraModifier_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UBP_PostProcess_CameraModifier_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, TArray<class UBoxComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBoxComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}


