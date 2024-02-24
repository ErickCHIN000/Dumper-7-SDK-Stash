#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SandboxCollapsedTabProgressBar.WBP_SandboxCollapsedTabProgressBar_C
// (None)

class UClass* UWBP_SandboxCollapsedTabProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SandboxCollapsedTabProgressBar_C");

	return Clss;
}


// WBP_SandboxCollapsedTabProgressBar_C WBP_SandboxCollapsedTabProgressBar.Default__WBP_SandboxCollapsedTabProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SandboxCollapsedTabProgressBar_C* UWBP_SandboxCollapsedTabProgressBar_C::GetDefaultObj()
{
	static class UWBP_SandboxCollapsedTabProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SandboxCollapsedTabProgressBar_C*>(UWBP_SandboxCollapsedTabProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SandboxCollapsedTabProgressBar.WBP_SandboxCollapsedTabProgressBar_C.SetPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percentage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SandboxCollapsedTabProgressBar_C::SetPercentage(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTabProgressBar_C", "SetPercentage");

	Params::UWBP_SandboxCollapsedTabProgressBar_C_SetPercentage_Params Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsedTabProgressBar.WBP_SandboxCollapsedTabProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SandboxCollapsedTabProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTabProgressBar_C", "PreConstruct");

	Params::UWBP_SandboxCollapsedTabProgressBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SandboxCollapsedTabProgressBar.WBP_SandboxCollapsedTabProgressBar_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SandboxCollapsedTabProgressBar_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTabProgressBar_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SandboxCollapsedTabProgressBar.WBP_SandboxCollapsedTabProgressBar_C.ExecuteUbergraph_WBP_SandboxCollapsedTabProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UWBP_SandboxCollapsedTabProgressBar_C::ExecuteUbergraph_WBP_SandboxCollapsedTabProgressBar(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_FClamp_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SandboxCollapsedTabProgressBar_C", "ExecuteUbergraph_WBP_SandboxCollapsedTabProgressBar");

	Params::UWBP_SandboxCollapsedTabProgressBar_C_ExecuteUbergraph_WBP_SandboxCollapsedTabProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}

}


