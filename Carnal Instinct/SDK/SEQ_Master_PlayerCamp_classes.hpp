#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// BlueprintGeneratedClass SEQ_Master_PlayerCamp.SEQ_Master_PlayerCamp_C
class ASEQ_Master_PlayerCamp_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUserWidget*                           W_InGameRef;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerCamp_C*                      WB_PlayerCamp;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   SequenceRef;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASEQ_Master_PlayerCamp_C* GetDefaultObj();

	void PlaySEQ();
	void CameraBed();
	void CameraTent();
	void CameraStash();
	void CameraFollowerCamp();
	void CameraWalkway();
	void CameraAlchemy();
	void CameraDefences();
	void CameraCooking();
	void CameraObelisk();
	void CameraCraftsman();
	void CameraBreeding();
	void KillSEQ();
	void ExecuteUbergraph_SEQ_Master_PlayerCamp(int32 EntryPoint, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, bool Temp_bool_IsClosed_Variable, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_4, class UWB_InGame_C* CallFunc_Array_Get_Item, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_PlayerCamp_C* CallFunc_Create_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_6, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_7, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_9, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_11);
};

}


