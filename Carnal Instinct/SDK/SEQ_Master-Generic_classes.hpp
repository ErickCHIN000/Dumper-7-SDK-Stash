#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// BlueprintGeneratedClass SEQ_Master-Generic.SEQ_Master-Generic_C
class ASEQ_MasterMinusGeneric_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequence*                        PlayedSequence;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           W_InGameRef;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASEQ_MasterMinusGeneric_C* GetDefaultObj();

	void PlaySEQ(bool HidePlayer_, class ULevelSequence* LevelSequence);
	void EndSeq();
	void EndSeq2();
	void ExecuteUbergraph_SEQ_MasterMinusGeneric(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_HidePlayer_, class ULevelSequence* K2Node_CustomEvent_LevelSequence, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1);
};

}


