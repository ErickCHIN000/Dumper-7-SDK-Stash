#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SimpleProgressbar.UMG_SimpleProgressbar_C
// (None)

class UClass* UUMG_SimpleProgressbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SimpleProgressbar_C");

	return Clss;
}


// UMG_SimpleProgressbar_C UMG_SimpleProgressbar.Default__UMG_SimpleProgressbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SimpleProgressbar_C* UUMG_SimpleProgressbar_C::GetDefaultObj()
{
	static class UUMG_SimpleProgressbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SimpleProgressbar_C*>(UUMG_SimpleProgressbar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.Get_Bar_Percent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_SimpleProgressbar_C::Get_Bar_Percent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SimpleProgressbar_C", "Get_Bar_Percent_0");

	Params::UUMG_SimpleProgressbar_C_Get_Bar_Percent_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.GetBarColours
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUMG_SimpleProgressbar_C::GetBarColours()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SimpleProgressbar_C", "GetBarColours");

	Params::UUMG_SimpleProgressbar_C_GetBarColours_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SimpleProgressbar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SimpleProgressbar_C", "PreConstruct");

	Params::UUMG_SimpleProgressbar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SimpleProgressbar.UMG_SimpleProgressbar_C.ExecuteUbergraph_UMG_SimpleProgressbar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_SimpleProgressbar_C::ExecuteUbergraph_UMG_SimpleProgressbar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SimpleProgressbar_C", "ExecuteUbergraph_UMG_SimpleProgressbar");

	Params::UUMG_SimpleProgressbar_C_ExecuteUbergraph_UMG_SimpleProgressbar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


