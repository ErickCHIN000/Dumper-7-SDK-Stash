#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BaseCharacterUIWidget.BaseCharacterUIWidget_C
// (None)

class UClass* UBaseCharacterUIWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCharacterUIWidget_C");

	return Clss;
}


// BaseCharacterUIWidget_C BaseCharacterUIWidget.Default__BaseCharacterUIWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCharacterUIWidget_C* UBaseCharacterUIWidget_C::GetDefaultObj()
{
	static class UBaseCharacterUIWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCharacterUIWidget_C*>(UBaseCharacterUIWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.FocusLastWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseCharacterUIWidget_C::FocusLastWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "FocusLastWidget");

	Params::UBaseCharacterUIWidget_C_FocusLastWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.UpdateTooltips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo                              (None)
// struct FTooltipButtonInfo          K2Node_MakeStruct_TooltipButtonInfo_1                            (None)
// struct FTooltipButtonInfo          K2Node_Select_Default                                            (None)
// TArray<struct FTooltipButtonInfo>  K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UBaseCharacterUIWidget_C::UpdateTooltips(bool Temp_bool_Variable, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo, const struct FTooltipButtonInfo& K2Node_MakeStruct_TooltipButtonInfo_1, const struct FTooltipButtonInfo& K2Node_Select_Default, TArray<struct FTooltipButtonInfo>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "UpdateTooltips");

	Params::UBaseCharacterUIWidget_C_UpdateTooltips_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_TooltipButtonInfo = K2Node_MakeStruct_TooltipButtonInfo;
	Parms.K2Node_MakeStruct_TooltipButtonInfo_1 = K2Node_MakeStruct_TooltipButtonInfo_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.OnTooltipButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETooltipButtonType      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterUIWidget_C::OnTooltipButtonClicked(enum class ETooltipButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "OnTooltipButtonClicked");

	Params::UBaseCharacterUIWidget_C_OnTooltipButtonClicked_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBaseCharacterUIWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterUIWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "Tick");

	Params::UBaseCharacterUIWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseCharacterUIWidget_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacterUIWidget.BaseCharacterUIWidget_C.ExecuteUbergraph_BaseCharacterUIWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterUIWidget_C::ExecuteUbergraph_BaseCharacterUIWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacterUIWidget_C", "ExecuteUbergraph_BaseCharacterUIWidget");

	Params::UBaseCharacterUIWidget_C_ExecuteUbergraph_BaseCharacterUIWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


