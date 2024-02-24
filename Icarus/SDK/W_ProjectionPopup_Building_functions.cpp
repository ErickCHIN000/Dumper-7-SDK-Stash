#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ProjectionPopup_Building.W_ProjectionPopup_Building_C
// (None)

class UClass* UW_ProjectionPopup_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ProjectionPopup_Building_C");

	return Clss;
}


// W_ProjectionPopup_Building_C W_ProjectionPopup_Building.Default__W_ProjectionPopup_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ProjectionPopup_Building_C* UW_ProjectionPopup_Building_C::GetDefaultObj()
{
	static class UW_ProjectionPopup_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ProjectionPopup_Building_C*>(UW_ProjectionPopup_Building_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.W_ProjectionPopup_Building_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FViewTraceResult            Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// enum class EViewTraceResultPriorityReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTraceResultPriorityCallFunc_GetGenericViewTraceResultPriority_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EViewTraceResultPriority UW_ProjectionPopup_Building_C::W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult& Result, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionPopup_Building_C", "W_ProjectionPopup_Building_AutoGenFunc");

	Params::UW_ProjectionPopup_Building_C_W_ProjectionPopup_Building_AutoGenFunc_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetGenericViewTraceResultPriority_ReturnValue = CallFunc_GetGenericViewTraceResultPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UIProjectionComponent_Building_C*K2Node_DynamicCast_AsBP_UIProjection_Component_Building          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UW_ProjectionPopup_Building_C::UpdateVisuals(class UBP_UIProjectionComponent_Building_C* K2Node_DynamicCast_AsBP_UIProjection_Component_Building, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText CallFunc_Format_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionPopup_Building_C", "UpdateVisuals");

	Params::UW_ProjectionPopup_Building_C_UpdateVisuals_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_UIProjection_Component_Building = K2Node_DynamicCast_AsBP_UIProjection_Component_Building;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ProjectionPopup_Building_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionPopup_Building_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.UpdateBuildingVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ProjectionPopup_Building_C::UpdateBuildingVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionPopup_Building_C", "UpdateBuildingVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.ExecuteUbergraph_W_ProjectionPopup_Building
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UW_ProjectionPopup_Building_C::ExecuteUbergraph_W_ProjectionPopup_Building(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionPopup_Building_C", "ExecuteUbergraph_W_ProjectionPopup_Building");

	Params::UW_ProjectionPopup_Building_C_ExecuteUbergraph_W_ProjectionPopup_Building_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


