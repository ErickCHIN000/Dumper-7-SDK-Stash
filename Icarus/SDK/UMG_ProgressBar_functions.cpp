#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProgressBar.UMG_ProgressBar_C
// (None)

class UClass* UUMG_ProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProgressBar_C");

	return Clss;
}


// UMG_ProgressBar_C UMG_ProgressBar.Default__UMG_ProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProgressBar_C* UUMG_ProgressBar_C::GetDefaultObj()
{
	static class UUMG_ProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProgressBar_C*>(UUMG_ProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProgressBar.UMG_ProgressBar_C.UpdateWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBar_C::UpdateWidth(float Width)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "UpdateWidth");

	Params::UUMG_ProgressBar_C_UpdateWidth_Params Parms{};

	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBar.UMG_ProgressBar_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ProgressBar_C::SetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "SetStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProgressBar.UMG_ProgressBar_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrent_Current                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrent_Current_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBar_C::SetTarget(float NewTarget, float Speed, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_GetCurrent_Current, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetCurrent_Current_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "SetTarget");

	Params::UUMG_ProgressBar_C_SetTarget_Params Parms{};

	Parms.NewTarget = NewTarget;
	Parms.Speed = Speed;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_GetCurrent_Current = CallFunc_GetCurrent_Current;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrent_Current_1 = CallFunc_GetCurrent_Current_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBar.UMG_ProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "PreConstruct");

	Params::UUMG_ProgressBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBar.UMG_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "Tick");

	Params::UUMG_ProgressBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProgressBar.UMG_ProgressBar_C.ExecuteUbergraph_UMG_ProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProgressBar_C::ExecuteUbergraph_UMG_ProgressBar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProgressBar_C", "ExecuteUbergraph_UMG_ProgressBar");

	Params::UUMG_ProgressBar_C_ExecuteUbergraph_UMG_ProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


