#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C
// (None)

class UClass* UWid_BuildSystem_Resources_CurrentStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Resources_CurrentStatus_C");

	return Clss;
}


// wid_BuildSystem_Resources_CurrentStatus_C wid_BuildSystem_Resources_CurrentStatus.Default__wid_BuildSystem_Resources_CurrentStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Resources_CurrentStatus_C* UWid_BuildSystem_Resources_CurrentStatus_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Resources_CurrentStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Resources_CurrentStatus_C*>(UWid_BuildSystem_Resources_CurrentStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C.FetchPowerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PowerManagmentGetLimit_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PowerManagmentGetCurrentUsage_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_BuildSystem_Resources_CurrentStatus_C::FetchPowerData(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_PowerManagmentGetLimit_ReturnValue, int32 CallFunc_PowerManagmentGetCurrentUsage_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_CurrentStatus_C", "FetchPowerData");

	Params::UWid_BuildSystem_Resources_CurrentStatus_C_FetchPowerData_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_PowerManagmentGetLimit_ReturnValue = CallFunc_PowerManagmentGetLimit_ReturnValue;
	Parms.CallFunc_PowerManagmentGetCurrentUsage_ReturnValue = CallFunc_PowerManagmentGetCurrentUsage_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C.ConvertResourceToItemName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EResourceType           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetNameByResource_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Resources_CurrentStatus_C::ConvertResourceToItemName(enum class EResourceType Type, class FName* ItemId, class FName CallFunc_GetNameByResource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_CurrentStatus_C", "ConvertResourceToItemName");

	Params::UWid_BuildSystem_Resources_CurrentStatus_C_ConvertResourceToItemName_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetNameByResource_ReturnValue = CallFunc_GetNameByResource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

}


// Function wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C.TotalCountOfResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ConvertResourceToItemName_ItemID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWid_BuildSystem_Resources_CurrentStatus_C::TotalCountOfResource(enum class EResourceType Type, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_ConvertResourceToItemName_ItemID, float CallFunc_Count_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_Count_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_CurrentStatus_C", "TotalCountOfResource");

	Params::UWid_BuildSystem_Resources_CurrentStatus_C_TotalCountOfResource_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_ConvertResourceToItemName_ItemID = CallFunc_ConvertResourceToItemName_ItemID;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Count_ReturnValue_1 = CallFunc_Count_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C.ConvertResourceToItemEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EResourceType           Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Resources_CurrentStatus_C::ConvertResourceToItemEnum(enum class EResourceType Res, enum class Enum_ItemNames* NewParam, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_CurrentStatus_C", "ConvertResourceToItemEnum");

	Params::UWid_BuildSystem_Resources_CurrentStatus_C_ConvertResourceToItemEnum_Params Parms{};

	Parms.Res = Res;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           CurrentResourceType                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_ItemByEnumAndCount>ResourcesCost                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TotalCountOfResource_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          CallFunc_ConvertResourceToItemEnum_NewParam                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      K2Node_MakeStruct_st_ItemByEnumAndCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Resources_CurrentStatus_C::Update(enum class EResourceType CurrentResourceType, const TArray<struct FSt_ItemByEnumAndCount>& ResourcesCost, int32 Temp_int_Array_Index_Variable, float CallFunc_TotalCountOfResource_ReturnValue, enum class Enum_ItemNames CallFunc_ConvertResourceToItemEnum_NewParam, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, TArray<enum class EResourceType>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Resources_CurrentStatus_C", "Update");

	Params::UWid_BuildSystem_Resources_CurrentStatus_C_Update_Params Parms{};

	Parms.CurrentResourceType = CurrentResourceType;
	Parms.ResourcesCost = ResourcesCost;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_TotalCountOfResource_ReturnValue = CallFunc_TotalCountOfResource_ReturnValue;
	Parms.CallFunc_ConvertResourceToItemEnum_NewParam = CallFunc_ConvertResourceToItemEnum_NewParam;
	Parms.K2Node_MakeStruct_st_ItemByEnumAndCount = K2Node_MakeStruct_st_ItemByEnumAndCount;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


