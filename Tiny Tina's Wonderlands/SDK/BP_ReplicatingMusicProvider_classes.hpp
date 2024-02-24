#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x528 - 0x500)
// BlueprintGeneratedClass BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C
class ABP_ReplicatingMusicProvider_C : public AOakMusicProvider
{
public:
	class UWwiseEvent*                           OverrideMusicEvent;                                // 0x500(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseState*                           OverrideMusicState;                                // 0x508(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                OverridePlaybackInstance;                          // 0x510(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_ReplicatingMusicProvider_C* GetDefaultObj();

	void StopOverrideMusic(class UWwiseEvent* OptionalStopEvent, class UWwiseState* OptionalSetState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void CheckClientInitialState(bool* bDidStartOverrideMusic, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void SetOverrideMusicState(class UWwiseState* WwiseState, bool CallFunc_IsValid_ReturnValue);
	void PlayOverrideMusicEvent(class UWwiseEvent* WwiseEvent, bool CallFunc_IsValid_ReturnValue, class UWwiseEvent* CallFunc_GetPlayingEvent_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
	void UserConstructionScript();
};

}


