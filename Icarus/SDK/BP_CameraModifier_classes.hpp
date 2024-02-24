#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_CameraModifier.BP_CameraModifier_C
class UBP_CameraModifier_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UBP_CameraModifier_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, TScriptInterface<class IICameraInterface_C> K2Node_DynamicCast_AsICamera_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return, class AActor* CallFunc_GetViewTarget_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}


