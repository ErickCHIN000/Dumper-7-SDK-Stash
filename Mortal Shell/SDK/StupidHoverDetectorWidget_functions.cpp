#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StupidHoverDetectorWidget.StupidHoverDetectorWidget_C
// (None)

class UClass* UStupidHoverDetectorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StupidHoverDetectorWidget_C");

	return Clss;
}


// StupidHoverDetectorWidget_C StupidHoverDetectorWidget.Default__StupidHoverDetectorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStupidHoverDetectorWidget_C* UStupidHoverDetectorWidget_C::GetDefaultObj()
{
	static class UStupidHoverDetectorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStupidHoverDetectorWidget_C*>(UStupidHoverDetectorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StupidHoverDetectorWidget.StupidHoverDetectorWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStupidHoverDetectorWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidHoverDetectorWidget_C", "OnMouseEnter");

	Params::UStupidHoverDetectorWidget_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StupidHoverDetectorWidget.StupidHoverDetectorWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStupidHoverDetectorWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidHoverDetectorWidget_C", "OnMouseLeave");

	Params::UStupidHoverDetectorWidget_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StupidHoverDetectorWidget.StupidHoverDetectorWidget_C.ExecuteUbergraph_StupidHoverDetectorWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UStupidHoverDetectorWidget_C::ExecuteUbergraph_StupidHoverDetectorWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidHoverDetectorWidget_C", "ExecuteUbergraph_StupidHoverDetectorWidget");

	Params::UStupidHoverDetectorWidget_C_ExecuteUbergraph_StupidHoverDetectorWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StupidHoverDetectorWidget.StupidHoverDetectorWidget_C.Event_OnMouseLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStupidHoverDetectorWidget_C::Event_OnMouseLeave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidHoverDetectorWidget_C", "Event_OnMouseLeave__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StupidHoverDetectorWidget.StupidHoverDetectorWidget_C.Event_OnMouseEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStupidHoverDetectorWidget_C::Event_OnMouseEnter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StupidHoverDetectorWidget_C", "Event_OnMouseEnter__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


