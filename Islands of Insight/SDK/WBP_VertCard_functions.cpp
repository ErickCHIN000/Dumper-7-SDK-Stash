#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_VertCard.WBP_VertCard_C
// (None)

class UClass* UWBP_VertCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_VertCard_C");

	return Clss;
}


// WBP_VertCard_C WBP_VertCard.Default__WBP_VertCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_VertCard_C* UWBP_VertCard_C::GetDefaultObj()
{
	static class UWBP_VertCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_VertCard_C*>(UWBP_VertCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_VertCard.WBP_VertCard_C.UpdateDisplayByText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sqrt_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UWBP_VertCard_C::UpdateDisplayByText(const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "UpdateDisplayByText");

	Params::UWBP_VertCard_C_UpdateDisplayByText_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Sqrt_ReturnValue = CallFunc_Sqrt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VertCard.WBP_VertCard_C.GetText_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWBP_VertCard_C::GetText_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "GetText_1");

	Params::UWBP_VertCard_C_GetText_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VertCard.WBP_VertCard_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWBP_VertCard_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "GetText_0");

	Params::UWBP_VertCard_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VertCard.WBP_VertCard_C.GetBrush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_VertCard_C::GetBrush_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "GetBrush_0");

	Params::UWBP_VertCard_C_GetBrush_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VertCard.WBP_VertCard_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_VertCard_C::Init(const struct FSlateBrush& Image, class FText Number, class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "Init");

	Params::UWBP_VertCard_C_Init_Params Parms{};

	Parms.Image = Image;
	Parms.Number = Number;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VertCard.WBP_VertCard_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_VertCard_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VertCard.WBP_VertCard_C.ExecuteUbergraph_WBP_VertCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_CustomEvent_Image                                         (None)
// class FText                        K2Node_CustomEvent_Number                                        (None)
// class FText                        K2Node_CustomEvent_Description                                   (None)

void UWBP_VertCard_C::ExecuteUbergraph_WBP_VertCard(int32 EntryPoint, const struct FSlateBrush& K2Node_CustomEvent_Image, class FText K2Node_CustomEvent_Number, class FText K2Node_CustomEvent_Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VertCard_C", "ExecuteUbergraph_WBP_VertCard");

	Params::UWBP_VertCard_C_ExecuteUbergraph_WBP_VertCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.K2Node_CustomEvent_Description = K2Node_CustomEvent_Description;

	UObject::ProcessEvent(Func, &Parms);

}

}


