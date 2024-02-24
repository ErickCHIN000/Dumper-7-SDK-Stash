#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Storyteller_Credits.BP_Storyteller_Credits_C
// (Actor)

class UClass* ABP_Storyteller_Credits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Storyteller_Credits_C");

	return Clss;
}


// BP_Storyteller_Credits_C BP_Storyteller_Credits.Default__BP_Storyteller_Credits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Storyteller_Credits_C* ABP_Storyteller_Credits_C::GetDefaultObj()
{
	static class ABP_Storyteller_Credits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Storyteller_Credits_C*>(ABP_Storyteller_Credits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Progress_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_Storyteller_Credits_C::Timer_Progress_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "Timer_Progress_Set");

	Params::ABP_Storyteller_Credits_C_Timer_Progress_Set_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_End_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_Storyteller_Credits_C::Timer_End_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "Timer_End_Set");

	Params::ABP_Storyteller_Credits_C_Timer_End_Set_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Run_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_Storyteller_Credits_C::Timer_Run_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "Timer_Run_Set");

	Params::ABP_Storyteller_Credits_C_Timer_Run_Set_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Timer_Begin_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_Storyteller_Credits_C::Timer_Begin_Set(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "Timer_Begin_Set");

	Params::ABP_Storyteller_Credits_C_Timer_Begin_Set_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.DisplayText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void ABP_Storyteller_Credits_C::DisplayText(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "DisplayText");

	Params::ABP_Storyteller_Credits_C_DisplayText_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_Run_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_Run_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_Run_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StartStoryteller
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                TextToDisplay                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Immediate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Storyteller_Credits_C::StartStoryteller(TArray<class FText>& TextToDisplay, bool Immediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StartStoryteller");

	Params::ABP_Storyteller_Credits_C_StartStoryteller_Params Parms{};

	Parms.TextToDisplay = TextToDisplay;
	Parms.Immediate = Immediate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.FinishCurrentLineNow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::FinishCurrentLineNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "FinishCurrentLineNow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_Begin_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_Begin_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_Begin_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.OnFadeOutEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::OnFadeOutEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "OnFadeOutEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_Run_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_Run_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_Run_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.StoryTeller_Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::StoryTeller_Progress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "StoryTeller_Progress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.ExecuteUbergraph_BP_Storyteller_Credits
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_CustomEvent_TextToDisplay                                 (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Immediate                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMainMenuInterface_C>K2Node_DynamicCast_AsMain_Menu_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_Storyteller_Black_Background_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMainMenuInterface_C>K2Node_DynamicCast_AsMain_Menu_Interface_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Storyteller_Credits_C::ExecuteUbergraph_BP_Storyteller_Credits(int32 EntryPoint, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_CustomEvent_TextToDisplay, bool K2Node_CustomEvent_Immediate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_Storyteller_Black_Background_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "ExecuteUbergraph_BP_Storyteller_Credits");

	Params::ABP_Storyteller_Credits_C_ExecuteUbergraph_BP_Storyteller_Credits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_TextToDisplay = K2Node_CustomEvent_TextToDisplay;
	Parms.K2Node_CustomEvent_Immediate = K2Node_CustomEvent_Immediate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_Interface = K2Node_DynamicCast_AsMain_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMain_Menu_Interface_1 = K2Node_DynamicCast_AsMain_Menu_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.Storyteller_Loaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::Storyteller_Loaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "Storyteller_Loaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller_Credits.BP_Storyteller_Credits_C.AllTextDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_Credits_C::AllTextDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_Credits_C", "AllTextDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


