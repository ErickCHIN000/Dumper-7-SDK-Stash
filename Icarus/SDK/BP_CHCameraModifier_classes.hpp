#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_CHCameraModifier.BP_CHCameraModifier_C
class UBP_CHCameraModifier_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UBP_CHCameraModifier_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, TScriptInterface<class IICameraInterface_C> K2Node_DynamicCast_AsICamera_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return);
};

}


