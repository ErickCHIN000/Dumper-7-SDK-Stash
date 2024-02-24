#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingScreenWidget.LoadingScreenWidget_C
// (None)

class UClass* ULoadingScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenWidget_C");

	return Clss;
}


// LoadingScreenWidget_C LoadingScreenWidget.Default__LoadingScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingScreenWidget_C* ULoadingScreenWidget_C::GetDefaultObj()
{
	static class ULoadingScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenWidget_C*>(ULoadingScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingScreenWidget.LoadingScreenWidget_C. Tip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Array_Random_OutItem                                    (None)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::_Tip(class FText CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UTexture2D* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", " Tip");

	Params::ULoadingScreenWidget_C__Tip_Params Parms{};

	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.FadeOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 FadeFinished                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::FadeOut(FDelegateProperty_& FadeFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "FadeOut");

	Params::ULoadingScreenWidget_C_FadeOut_Params Parms{};

	Parms.FadeFinished = FadeFinished;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.FadeIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 FadeFinished                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::FadeIn(FDelegateProperty_& FadeFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "FadeIn");

	Params::ULoadingScreenWidget_C_FadeIn_Params Parms{};

	Parms.FadeFinished = FadeFinished;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.ExecuteUbergraph_LoadingScreenWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidget_C::ExecuteUbergraph_LoadingScreenWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "ExecuteUbergraph_LoadingScreenWidget");

	Params::ULoadingScreenWidget_C_ExecuteUbergraph_LoadingScreenWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.FadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::FadeOutFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "FadeOutFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenWidget.LoadingScreenWidget_C.FadeInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoadingScreenWidget_C::FadeInFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenWidget_C", "FadeInFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


