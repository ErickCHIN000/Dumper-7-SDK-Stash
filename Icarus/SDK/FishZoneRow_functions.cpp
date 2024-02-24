#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FishZoneRow.FishZoneRow_C
// (None)

class UClass* UFishZoneRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FishZoneRow_C");

	return Clss;
}


// FishZoneRow_C FishZoneRow.Default__FishZoneRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFishZoneRow_C* UFishZoneRow_C::GetDefaultObj()
{
	static class UFishZoneRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFishZoneRow_C*>(UFishZoneRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FishZoneRow.FishZoneRow_C.LessThan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFishZoneRow_C*              K2Node_DynamicCast_AsFish_Zone_Row                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LexicalLess_Name_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFishZoneRow_C::LessThan(class UObject* Other, class UFishZoneRow_C* K2Node_DynamicCast_AsFish_Zone_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishZoneRow_C", "LessThan");

	Params::UFishZoneRow_C_LessThan_Params Parms{};

	Parms.Other = Other;
	Parms.K2Node_DynamicCast_AsFish_Zone_Row = K2Node_DynamicCast_AsFish_Zone_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LexicalLess_Name_ReturnValue = CallFunc_LexicalLess_Name_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FishZoneRow.FishZoneRow_C.Set Row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishZoneRow_C::Set_Row(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishZoneRow_C", "Set Row");

	Params::UFishZoneRow_C_Set_Row_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FishZoneRow.FishZoneRow_C.ExecuteUbergraph_FishZoneRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        K2Node_CustomEvent_RowName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFishSpawnZonesRowHandle    CallFunc_MakeFishSpawnZones_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FFishSpawnZones             CallFunc_GetFishSpawnZonesStruct_FishSpawnZones                  (None)
// enum class EValid                  CallFunc_GetFishSpawnZonesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishZoneRow_C::ExecuteUbergraph_FishZoneRow(int32 EntryPoint, int32 CallFunc_ReplaceInline_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FFishSpawnZonesRowHandle& CallFunc_MakeFishSpawnZones_ReturnValue, const struct FFishSpawnZones& CallFunc_GetFishSpawnZonesStruct_FishSpawnZones, enum class EValid CallFunc_GetFishSpawnZonesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FishZoneRow_C", "ExecuteUbergraph_FishZoneRow");

	Params::UFishZoneRow_C_ExecuteUbergraph_FishZoneRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_MakeFishSpawnZones_ReturnValue = CallFunc_MakeFishSpawnZones_ReturnValue;
	Parms.CallFunc_GetFishSpawnZonesStruct_FishSpawnZones = CallFunc_GetFishSpawnZonesStruct_FishSpawnZones;
	Parms.CallFunc_GetFishSpawnZonesStruct_Paths = CallFunc_GetFishSpawnZonesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


