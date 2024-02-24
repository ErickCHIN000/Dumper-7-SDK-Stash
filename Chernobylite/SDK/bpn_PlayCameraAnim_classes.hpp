#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x54 - 0x38)
// BlueprintGeneratedClass bpn_PlayCameraAnim.bpn_PlayCameraAnim_C
class Ubpn_PlayCameraAnim_C : public UAnimNotify
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendInTime;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendOutTime;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Rate;                                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubpn_PlayCameraAnim_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AMainPawnCpp* K2Node_DynamicCast_AsMain_Pawn_Cpp, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue);
};

}


