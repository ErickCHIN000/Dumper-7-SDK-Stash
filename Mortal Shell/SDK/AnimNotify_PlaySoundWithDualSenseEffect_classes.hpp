#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D (0x95 - 0x58)
// BlueprintGeneratedClass AnimNotify_PlaySoundWithDualSenseEffect.AnimNotify_PlaySoundWithDualSenseEffect_C
class UAnimNotify_PlaySoundWithDualSenseEffect_C : public UDHAnimNotify_PlaySoundAndRegister
{
public:
	bool                                         SpawnDualSenseAudio;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_ControllerAudio_Type         SoundType;                                         // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D00[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SoundVolume;                                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomSound;                                    // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CustomSound;                                       // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         VibrationType;                                     // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VibrationVolume;                                   // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomVibration;                                // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CustomVibration;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DualSenseUseSocketLocation;                        // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DualSenseSocket;                                   // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DualSenseAttachToComponent;                        // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimNotify_PlaySoundWithDualSenseEffect_C* GetDefaultObj();

	void OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned, class USoundBase* Local_SoundBase, const struct FVector& Local_Location, class AActor* Local_Owner, class UAudioComponent* Local_Audio, class USkeletalMeshComponent* Local_Mesh, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class USoundBase* K2Node_Select_Default_1);
};

}


