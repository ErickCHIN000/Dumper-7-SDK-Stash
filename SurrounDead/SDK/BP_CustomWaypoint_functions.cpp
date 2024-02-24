#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CustomWaypoint.BP_CustomWaypoint_C
// (None)

class UClass* UBP_CustomWaypoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CustomWaypoint_C");

	return Clss;
}


// BP_CustomWaypoint_C BP_CustomWaypoint.Default__BP_CustomWaypoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CustomWaypoint_C* UBP_CustomWaypoint_C::GetDefaultObj()
{
	static class UBP_CustomWaypoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CustomWaypoint_C*>(UBP_CustomWaypoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CustomWaypoint.BP_CustomWaypoint_C.GetDistanceFromGoal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TScriptInterface<class IBPI_WaypointTask_C>K2Node_DynamicCast_AsBPI_Waypoint_Task                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTaskLocation_Location                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBP_CustomWaypoint_C::GetDistanceFromGoal(TScriptInterface<class IBPI_WaypointTask_C> K2Node_DynamicCast_AsBPI_Waypoint_Task, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTaskLocation_Location, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomWaypoint_C", "GetDistanceFromGoal");

	Params::UBP_CustomWaypoint_C_GetDistanceFromGoal_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Waypoint_Task = K2Node_DynamicCast_AsBPI_Waypoint_Task;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTaskLocation_Location = CallFunc_GetTaskLocation_Location;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CustomWaypoint.BP_CustomWaypoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CustomWaypoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomWaypoint_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomWaypoint.BP_CustomWaypoint_C.ExecuteUbergraph_BP_CustomWaypoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WaypointTask_C>K2Node_DynamicCast_AsBPI_Waypoint_Task                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTaskLocationName_Name                                (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CustomWaypoint_C::ExecuteUbergraph_BP_CustomWaypoint(int32 EntryPoint, TScriptInterface<class IBPI_WaypointTask_C> K2Node_DynamicCast_AsBPI_Waypoint_Task, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTaskLocationName_Name, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomWaypoint_C", "ExecuteUbergraph_BP_CustomWaypoint");

	Params::UBP_CustomWaypoint_C_ExecuteUbergraph_BP_CustomWaypoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_Waypoint_Task = K2Node_DynamicCast_AsBPI_Waypoint_Task;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTaskLocationName_Name = CallFunc_GetTaskLocationName_Name;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


