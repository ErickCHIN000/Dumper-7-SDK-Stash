#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass bpn_footstepShake.bpn_footstepShake_C
class Ubpn_footstepShake_C : public UAnimNotify
{
public:
	float                                        ShakeScale;                                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1411[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ShakeClass;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubpn_footstepShake_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UMatineeCameraShake* CallFunc_StartMatineeCameraShake_ReturnValue);
};

}


