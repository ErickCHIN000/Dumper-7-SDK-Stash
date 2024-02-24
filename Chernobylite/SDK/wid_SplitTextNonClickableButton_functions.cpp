#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C
// (None)

class UClass* UWid_SplitTextNonClickableButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_SplitTextNonClickableButton_C");

	return Clss;
}


// wid_SplitTextNonClickableButton_C wid_SplitTextNonClickableButton.Default__wid_SplitTextNonClickableButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_SplitTextNonClickableButton_C* UWid_SplitTextNonClickableButton_C::GetDefaultObj()
{
	static class UWid_SplitTextNonClickableButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_SplitTextNonClickableButton_C*>(UWid_SplitTextNonClickableButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SplitTextNonClickableButton_C::UpdateProgress(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "UpdateProgress");

	Params::UWid_SplitTextNonClickableButton_C_UpdateProgress_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.SetHolding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHolding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SplitTextNonClickableButton_C::SetHolding(bool IsHolding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "SetHolding");

	Params::UWid_SplitTextNonClickableButton_C_SetHolding_Params Parms{};

	Parms.IsHolding = IsHolding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SplitTextNonClickableButton_C::SetProgress(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "SetProgress");

	Params::UWid_SplitTextNonClickableButton_C_SetProgress_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocalizedTextInfo          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetText_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SplitTextNonClickableButton_C::Update(const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetText_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "Update");

	Params::UWid_SplitTextNonClickableButton_C_Update_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SetText_Success = CallFunc_SetText_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.SetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWid_SplitTextNonClickableButton_C::SetText(class FText& InText, bool* Success, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "SetText");

	Params::UWid_SplitTextNonClickableButton_C_SetText_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SplitTextNonClickableButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "PreConstruct");

	Params::UWid_SplitTextNonClickableButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SplitTextNonClickableButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "Tick");

	Params::UWid_SplitTextNonClickableButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.ExecuteUbergraph_wid_SplitTextNonClickableButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SplitTextNonClickableButton_C::ExecuteUbergraph_wid_SplitTextNonClickableButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "ExecuteUbergraph_wid_SplitTextNonClickableButton");

	Params::UWid_SplitTextNonClickableButton_C_ExecuteUbergraph_wid_SplitTextNonClickableButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SplitTextNonClickableButton.wid_SplitTextNonClickableButton_C.HoldingFull__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_SplitTextNonClickableButton_C::HoldingFull__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SplitTextNonClickableButton_C", "HoldingFull__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


