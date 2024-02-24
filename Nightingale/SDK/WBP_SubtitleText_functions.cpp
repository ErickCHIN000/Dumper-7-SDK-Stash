#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SubtitleText.WBP_SubtitleText_C
// (None)

class UClass* UWBP_SubtitleText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubtitleText_C");

	return Clss;
}


// WBP_SubtitleText_C WBP_SubtitleText.Default__WBP_SubtitleText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubtitleText_C* UWBP_SubtitleText_C::GetDefaultObj()
{
	static class UWBP_SubtitleText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubtitleText_C*>(UWBP_SubtitleText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubtitleText.WBP_SubtitleText_C.OnSubtitleSetFromManager
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_GetShowSubtitles_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubtitleText_C::OnSubtitleSetFromManager(class FText InText, bool CallFunc_GetShowSubtitles_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "OnSubtitleSetFromManager");

	Params::UWBP_SubtitleText_C_OnSubtitleSetFromManager_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_GetShowSubtitles_ReturnValue = CallFunc_GetShowSubtitles_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.OnSubtitlesEnded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              DialogueNodeID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubtitleText_C::OnSubtitlesEnded(class UDialogue* Dialogue, int32 DialogueNodeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "OnSubtitlesEnded");

	Params::UWBP_SubtitleText_C_OnSubtitlesEnded_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.DialogueNodeID = DialogueNodeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.OnSubtitlesStarted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              DialogueNodeID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowSubtitles_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTextForId_OutText                                    (None)
// bool                               CallFunc_GetTextForId_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSpeakerNameForId_OutText                             (None)
// bool                               CallFunc_GetSpeakerNameForId_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_SubtitleText_C::OnSubtitlesStarted(class UDialogue* Dialogue, int32 DialogueNodeID, bool CallFunc_GetShowSubtitles_ReturnValue, class FText CallFunc_GetTextForId_OutText, bool CallFunc_GetTextForId_ReturnValue, class FText CallFunc_GetSpeakerNameForId_OutText, bool CallFunc_GetSpeakerNameForId_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "OnSubtitlesStarted");

	Params::UWBP_SubtitleText_C_OnSubtitlesStarted_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.DialogueNodeID = DialogueNodeID;
	Parms.CallFunc_GetShowSubtitles_ReturnValue = CallFunc_GetShowSubtitles_ReturnValue;
	Parms.CallFunc_GetTextForId_OutText = CallFunc_GetTextForId_OutText;
	Parms.CallFunc_GetTextForId_ReturnValue = CallFunc_GetTextForId_ReturnValue;
	Parms.CallFunc_GetSpeakerNameForId_OutText = CallFunc_GetSpeakerNameForId_OutText;
	Parms.CallFunc_GetSpeakerNameForId_ReturnValue = CallFunc_GetSpeakerNameForId_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SubtitleText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SubtitleText_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.OnSetSubtitleFromManager
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SubtitleText_C::OnSetSubtitleFromManager(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "OnSetSubtitleFromManager");

	Params::UWBP_SubtitleText_C_OnSetSubtitleFromManager_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubtitleText.WBP_SubtitleText_C.ExecuteUbergraph_WBP_SubtitleText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioDialogueSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_InText                                              (ConstParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioDialogueSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SubtitleText_C::ExecuteUbergraph_WBP_SubtitleText(int32 EntryPoint, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_Event_InText, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubtitleText_C", "ExecuteUbergraph_WBP_SubtitleText");

	Params::UWBP_SubtitleText_C_ExecuteUbergraph_WBP_SubtitleText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_InText = K2Node_Event_InText;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


