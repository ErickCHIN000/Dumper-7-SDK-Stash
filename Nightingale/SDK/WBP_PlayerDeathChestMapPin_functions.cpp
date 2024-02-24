#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C
// (None)

class UClass* UWBP_PlayerDeathChestMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerDeathChestMapPin_C");

	return Clss;
}


// WBP_PlayerDeathChestMapPin_C WBP_PlayerDeathChestMapPin.Default__WBP_PlayerDeathChestMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerDeathChestMapPin_C* UWBP_PlayerDeathChestMapPin_C::GetDefaultObj()
{
	static class UWBP_PlayerDeathChestMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerDeathChestMapPin_C*>(UWBP_PlayerDeathChestMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipBodyText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PlayerDeathChestMapPin_C::GetTooltipBodyText(class FText* OutputText, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDeathChestMapPin_C", "GetTooltipBodyText");

	Params::UWBP_PlayerDeathChestMapPin_C_GetTooltipBodyText_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipCoordText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// class FText                        CallFunc_Conv_VectorToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PlayerDeathChestMapPin_C::GetTooltipCoordText(class FText* OutputText, class FText CallFunc_Conv_VectorToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDeathChestMapPin_C", "GetTooltipCoordText");

	Params::UWBP_PlayerDeathChestMapPin_C_GetTooltipCoordText_Params Parms{};

	Parms.CallFunc_Conv_VectorToText_ReturnValue = CallFunc_Conv_VectorToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.GetTooltipTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PlayerDeathChestMapPin_C::GetTooltipTitleText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDeathChestMapPin_C", "GetTooltipTitleText");

	Params::UWBP_PlayerDeathChestMapPin_C_GetTooltipTitleText_Params Parms{};

	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerDeathChestMapPin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDeathChestMapPin_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerDeathChestMapPin.WBP_PlayerDeathChestMapPin_C.ExecuteUbergraph_WBP_PlayerDeathChestMapPin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerDeathChestMapPin_C::ExecuteUbergraph_WBP_PlayerDeathChestMapPin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerDeathChestMapPin_C", "ExecuteUbergraph_WBP_PlayerDeathChestMapPin");

	Params::UWBP_PlayerDeathChestMapPin_C_ExecuteUbergraph_WBP_PlayerDeathChestMapPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


