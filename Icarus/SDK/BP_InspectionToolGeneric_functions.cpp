#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InspectionToolGeneric.BP_InspectionToolGeneric_C
// (Actor)

class UClass* ABP_InspectionToolGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InspectionToolGeneric_C");

	return Clss;
}


// BP_InspectionToolGeneric_C BP_InspectionToolGeneric.Default__BP_InspectionToolGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InspectionToolGeneric_C* ABP_InspectionToolGeneric_C::GetDefaultObj()
{
	static class ABP_InspectionToolGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InspectionToolGeneric_C*>(ABP_InspectionToolGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_InspectionToolGeneric_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolGeneric_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.Kill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_InspectionToolGeneric_C::Kill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolGeneric_C", "Kill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.DisplayWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_InspectionToolGeneric_C::DisplayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolGeneric_C", "DisplayWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.ExecuteUbergraph_BP_InspectionToolGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_InspectionToolPopup_C*  K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_InspectionToolGeneric_C::ExecuteUbergraph_BP_InspectionToolGeneric(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_InspectionToolPopup_C* K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolGeneric_C", "ExecuteUbergraph_BP_InspectionToolGeneric");

	Params::ABP_InspectionToolGeneric_C_ExecuteUbergraph_BP_InspectionToolGeneric_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup = K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


