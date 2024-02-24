#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C
// (None)

class UClass* UWid_PDAGEIGERTooltip_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_PDAGEIGERTooltip_Buttons_C");

	return Clss;
}


// wid_PDAGEIGERTooltip_Buttons_C wid_PDAGEIGERTooltip_Buttons.Default__wid_PDAGEIGERTooltip_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_PDAGEIGERTooltip_Buttons_C* UWid_PDAGEIGERTooltip_Buttons_C::GetDefaultObj()
{
	static class UWid_PDAGEIGERTooltip_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_PDAGEIGERTooltip_Buttons_C*>(UWid_PDAGEIGERTooltip_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_PDAGEIGERTooltip_Buttons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDAGEIGERTooltip_Buttons_C", "Tick");

	Params::UWid_PDAGEIGERTooltip_Buttons_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_PDAGEIGERTooltip_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDAGEIGERTooltip_Buttons_C", "PreConstruct");

	Params::UWid_PDAGEIGERTooltip_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_PDAGEIGERTooltip_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDAGEIGERTooltip_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C.SetEditMode Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_PDAGEIGERTooltip_Buttons_C::SetEditMode_Visibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDAGEIGERTooltip_Buttons_C", "SetEditMode Visibility");

	Params::UWid_PDAGEIGERTooltip_Buttons_C_SetEditMode_Visibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDAGEIGERTooltip_Buttons.wid_PDAGEIGERTooltip_Buttons_C.ExecuteUbergraph_wid_PDAGEIGERTooltip_Buttons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_PDAGEIGERTooltip_Buttons_C::ExecuteUbergraph_wid_PDAGEIGERTooltip_Buttons(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDAGEIGERTooltip_Buttons_C", "ExecuteUbergraph_wid_PDAGEIGERTooltip_Buttons");

	Params::UWid_PDAGEIGERTooltip_Buttons_C_ExecuteUbergraph_wid_PDAGEIGERTooltip_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}

}


