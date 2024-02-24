#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DialogueLine.UMG_DialogueLine_C
// (None)

class UClass* UUMG_DialogueLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DialogueLine_C");

	return Clss;
}


// UMG_DialogueLine_C UMG_DialogueLine.Default__UMG_DialogueLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DialogueLine_C* UUMG_DialogueLine_C::GetDefaultObj()
{
	static class UUMG_DialogueLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DialogueLine_C*>(UUMG_DialogueLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DialogueLine.UMG_DialogueLine_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              AudioLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceQuickFade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DialogueLine_C::Start(class FText Name, class FText Dialogue, float AudioLength, bool ForceQuickFade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DialogueLine_C", "Start");

	Params::UUMG_DialogueLine_C_Start_Params Parms{};

	Parms.Name = Name;
	Parms.Dialogue = Dialogue;
	Parms.AudioLength = AudioLength;
	Parms.ForceQuickFade = ForceQuickFade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DialogueLine.UMG_DialogueLine_C.ForceFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DialogueLine_C::ForceFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DialogueLine_C", "ForceFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DialogueLine.UMG_DialogueLine_C.ExecuteUbergraph_UMG_DialogueLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          (None)
// class FText                        K2Node_CustomEvent_Dialogue                                      (None)
// float                              K2Node_CustomEvent_AudioLength                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ForceQuickFade                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DialogueLine_C::ExecuteUbergraph_UMG_DialogueLine(int32 EntryPoint, class FText K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Dialogue, float K2Node_CustomEvent_AudioLength, bool K2Node_CustomEvent_ForceQuickFade, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float Temp_wildcard_Variable, class UWidgetAnimation* Temp_wildcard_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DialogueLine_C", "ExecuteUbergraph_UMG_DialogueLine");

	Params::UUMG_DialogueLine_C_ExecuteUbergraph_UMG_DialogueLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Dialogue = K2Node_CustomEvent_Dialogue;
	Parms.K2Node_CustomEvent_AudioLength = K2Node_CustomEvent_AudioLength;
	Parms.K2Node_CustomEvent_ForceQuickFade = K2Node_CustomEvent_ForceQuickFade;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_2 = CallFunc_IsAnimationPlaying_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


