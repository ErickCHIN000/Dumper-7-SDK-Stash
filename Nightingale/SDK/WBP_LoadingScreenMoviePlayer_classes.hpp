#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x530 - 0x4E0)
// WidgetBlueprintGeneratedClass WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C
class UWBP_LoadingScreenMoviePlayer_C : public UNWXLoadingScreenMoviePlayerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_button_base_C*                    bu_Skip;                                           // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Black_Foreground;                              // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MediaPlayerImage;                                  // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SubtitleText_C*                   WBP_SubtitleText;                                  // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                OverrideMovieMediaSourceURL;                       // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       AudioFadeDownTime;                                 // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LoadingScreenMoviePlayer_C* GetDefaultObj();

	void StopAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	void MovieDoneAndRemove();
	void EnableSkipButton();
	void StartAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, float CallFunc_GetMovieVolume_ReturnValue);
	void OnInitialized();
	void Construct();
	void PlayMedia();
	void OnMediaOpened(const class FString& OpenedUrl);
	void BndEvt__WBP_RevealTrailerVideoWidget_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void Destruct();
	void OnMediaEndReached();
	void PreConstruct(bool IsDesignTime);
	void OnMediaOpenFailed(const class FString& FailedUrl);
	void ExecuteUbergraph_WBP_LoadingScreenMoviePlayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& K2Node_CustomEvent_OpenedUrl, bool CallFunc_GetIsEnabled_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_Play_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


