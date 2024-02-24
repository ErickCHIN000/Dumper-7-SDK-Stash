#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_QuestCompleted.wid_QuestCompleted_C
// (None)

class UClass* UWid_QuestCompleted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_QuestCompleted_C");

	return Clss;
}


// wid_QuestCompleted_C wid_QuestCompleted.Default__wid_QuestCompleted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_QuestCompleted_C* UWid_QuestCompleted_C::GetDefaultObj()
{
	static class UWid_QuestCompleted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_QuestCompleted_C*>(UWid_QuestCompleted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_QuestCompleted.wid_QuestCompleted_C.GetSoundToPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkAudioEvent*               Event                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_QuestCompleted_C::GetSoundToPlay(class UAkAudioEvent** Event, bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "GetSoundToPlay");

	Params::UWid_QuestCompleted_C_GetSoundToPlay_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasSuccessfull                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        QuestName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CustomTitle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CustomContent                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWid_QuestCompleted_C::Init(bool WasSuccessfull, class FText QuestName, class FText CustomTitle, class FText CustomContent, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "Init");

	Params::UWid_QuestCompleted_C_Init_Params Parms{};

	Parms.WasSuccessfull = WasSuccessfull;
	Parms.QuestName = QuestName;
	Parms.CustomTitle = CustomTitle;
	Parms.CustomContent = CustomContent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.Activate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        QuestName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UAkAudioEvent*               CallFunc_GetSoundToPlay_Event                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_QuestCompleted_C::Activate(bool Success, class FText QuestName, float Delay, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UAkAudioEvent* CallFunc_GetSoundToPlay_Event, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "Activate");

	Params::UWid_QuestCompleted_C_Activate_Params Parms{};

	Parms.Success = Success;
	Parms.QuestName = QuestName;
	Parms.Delay = Delay;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetSoundToPlay_Event = CallFunc_GetSoundToPlay_Event;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_QuestCompleted_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.DelayedHidePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_QuestCompleted_C::DelayedHidePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "DelayedHidePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.OnAnimationFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_QuestCompleted_C::OnAnimationFinished_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "OnAnimationFinished_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_QuestCompleted.wid_QuestCompleted_C.ExecuteUbergraph_wid_QuestCompleted
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_QuestCompleted_C::ExecuteUbergraph_wid_QuestCompleted(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_QuestCompleted_C", "ExecuteUbergraph_wid_QuestCompleted");

	Params::UWid_QuestCompleted_C_ExecuteUbergraph_wid_QuestCompleted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


