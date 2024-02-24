#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_SkipIntro.wid_SkipIntro_C
// (None)

class UClass* UWid_SkipIntro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_SkipIntro_C");

	return Clss;
}


// wid_SkipIntro_C wid_SkipIntro.Default__wid_SkipIntro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_SkipIntro_C* UWid_SkipIntro_C::GetDefaultObj()
{
	static class UWid_SkipIntro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_SkipIntro_C*>(UWid_SkipIntro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_SkipIntro.wid_SkipIntro_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocalizedTextInfo          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetText_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetText_Success_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SkipIntro_C::Update(const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetText_Success, bool CallFunc_SetText_Success_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SkipIntro_C", "Update");

	Params::UWid_SkipIntro_C_Update_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SetText_Success = CallFunc_SetText_Success;
	Parms.CallFunc_SetText_Success_1 = CallFunc_SetText_Success_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SkipIntro.wid_SkipIntro_C.SetText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWid_SkipIntro_C::SetText(class FText Text, bool* Success, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SkipIntro_C", "SetText");

	Params::UWid_SkipIntro_C_SetText_Params Parms{};

	Parms.Text = Text;
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


// Function wid_SkipIntro.wid_SkipIntro_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SkipIntro_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SkipIntro_C", "PreConstruct");

	Params::UWid_SkipIntro_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SkipIntro.wid_SkipIntro_C.ExecuteUbergraph_wid_SkipIntro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SkipIntro_C::ExecuteUbergraph_wid_SkipIntro(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SkipIntro_C", "ExecuteUbergraph_wid_SkipIntro");

	Params::UWid_SkipIntro_C_ExecuteUbergraph_wid_SkipIntro_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


