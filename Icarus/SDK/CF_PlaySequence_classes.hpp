#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x300 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_PlaySequence.CF_PlaySequence_C
class UCF_PlaySequence_C : public UCF_BaseString_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_PlaySequence_C* GetDefaultObj();

	void Execute();
	void OnFinished();
	void ExecuteUbergraph_CF_PlaySequence(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, int32 CallFunc_Add_IntInt_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLevelSequencesRowHandle& CallFunc_MakeLevelSequences_ReturnValue, const struct FLevelSequencesData& CallFunc_GetLevelSequencesStruct_LevelSequences, enum class EValid CallFunc_GetLevelSequencesStruct_Paths, class FText CallFunc_GetText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ULevelSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue);
};

}


