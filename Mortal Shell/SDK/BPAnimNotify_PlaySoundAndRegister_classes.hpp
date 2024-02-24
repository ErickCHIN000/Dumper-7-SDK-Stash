#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0xAD - 0x58)
// BlueprintGeneratedClass BPAnimNotify_PlaySoundAndRegister.BPAnimNotify_PlaySoundAndRegister_C
class UBPAnimNotify_PlaySoundAndRegister_C : public UDHAnimNotify_PlaySoundAndRegister
{
public:
	bool                                         SpawnDualSenseAudio;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DualSense_IsFull2D;                                // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Full2DSound;                                       // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Full2D_Volume;                                     // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Full2D_Pitch;                                      // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Full2D_StartTime;                                  // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         SoundType;                                         // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SoundVolume;                                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomSound;                                    // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CustomSound;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         VibrationType;                                     // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VibrationVolume;                                   // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomVibration;                                // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CustomVibration;                                   // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DualSenseUseSocket;                                // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DualSenseSocket;                                   // 0xA4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DualSenseAttachToComponent;                        // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnimNotify_PlaySoundAndRegister_C* GetDefaultObj();

	void OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned, class USoundBase* Local_SoundBase, class AActor* Local_Owner, class UAudioComponent* Local_Audio, class USkeletalMeshComponent* Local_Mesh, const struct FVector& Local_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio_1, bool K2Node_DynamicCast_bSuccess_1, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


