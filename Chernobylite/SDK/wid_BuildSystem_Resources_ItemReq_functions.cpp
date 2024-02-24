#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C
// (None)

class UClass* UWid_BuildSystem_Resources_ItemReq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Resources_ItemReq_C");

	return Clss;
}


// wid_BuildSystem_Resources_ItemReq_C wid_BuildSystem_Resources_ItemReq.Default__wid_BuildSystem_Resources_ItemReq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Resources_ItemReq_C* UWid_BuildSystem_Resources_ItemReq_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Resources_ItemReq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Resources_ItemReq_C*>(UWid_BuildSystem_Resources_ItemReq_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.FetchPowerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuildEntryInternal         EntityInfo                                                       (Edit, BlueprintVisible)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_PowerManagmentCanAdd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue                    (None)

void UWid_BuildSystem_Resources_ItemReq_C::FetchPowerData(const struct FBuildEntryInternal& EntityInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_PowerManagmentCanAdd_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_ItemReq_C", "FetchPowerData");

	Params::UWid_BuildSystem_Resources_ItemReq_C_FetchPowerData_Params Parms{};

	Parms.EntityInfo = EntityInfo;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_PowerManagmentCanAdd_ReturnValue = CallFunc_PowerManagmentCanAdd_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue = CallFunc_BuildSystemGetEntityInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.ConvertResourceToItemEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EResourceType           Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Resources_ItemReq_C::ConvertResourceToItemEnum(enum class EResourceType Res, enum class Enum_ItemNames* NewParam, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_ItemReq_C", "ConvertResourceToItemEnum");

	Params::UWid_BuildSystem_Resources_ItemReq_C_ConvertResourceToItemEnum_Params Parms{};

	Parms.Res = Res;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CurrentResourceType                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         EntityInfo                                                       (Edit, BlueprintVisible)
// TArray<struct FSt_ItemByEnumAndCount>ResourcesCost                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          CallFunc_ConvertResourceToItemEnum_NewParam                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue                    (None)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FSt_ItemByEnumAndCount      K2Node_MakeStruct_st_ItemByEnumAndCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Resources_ItemReq_C::Update(class FName ItemId, enum class EResourceType CurrentResourceType, const struct FBuildEntryInternal& EntityInfo, const TArray<struct FSt_ItemByEnumAndCount>& ResourcesCost, int32 Temp_int_Array_Index_Variable, enum class Enum_ItemNames CallFunc_ConvertResourceToItemEnum_NewParam, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_SelectFloat_ReturnValue, TArray<enum class EResourceType>& K2Node_MakeArray_Array, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_ItemReq_C", "Update");

	Params::UWid_BuildSystem_Resources_ItemReq_C_Update_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CurrentResourceType = CurrentResourceType;
	Parms.EntityInfo = EntityInfo;
	Parms.ResourcesCost = ResourcesCost;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ConvertResourceToItemEnum_NewParam = CallFunc_ConvertResourceToItemEnum_NewParam;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue = CallFunc_BuildSystemGetEntityInfo_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_st_ItemByEnumAndCount = K2Node_MakeStruct_st_ItemByEnumAndCount;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Resources_ItemReq_C::ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_ItemReq_C", "ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq");

	Params::UWid_BuildSystem_Resources_ItemReq_C_ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


