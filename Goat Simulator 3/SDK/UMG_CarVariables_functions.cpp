#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CarVariables.UMG_CarVariables_C
// (None)

class UClass* UUMG_CarVariables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CarVariables_C");

	return Clss;
}


// UMG_CarVariables_C UMG_CarVariables.Default__UMG_CarVariables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CarVariables_C* UUMG_CarVariables_C::GetDefaultObj()
{
	static class UUMG_CarVariables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CarVariables_C*>(UUMG_CarVariables_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CarVariables.UMG_CarVariables_C.UpdateCarStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RPM                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Gear                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxRPM                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AudioRPM                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Load                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Engine_Rotation_Speed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CarVariables_C::UpdateCarStats(float RPM, int32 Speed, int32 Gear, float MaxRPM, float AudioRPM, float Load, float Engine_Rotation_Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CarVariables_C", "UpdateCarStats");

	Params::UUMG_CarVariables_C_UpdateCarStats_Params Parms{};

	Parms.RPM = RPM;
	Parms.Speed = Speed;
	Parms.Gear = Gear;
	Parms.MaxRPM = MaxRPM;
	Parms.AudioRPM = AudioRPM;
	Parms.Load = Load;
	Parms.Engine_Rotation_Speed = Engine_Rotation_Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CarVariables.UMG_CarVariables_C.ExecuteUbergraph_UMG_CarVariables
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RPM                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Gear                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_MAXRPM                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AudioRPM                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Load                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Engine_Rotation_Speed                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FFloor64_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)

void UUMG_CarVariables_C::ExecuteUbergraph_UMG_CarVariables(int32 EntryPoint, float K2Node_CustomEvent_RPM, int32 K2Node_CustomEvent_Speed, int32 K2Node_CustomEvent_Gear, float K2Node_CustomEvent_MAXRPM, float K2Node_CustomEvent_AudioRPM, float K2Node_CustomEvent_Load, float K2Node_CustomEvent_Engine_Rotation_Speed, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, int64 CallFunc_FFloor64_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, int64 CallFunc_FFloor64_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CarVariables_C", "ExecuteUbergraph_UMG_CarVariables");

	Params::UUMG_CarVariables_C_ExecuteUbergraph_UMG_CarVariables_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RPM = K2Node_CustomEvent_RPM;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.K2Node_CustomEvent_Gear = K2Node_CustomEvent_Gear;
	Parms.K2Node_CustomEvent_MAXRPM = K2Node_CustomEvent_MAXRPM;
	Parms.K2Node_CustomEvent_AudioRPM = K2Node_CustomEvent_AudioRPM;
	Parms.K2Node_CustomEvent_Load = K2Node_CustomEvent_Load;
	Parms.K2Node_CustomEvent_Engine_Rotation_Speed = K2Node_CustomEvent_Engine_Rotation_Speed;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_FFloor64_ReturnValue_1 = CallFunc_FFloor64_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


