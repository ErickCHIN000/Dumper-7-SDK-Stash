#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BriefReturnFromBlackFade.BriefReturnFromBlackFade_C
// (None)

class UClass* UBriefReturnFromBlackFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BriefReturnFromBlackFade_C");

	return Clss;
}


// BriefReturnFromBlackFade_C BriefReturnFromBlackFade.Default__BriefReturnFromBlackFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBriefReturnFromBlackFade_C* UBriefReturnFromBlackFade_C::GetDefaultObj()
{
	static class UBriefReturnFromBlackFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBriefReturnFromBlackFade_C*>(UBriefReturnFromBlackFade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image_0                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_1(class UImage* Image_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_1");

	Params::UBriefReturnFromBlackFade_C_SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_1_Params Parms{};

	Parms.Image_0 = Image_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image_0                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_0(class UImage* Image_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_0");

	Params::UBriefReturnFromBlackFade_C_SequenceEvent__ENTRYPOINTBriefReturnFromBlackFade_0_Params Parms{};

	Parms.Image_0 = Image_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.Image_0_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image_0                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::Image_0_Event_1(class UImage* Image_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "Image_0_Event_1");

	Params::UBriefReturnFromBlackFade_C_Image_0_Event_1_Params Parms{};

	Parms.Image_0 = Image_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBriefReturnFromBlackFade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.OnFadeEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefReturnFromBlackFade_C::OnFadeEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "OnFadeEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "Tick");

	Params::UBriefReturnFromBlackFade_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.Image_0_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image_0                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::Image_0_Event_0(class UImage* Image_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "Image_0_Event_0");

	Params::UBriefReturnFromBlackFade_C_Image_0_Event_0_Params Parms{};

	Parms.Image_0 = Image_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.ExecuteUbergraph_BriefReturnFromBlackFade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UImage*                      K2Node_CustomEvent_Image_0_1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_CustomEvent_Image_0                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefReturnFromBlackFade_C::ExecuteUbergraph_BriefReturnFromBlackFade(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UImage* K2Node_CustomEvent_Image_0_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UImage* K2Node_CustomEvent_Image_0, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "ExecuteUbergraph_BriefReturnFromBlackFade");

	Params::UBriefReturnFromBlackFade_C_ExecuteUbergraph_BriefReturnFromBlackFade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Image_0_1 = K2Node_CustomEvent_Image_0_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Image_0 = K2Node_CustomEvent_Image_0;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.FadeAnimHalfway__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefReturnFromBlackFade_C::FadeAnimHalfway__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "FadeAnimHalfway__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.FadeAnimCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefReturnFromBlackFade_C::FadeAnimCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "FadeAnimCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefReturnFromBlackFade.BriefReturnFromBlackFade_C.FadeCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefReturnFromBlackFade_C::FadeCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefReturnFromBlackFade_C", "FadeCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


