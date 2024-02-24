#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass Audio_Notify_BodyFall.Audio_Notify_BodyFall_C
class UAudio_Notify_BodyFall_C : public UAudio_Notify_Base_C
{
public:
	class FName                                  Bone_Name;                                         // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAudio_Notify_BodyFall_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_PlayBodyfallAudio_Return, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


