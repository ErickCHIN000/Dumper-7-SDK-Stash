#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InspectorCanvas.BP_InspectorCanvas_C
// (None)

class UClass* UBP_InspectorCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InspectorCanvas_C");

	return Clss;
}


// BP_InspectorCanvas_C BP_InspectorCanvas.Default__BP_InspectorCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InspectorCanvas_C* UBP_InspectorCanvas_C::GetDefaultObj()
{
	static class UBP_InspectorCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InspectorCanvas_C*>(UBP_InspectorCanvas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InspectorCanvas.BP_InspectorCanvas_C.AddNewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_InspectorCanvas_C::AddNewItem(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectorCanvas_C", "AddNewItem");

	Params::UBP_InspectorCanvas_C_AddNewItem_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InspectorCanvas.BP_InspectorCanvas_C.SetActiveWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CanvasSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_InspectorCanvas_C::SetActiveWindow(class UCanvasPanelSlot* CanvasSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectorCanvas_C", "SetActiveWindow");

	Params::UBP_InspectorCanvas_C_SetActiveWindow_Params Parms{};

	Parms.CanvasSlot = CanvasSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InspectorCanvas.BP_InspectorCanvas_C.ExecuteUbergraph_BP_InspectorCanvas
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Content                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_CustomEvent_CanvasSlot                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InspectorCanvas_C::ExecuteUbergraph_BP_InspectorCanvas(int32 EntryPoint, class UWidget* K2Node_CustomEvent_Content, class UCanvasPanelSlot* K2Node_CustomEvent_CanvasSlot, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectorCanvas_C", "ExecuteUbergraph_BP_InspectorCanvas");

	Params::UBP_InspectorCanvas_C_ExecuteUbergraph_BP_InspectorCanvas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Content = K2Node_CustomEvent_Content;
	Parms.K2Node_CustomEvent_CanvasSlot = K2Node_CustomEvent_CanvasSlot;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


