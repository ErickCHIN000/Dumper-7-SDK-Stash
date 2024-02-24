#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_PlaySequence.CF_PlaySequence_C
// (None)

class UClass* UCF_PlaySequence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_PlaySequence_C");

	return Clss;
}


// CF_PlaySequence_C CF_PlaySequence.Default__CF_PlaySequence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_PlaySequence_C* UCF_PlaySequence_C::GetDefaultObj()
{
	static class UCF_PlaySequence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_PlaySequence_C*>(UCF_PlaySequence_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_PlaySequence.CF_PlaySequence_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_PlaySequence_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_PlaySequence_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_PlaySequence.CF_PlaySequence_C.OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_PlaySequence_C::OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_PlaySequence_C", "OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_PlaySequence.CF_PlaySequence_C.ExecuteUbergraph_CF_PlaySequence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           CallFunc_GetCheatOverlay_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelSequencesRowHandle    CallFunc_MakeLevelSequences_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FLevelSequencesData         CallFunc_GetLevelSequencesStruct_LevelSequences                  (None)
// enum class EValid                  CallFunc_GetLevelSequencesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequence*              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_PlaySequence_C::ExecuteUbergraph_CF_PlaySequence(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, int32 CallFunc_Add_IntInt_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLevelSequencesRowHandle& CallFunc_MakeLevelSequences_ReturnValue, const struct FLevelSequencesData& CallFunc_GetLevelSequencesStruct_LevelSequences, enum class EValid CallFunc_GetLevelSequencesStruct_Paths, class FText CallFunc_GetText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ULevelSequence* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_PlaySequence_C", "ExecuteUbergraph_CF_PlaySequence");

	Params::UCF_PlaySequence_C_ExecuteUbergraph_CF_PlaySequence_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCheatOverlay_ReturnValue = CallFunc_GetCheatOverlay_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLevelSequences_ReturnValue = CallFunc_MakeLevelSequences_ReturnValue;
	Parms.CallFunc_GetLevelSequencesStruct_LevelSequences = CallFunc_GetLevelSequencesStruct_LevelSequences;
	Parms.CallFunc_GetLevelSequencesStruct_Paths = CallFunc_GetLevelSequencesStruct_Paths;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


