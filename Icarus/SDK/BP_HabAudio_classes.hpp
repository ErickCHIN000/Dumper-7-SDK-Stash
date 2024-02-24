#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass BP_HabAudio.BP_HabAudio_C
class ABP_HabAudio_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FMusicSubsystemConfig                 MusicConfig;                                       // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	bool                                         HabAudioEnabled;                                   // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   DioramaAmbience;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HabAudio_C* GetDefaultObj();

	void ClearDioramaAmbience(bool IsEndingPlay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetDioramaAmbience(class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetHabAudioEnabled(bool Enabled);
	void ExecuteUbergraph_BP_HabAudio(int32 EntryPoint, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsDedicatedServer_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, bool K2Node_CustomEvent_Enabled, class UMusicSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1);
};

}


