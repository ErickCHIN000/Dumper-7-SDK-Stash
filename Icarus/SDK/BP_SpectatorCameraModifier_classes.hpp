#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_SpectatorCameraModifier.BP_SpectatorCameraModifier_C
class UBP_SpectatorCameraModifier_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UBP_SpectatorCameraModifier_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, class ABP_CinematicPawn_C* CallFunc_GetCinematicPawn_ReturnValue, TScriptInterface<class IICameraInterface_C> K2Node_DynamicCast_AsICamera_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return);
};

}


