#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x359 - 0x312)
// BlueprintGeneratedClass Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C
class AUsable_HornedRock_CutsceneStarter_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_1002[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ALevelSequenceActor>    Cutscene;                                          // 0x328(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Audio_CinematicAudioTrigger_C*     CutsceneAudioBP;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentlyPlaying;                                // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUsable_HornedRock_CutsceneStarter_C* GetDefaultObj();

	void Usable_HornedRock_CutsceneStarter_AutoGenFunc(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void StartCutscene();
	void ExecuteUbergraph_Usable_HornedRock_CutsceneStarter(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
};

}


