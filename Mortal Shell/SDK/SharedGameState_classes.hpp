#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x435 - 0x3C0)
// BlueprintGeneratedClass SharedGameState.SharedGameState_C
class ASharedGameState_C : public ADHGameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UKeyboardModeNotifierComponent_C*      KeyboardModeNotifierComponent;                     // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         GameIsOver;                                        // 0x3D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsKeyboardMode;                                    // 0x3D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2218[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAmbientSound*                         CurrentlyPlayingMusic;                             // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         CurrentlyPlayingAmbientSFX;                        // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         PreviouslyPlayedMusic;                             // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CurrentMusicBaseObject;                            // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CurrentAmbientBaseObject;                          // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnKeyboardModeChanged;                             // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, Deprecated, BlueprintCallable)
	enum class Enum_UI_InputType                 InputType;                                         // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MouseIdle_Timer;                                   // 0x420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Mouse_ForceHide;                                   // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_222C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mouse_Current;                                     // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_Desired;                                     // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mouse_IsMoving;                                    // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASharedGameState_C* GetDefaultObj();

	void GetForceHideCursor(bool* Value);
	void GetIsMouseMoving(bool* IsMoving);
	void IsInKeyboardMode(bool* InKeyboardMode);
	void MouseIdleResetTimer(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void SetAudio(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void HandleKeyboardModeChange(bool IsKeyboardMode, bool Local_KeyboardMode, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void OnRep_GameIsOver(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void ReceiveBeginPlay();
	void GameOver();
	void MatchStarted();
	void StartNewMusic(class USoundBase* NewMusic, float FadeInDuration, float FadeInVolumeLevel, float FadeOutDuration, float FadeOutVolumeLevel);
	void PlayIntroMusic(class USoundBase* NewMusic, float FadeInDuration, float FadeInVolumeLevel, float FadeOutVolumeLevel, float FadeOutDuration);
	void MusicFinished();
	void StartNewAmbientFX(class USoundBase* NewFX, float FadeInDuration, float FadeInVolumeLevel, float FadeOutDuration, float FadeOutVolumeLevel);
	void SetKeyboardMode(bool IsKeyboardMode);
	void InputDeviceChanged(enum class ESwitcherooInputDevice ActiveInputDevice);
	void AudioSetup();
	void Idle_Mouse_Bind();
	void ReceiveTick(float DeltaSeconds);
	void Idle_Mouse_Set();
	void SetForceHideCursor(bool Value);
	void InputDeviceTypeChanged(enum class ESwitcherooInputDeviceType ActiveInputDeviceType);
	void StopMusic();
	void ExecuteUbergraph_SharedGameState(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class USoundBase* K2Node_CustomEvent_NewMusic_1, float K2Node_CustomEvent_FadeInDuration_2, float K2Node_CustomEvent_FadeInVolumeLevel_2, float K2Node_CustomEvent_FadeOutDuration_2, float K2Node_CustomEvent_FadeOutVolumeLevel_2, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundBase* K2Node_CustomEvent_NewMusic, float K2Node_CustomEvent_FadeInDuration_1, float K2Node_CustomEvent_FadeInVolumeLevel_1, float K2Node_CustomEvent_FadeOutVolumeLevel_1, float K2Node_CustomEvent_FadeOutDuration_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class USoundBase* K2Node_CustomEvent_NewFX, float K2Node_CustomEvent_FadeInDuration, float K2Node_CustomEvent_FadeInVolumeLevel, float K2Node_CustomEvent_FadeOutDuration, float K2Node_CustomEvent_FadeOutVolumeLevel, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_IsKeyboardMode, enum class ESwitcherooInputDevice K2Node_CustomEvent_ActiveInputDevice, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, class USwitcherooSettings* CallFunc_GetSwitcherooSettings_ReturnValue, enum class EBoolean CallFunc_IfConsole_OutResult, enum class ESwitcherooInputDevice CallFunc_GetDefaultInputDevice_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool K2Node_Event_Value, enum class ESwitcherooInputDeviceType K2Node_CustomEvent_ActiveInputDeviceType, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2);
	void OnKeyboardModeChanged__DelegateSignature(bool bKeyboardMode);
};

}


