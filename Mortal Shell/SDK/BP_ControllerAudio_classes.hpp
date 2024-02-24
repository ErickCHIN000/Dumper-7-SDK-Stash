#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x2D1 - 0x220)
// BlueprintGeneratedClass BP_ControllerAudio.BP_ControllerAudio_C
class ABP_ControllerAudio_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  TextRender_Debug_Vibration;                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender_Debug_Sound;                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard_Sound;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Sound_FallOff;                              // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Sound_InnerRadius;                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Vibration_FallOff;                          // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Vibration_InnerRadius;                      // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Root;                                        // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_ControllerVibration;                         // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_ControllerSound;                             // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugActive;                                       // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AttachToOwner;                                     // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AttachToComponent;                                 // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3182[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ComponentAttachment;                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  SocketAttachment;                                  // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsLoop;                                            // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DontPlayOnBeginPlay;                               // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class Enum_ControllerAudio_Type         SoundType;                                         // 0x292(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3187[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Sound_Volume;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Sound_Pitch;                                       // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Sound_StartTime;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_318C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundConcurrency*                     SoundConcurrencySettings;                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         VibrationType;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3192[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Vibration;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vibration_Volume;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Vibration_Pitch;                                   // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseNormalDebugText;                                // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ControllerAudio_C* GetDefaultObj();

	void UseNormalText();
	void SetSoundConcurrency(bool CallFunc_IsValid_ReturnValue, TSet<class USoundConcurrency*> K2Node_MakeSet_Set);
	void SetPitch();
	void SetVolume();
	void DestroyControllerAudio();
	void HandlePlaySound(class UAudioComponent* Audio, float StartTime, bool CallFunc_Not_PreBool_ReturnValue);
	void FadeInSound(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void FadeOutSound(bool Destroy_, float FadeOutDuration, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void SetSoundVolume(float NewVolumeMultiplier, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AdjustSoundVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupVibration_3D();
	void SetupVibration_2D();
	void SetupSound_2D();
	void SetupSound_3D();
	void Debug_NoVibration_Text(class FText CallFunc_Conv_StringToText_ReturnValue);
	void Debug_NoSound_Text(class FText CallFunc_Conv_StringToText_ReturnValue);
	void DebugVibration_2D_Text(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void DebugVibration_3D_Text(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void DebugSound_3D_Text(float CallFunc_GetLifeSpan_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue);
	void DebugSound_2D_Text(float CallFunc_GetLifeSpan_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetSoundLifeSpan(bool CallFunc_Not_PreBool_ReturnValue);
	void SetVibrationLifeSpan(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldEnableDebug(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDebugDualSenseAudio_ReturnValue);
	void DebugSpheres(class UAudioComponent* Audio, class USphereComponent* Radius, class USphereComponent* Falloff, class USphereComponent* Local_FallOff, class USphereComponent* Local_Radius, class UAudioComponent* Local_Audio, const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue);
	void HandleAttachment(class AActor* CallFunc_GetOwner_ReturnValue);
	void ReceiveBeginPlay();
	void StopAudio();
	void ExecuteUbergraph_BP_ControllerAudio(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


