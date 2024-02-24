#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InspectionToolSpawner.BP_InspectionToolSpawner_C
// (Actor)

class UClass* ABP_InspectionToolSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InspectionToolSpawner_C");

	return Clss;
}


// BP_InspectionToolSpawner_C BP_InspectionToolSpawner.Default__BP_InspectionToolSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InspectionToolSpawner_C* ABP_InspectionToolSpawner_C::GetDefaultObj()
{
	static class ABP_InspectionToolSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InspectionToolSpawner_C*>(ABP_InspectionToolSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.DisplayWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_InspectionToolSpawner_C::DisplayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolSpawner_C", "DisplayWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.KillActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InLifespan                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectionToolSpawner_C::KillActor(float InLifespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolSpawner_C", "KillActor");

	Params::ABP_InspectionToolSpawner_C_KillActor_Params Parms{};

	Parms.InLifespan = InLifespan;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_InspectionToolSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.ExecuteUbergraph_BP_InspectionToolSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_InspectionToolPopup_C*  K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InLifespan                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectionToolSpawner_C::ExecuteUbergraph_BP_InspectionToolSpawner(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_InspectionToolPopup_C* K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_InLifespan, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InspectionToolSpawner_C", "ExecuteUbergraph_BP_InspectionToolSpawner");

	Params::ABP_InspectionToolSpawner_C_ExecuteUbergraph_BP_InspectionToolSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup = K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_InLifespan = K2Node_CustomEvent_InLifespan;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


