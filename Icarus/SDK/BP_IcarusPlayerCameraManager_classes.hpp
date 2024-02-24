#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2828 - 0x2820)
// BlueprintGeneratedClass BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C
class ABP_IcarusPlayerCameraManager_C : public AIcarusPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2820(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_IcarusPlayerCameraManager_C* GetDefaultObj();

	void GetThirdPerson(bool* ThirdPerson, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsThirdPerson_ReturnValue);
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, class UMeshComponent* TargetMesh, bool ThirdPersonUpdated, class UProjectileMovementComponent* ProjectileComponent, class ABP_IcarusPlayerCharacterSurvival_C* Player);
	void UpdateRotationLimits();
	void ExecuteUbergraph_BP_IcarusPlayerCameraManager(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetThirdPerson_ThirdPerson);
};

}


