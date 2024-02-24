#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Building.wid_BuildSystem_Building_C
// (None)

class UClass* UWid_BuildSystem_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Building_C");

	return Clss;
}


// wid_BuildSystem_Building_C wid_BuildSystem_Building.Default__wid_BuildSystem_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Building_C* UWid_BuildSystem_Building_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Building_C*>(UWid_BuildSystem_Building_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InitGlobalStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::InitGlobalStats(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InitGlobalStats");

	Params::UWid_BuildSystem_Building_C_InitGlobalStats_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.ShowCatalogs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::ShowCatalogs(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "ShowCatalogs");

	Params::UWid_BuildSystem_Building_C_ShowCatalogs_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.GetSelectedItemPath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Return                                                           (Parm, OutParm)
// class FString                      Debugstring                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                LocalArray                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue               (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)

void UWid_BuildSystem_Building_C::GetSelectedItemPath(TArray<class FName>* Return, const class FString& Debugstring, const TArray<class FName>& LocalArray, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "GetSelectedItemPath");

	Params::UWid_BuildSystem_Building_C_GetSelectedItemPath_Params Parms{};

	Parms.Debugstring = Debugstring;
	Parms.LocalArray = LocalArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue = CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.JoinPaths
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Elem                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Array1                                                           (Parm, OutParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::JoinPaths(TArray<class FName>& Array, class FName Elem, TArray<class FName>* Array1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "JoinPaths");

	Params::UWid_BuildSystem_Building_C_JoinPaths_Params Parms{};

	Parms.Array = Array;
	Parms.Elem = Elem;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Array1 != nullptr)
		*Array1 = std::move(Parms.Array1);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.MoveCatalogsToLeft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AvailableCatalogs                                                (Edit, BlueprintVisible)
// class FName                        CurrentCatalog                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Catalogs                                                         (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_1                                   (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_2                                   (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_JoinPaths_Array1                                        (ReferenceParm)
// struct FBuildCatalogPath           CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue             (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_3                                   (ReferenceParm)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_4                                   (ReferenceParm)
// TArray<class FName>                CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue               (ReferenceParm)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BuildSystemGetAllPathIDs_ReturnValue                    (ReferenceParm)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::MoveCatalogsToLeft(const TArray<class FName>& AvailableCatalogs, class FName CurrentCatalog, const TArray<class FName>& Catalogs, TArray<class FName>& CallFunc_GetCurrentPath_Path, TArray<class FName>& CallFunc_GetCurrentPath_Path_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_BuildSystemCreatePathID_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Find_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<class FName>& CallFunc_JoinPaths_Array1, const struct FBuildCatalogPath& CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class FName CallFunc_BuildSystemCreatePathID_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, TArray<class FName>& CallFunc_GetCurrentPath_Path_3, TArray<class FName>& CallFunc_GetCurrentPath_Path_4, TArray<class FName>& CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue, class FName CallFunc_BuildSystemCreatePathID_ReturnValue_2, TArray<class FName>& CallFunc_BuildSystemGetAllPathIDs_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "MoveCatalogsToLeft");

	Params::UWid_BuildSystem_Building_C_MoveCatalogsToLeft_Params Parms{};

	Parms.AvailableCatalogs = AvailableCatalogs;
	Parms.CurrentCatalog = CurrentCatalog;
	Parms.Catalogs = Catalogs;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCurrentPath_Path_1 = CallFunc_GetCurrentPath_Path_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue = CallFunc_BuildSystemCreatePathID_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_2 = CallFunc_GetCurrentPath_Path_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_JoinPaths_Array1 = CallFunc_JoinPaths_Array1;
	Parms.CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue = CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue_1 = CallFunc_BuildSystemCreatePathID_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetCurrentPath_Path_3 = CallFunc_GetCurrentPath_Path_3;
	Parms.CallFunc_GetCurrentPath_Path_4 = CallFunc_GetCurrentPath_Path_4;
	Parms.CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue = CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue_2 = CallFunc_BuildSystemCreatePathID_ReturnValue_2;
	Parms.CallFunc_BuildSystemGetAllPathIDs_ReturnValue = CallFunc_BuildSystemGetAllPathIDs_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.MoveCatalogsToRight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AvailableCatalogs                                                (Edit, BlueprintVisible)
// class FName                        CurrentCatalog                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Catalogs                                                         (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_1                                   (ReferenceParm)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_2                                   (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_JoinPaths_Array1                                        (ReferenceParm)
// struct FBuildCatalogPath           CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue             (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_3                                   (ReferenceParm)
// TArray<class FName>                CallFunc_BuildSystemGetAllPathIDs_ReturnValue                    (ReferenceParm)
// TArray<class FName>                CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_4                                   (ReferenceParm)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::MoveCatalogsToRight(const TArray<class FName>& AvailableCatalogs, class FName CurrentCatalog, const TArray<class FName>& Catalogs, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCurrentPath_Path, TArray<class FName>& CallFunc_GetCurrentPath_Path_1, class FName CallFunc_BuildSystemCreatePathID_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_BuildSystemCreatePathID_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_Array_Find_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, TArray<class FName>& CallFunc_JoinPaths_Array1, const struct FBuildCatalogPath& CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetCurrentPath_Path_3, TArray<class FName>& CallFunc_BuildSystemGetAllPathIDs_ReturnValue, TArray<class FName>& CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_4, class FName CallFunc_BuildSystemCreatePathID_ReturnValue_2, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "MoveCatalogsToRight");

	Params::UWid_BuildSystem_Building_C_MoveCatalogsToRight_Params Parms{};

	Parms.AvailableCatalogs = AvailableCatalogs;
	Parms.CurrentCatalog = CurrentCatalog;
	Parms.Catalogs = Catalogs;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCurrentPath_Path_1 = CallFunc_GetCurrentPath_Path_1;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue = CallFunc_BuildSystemCreatePathID_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue_1 = CallFunc_BuildSystemCreatePathID_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_2 = CallFunc_GetCurrentPath_Path_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_JoinPaths_Array1 = CallFunc_JoinPaths_Array1;
	Parms.CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue = CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentPath_Path_3 = CallFunc_GetCurrentPath_Path_3;
	Parms.CallFunc_BuildSystemGetAllPathIDs_ReturnValue = CallFunc_BuildSystemGetAllPathIDs_ReturnValue;
	Parms.CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue = CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_4 = CallFunc_GetCurrentPath_Path_4;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue_2 = CallFunc_BuildSystemCreatePathID_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.GetCurrentPath
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Path                                                             (Parm, OutParm)
// TArray<class FName>                CopyHierarchy                                                    (Edit, BlueprintVisible)

void UWid_BuildSystem_Building_C::GetCurrentPath(TArray<class FName>* Path, const TArray<class FName>& CopyHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "GetCurrentPath");

	Params::UWid_BuildSystem_Building_C_GetCurrentPath_Params Parms{};

	Parms.CopyHierarchy = CopyHierarchy;

	UObject::ProcessEvent(Func, &Parms);

	if (Path != nullptr)
		*Path = std::move(Parms.Path);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.ProcessPressDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CurrentPath                                                      (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_1                                   (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_BuildSystemGetAllPathIDs_ReturnValue                    (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::ProcessPressDown(const TArray<class FName>& CurrentPath, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetCurrentPath_Path, class FName CallFunc_BuildSystemCreatePathID_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, bool CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue, TArray<class FName>& CallFunc_BuildSystemGetAllPathIDs_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "ProcessPressDown");

	Params::UWid_BuildSystem_Building_C_ProcessPressDown_Params Parms{};

	Parms.CurrentPath = CurrentPath;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue = CallFunc_BuildSystemCreatePathID_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_1 = CallFunc_GetCurrentPath_Path_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue = CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue;
	Parms.CallFunc_BuildSystemGetAllPathIDs_ReturnValue = CallFunc_BuildSystemGetAllPathIDs_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InitCatalogs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::InitCatalogs(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InitCatalogs");

	Params::UWid_BuildSystem_Building_C_InitCatalogs_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.UpdatedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBuildEntryInternal> AvailableItems                                                   (Edit, BlueprintVisible)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetItemsByPath_ReturnValue                   (ReferenceParm)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue               (ReferenceParm)
// struct FBuildEntryInternal         CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildEntry                 CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::UpdatedItems(const TArray<struct FBuildEntryInternal>& AvailableItems, const class FString& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Get_Item_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<class FName>& CallFunc_GetCurrentPath_Path, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetItemsByPath_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue, const struct FBuildEntryInternal& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "UpdatedItems");

	Params::UWid_BuildSystem_Building_C_UpdatedItems_Params Parms{};

	Parms.AvailableItems = AvailableItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue = CallFunc_BuildSystemGetCategoryByName_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_BuildSystemGetItemsByPath_ReturnValue = CallFunc_BuildSystemGetItemsByPath_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue = CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InitResourcePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InitResourcePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InitResourcePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.ProcessMiddleItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_BuildSystem_EntityList_Entry_C*CallFunc_GetTab_Tab                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::ProcessMiddleItem(int32 CallFunc_Divide_IntInt_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* CallFunc_GetTab_Tab, bool CallFunc_ContainsItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "ProcessMiddleItem");

	Params::UWid_BuildSystem_Building_C_ProcessMiddleItem_Params Parms{};

	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetTab_Tab = CallFunc_GetTab_Tab;
	Parms.CallFunc_ContainsItem_ReturnValue = CallFunc_ContainsItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.MoveItemsToLeft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBuildEntryInternal> AvailableItems                                                   (Edit, BlueprintVisible)
// TArray<struct FBuildEntryInternal> FilteredItems                                                    (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue               (ReferenceParm)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetItemsByPath_ReturnValue                   (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_Array_Get_Item_4                                        (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::MoveItemsToLeft(const TArray<struct FBuildEntryInternal>& AvailableItems, const TArray<struct FBuildEntryInternal>& FilteredItems, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item_2, class FName CallFunc_Conv_StringToName_ReturnValue_1, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, TArray<class FName>& CallFunc_GetCurrentPath_Path, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetItemsByPath_ReturnValue, const class FString& CallFunc_Array_Get_Item_3, const struct FBuildEntryInternal& CallFunc_Array_Get_Item_4, class FName CallFunc_Conv_StringToName_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Array_Get_Item_5, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "MoveItemsToLeft");

	Params::UWid_BuildSystem_Building_C_MoveItemsToLeft_Params Parms{};

	Parms.AvailableItems = AvailableItems;
	Parms.FilteredItems = FilteredItems;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue = CallFunc_BuildSystemGetCategoryByName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue_1 = CallFunc_BuildSystemGetCategoryByName_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue = CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue;
	Parms.CallFunc_BuildSystemGetItemsByPath_ReturnValue = CallFunc_BuildSystemGetItemsByPath_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue_2 = CallFunc_BuildSystemGetCategoryByName_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.MoveItemsToRight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBuildEntryInternal> AvailableCatalogs                                                (Edit, BlueprintVisible)
// TArray<struct FBuildEntryInternal> Catalogs                                                         (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue               (ReferenceParm)
// TArray<struct FBuildEntryInternal> CallFunc_BuildSystemGetItemsByPath_ReturnValue                   (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_Array_Get_Item_4                                        (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::MoveItemsToRight(const TArray<struct FBuildEntryInternal>& AvailableCatalogs, const TArray<struct FBuildEntryInternal>& Catalogs, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item_2, class FName CallFunc_Conv_StringToName_ReturnValue_1, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, TArray<class FName>& CallFunc_GetCurrentPath_Path, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue, TArray<struct FBuildEntryInternal>& CallFunc_BuildSystemGetItemsByPath_ReturnValue, const class FString& CallFunc_Array_Get_Item_3, const struct FBuildEntryInternal& CallFunc_Array_Get_Item_4, class FName CallFunc_Conv_StringToName_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Array_Get_Item_5, int32 CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "MoveItemsToRight");

	Params::UWid_BuildSystem_Building_C_MoveItemsToRight_Params Parms{};

	Parms.AvailableCatalogs = AvailableCatalogs;
	Parms.Catalogs = Catalogs;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue = CallFunc_BuildSystemGetCategoryByName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue_1 = CallFunc_BuildSystemGetCategoryByName_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue = CallFunc_BuildSystemGetIAllItemsByPath_ReturnValue;
	Parms.CallFunc_BuildSystemGetItemsByPath_ReturnValue = CallFunc_BuildSystemGetItemsByPath_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue_2 = CallFunc_BuildSystemGetCategoryByName_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue = CallFunc_BuildSystemGetEntityCurrentCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.UpdateCatalogs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                AvailableCatalogs                                                (Edit, BlueprintVisible)
// class FName                        CurrentCatalog                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Catalogs                                                         (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_1                                   (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BuildSystemCreatePathID_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_2                                   (ReferenceParm)
// TArray<class FName>                CallFunc_JoinPaths_Array1                                        (ReferenceParm)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildCatalogPath           CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue             (None)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_3                                   (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue               (ReferenceParm)
// TArray<class FName>                CallFunc_BuildSystemGetAllPathIDs_ReturnValue                    (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::UpdateCatalogs(const TArray<class FName>& AvailableCatalogs, class FName CurrentCatalog, const TArray<class FName>& Catalogs, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_GetCurrentPath_Path, TArray<class FName>& CallFunc_GetCurrentPath_Path_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName CallFunc_BuildSystemCreatePathID_ReturnValue, class FName CallFunc_BuildSystemCreatePathID_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_2, TArray<class FName>& CallFunc_JoinPaths_Array1, int32 CallFunc_Divide_IntInt_ReturnValue, const struct FBuildCatalogPath& CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetCurrentPath_Path_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FName>& CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue, TArray<class FName>& CallFunc_BuildSystemGetAllPathIDs_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "UpdateCatalogs");

	Params::UWid_BuildSystem_Building_C_UpdateCatalogs_Params Parms{};

	Parms.AvailableCatalogs = AvailableCatalogs;
	Parms.CurrentCatalog = CurrentCatalog;
	Parms.Catalogs = Catalogs;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCurrentPath_Path_1 = CallFunc_GetCurrentPath_Path_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue = CallFunc_BuildSystemCreatePathID_ReturnValue;
	Parms.CallFunc_BuildSystemCreatePathID_ReturnValue_1 = CallFunc_BuildSystemCreatePathID_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_2 = CallFunc_GetCurrentPath_Path_2;
	Parms.CallFunc_JoinPaths_Array1 = CallFunc_JoinPaths_Array1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue = CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCurrentPath_Path_3 = CallFunc_GetCurrentPath_Path_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue = CallFunc_BuildSystemGetAvaiablePathIDs_ReturnValue;
	Parms.CallFunc_BuildSystemGetAllPathIDs_ReturnValue = CallFunc_BuildSystemGetAllPathIDs_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue = CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InitItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::InitItems(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InitItems");

	Params::UWid_BuildSystem_Building_C_InitItems_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InitMainMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_BuildSystemGetRootCatalogIDs_ReturnValue                (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildCatalogPath           CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::InitMainMenu(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_BuildSystemGetRootCatalogIDs_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FBuildCatalogPath& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InitMainMenu");

	Params::UWid_BuildSystem_Building_C_InitMainMenu_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_BuildSystemGetRootCatalogIDs_ReturnValue = CallFunc_BuildSystemGetRootCatalogIDs_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.GoToEntitiesMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::GoToEntitiesMenu(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "GoToEntitiesMenu");

	Params::UWid_BuildSystem_Building_C_GoToEntitiesMenu_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.GoToItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildCategory          CallFunc_BuildSystemGetCategoryByName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::GoToItems(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Array_Get_Item, int32 Temp_int_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, enum class EBuildCategory CallFunc_BuildSystemGetCategoryByName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "GoToItems");

	Params::UWid_BuildSystem_Building_C_GoToItems_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BuildSystemGetCategoryByName_ReturnValue = CallFunc_BuildSystemGetCategoryByName_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputFaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputFaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputR1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputR1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputR1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputL1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputL1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputL1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputDPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputDPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputDPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputDPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputDPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputDPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputDPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputDPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputFaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.InputFaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Building_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "Tick");

	Params::UWid_BuildSystem_Building_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.OnBuildingToolsEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::OnBuildingToolsEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "OnBuildingToolsEntered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.LogNoResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::LogNoResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "LogNoResources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.LogInvalidSpot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::LogInvalidSpot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "LogInvalidSpot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.LogOnlyOneBuilding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::LogOnlyOneBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "LogOnlyOneBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.LogUnavailableTier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::LogUnavailableTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "LogUnavailableTier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.TutorialButtonUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::TutorialButtonUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "TutorialButtonUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.ExecuteUbergraph_wid_BuildSystem_Building
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_4                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_4                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_5                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_5                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_6                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_6                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_7                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_7                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_8                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_8                                         (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path                                     (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_1                                   (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue_1   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCurrentPath_Path_2                                   (ReferenceParm)
// TArray<class FName>                CallFunc_JoinPaths_Array1                                        (ReferenceParm)
// struct FBuildCatalogPath           CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue             (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseBuildSystemEntity*      CallFunc_GetBuildEntityInFront_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentBuildID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue                    (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentBuildID_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue_1                  (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_BuildSystemGetReadablePath_ReturnValue                  (None)
// class FName                        CallFunc_GetCurrentBuildID_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      CallFunc_GetBuildEntityInFront_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_BuildSystem_EntityList_Entry_C*CallFunc_GetTab_Tab                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue_2                  (None)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEnoughResources_HasEnough                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePlaced_CanBePlaced                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_GetBuildIdOnMarker_BuildID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class FName                        CallFunc_GetBuildIdOnMarker_BuildID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_4                                         (ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBuildIdOnMarker_BuildID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FName                        CallFunc_GetBuildIdOnMarker_BuildID_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_CanBePlacedDueToQuantity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildableAvailable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue_3                  (None)
// struct FSt_BuildSystem_TierItem    CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Building_C::ExecuteUbergraph_wid_BuildSystem_Building(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_4, FDelegateProperty_ Temp_delegate_Variable_4, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_5, FDelegateProperty_ Temp_delegate_Variable_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_6, FDelegateProperty_ Temp_delegate_Variable_6, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_7, FDelegateProperty_ Temp_delegate_Variable_7, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_8, FDelegateProperty_ Temp_delegate_Variable_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, enum class ESlateVisibility Temp_byte_Variable_3, TArray<class FName>& CallFunc_GetCurrentPath_Path, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& CallFunc_GetCurrentPath_Path_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue_1, const class FString& K2Node_Select_Default, class FText K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, TArray<class FName>& CallFunc_GetCurrentPath_Path_2, TArray<class FName>& CallFunc_JoinPaths_Array1, const struct FBuildCatalogPath& CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad_1, bool CallFunc_LastInputWasFromGamepad_Gamepad_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool Temp_bool_Variable_4, class FName CallFunc_GetCurrentBuildID_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, int32 CallFunc_Array_Length_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_Greater_IntInt_ReturnValue_1, class FName CallFunc_GetCurrentBuildID_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, class FText CallFunc_BuildSystemGetReadablePath_ReturnValue, class FName CallFunc_GetCurrentBuildID_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_6, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, int32 CallFunc_PostEvent_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UWid_BuildSystem_EntityList_Entry_C* CallFunc_GetTab_Tab, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue_2, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_HasEnoughResources_HasEnough, bool CallFunc_CanBePlaced_CanBePlaced, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, int32 CallFunc_PostEvent_ReturnValue_3, TArray<float>& K2Node_MakeArray_Array, TArray<float>& K2Node_MakeArray_Array_1, class FName CallFunc_GetBuildIdOnMarker_BuildID, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FName CallFunc_GetBuildIdOnMarker_BuildID_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, int32 CallFunc_PostEvent_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, TArray<float>& K2Node_MakeArray_Array_4, int32 CallFunc_PostEvent_ReturnValue_5, class FName CallFunc_GetBuildIdOnMarker_BuildID_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, int32 CallFunc_PostEvent_ReturnValue_6, TArray<float>& K2Node_MakeArray_Array_6, class FName CallFunc_GetBuildIdOnMarker_BuildID_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, bool CallFunc_CanBePlacedDueToQuantity_ReturnValue, bool CallFunc_IsBuildableAvailable_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue_3, const struct FSt_BuildSystem_TierItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, int32 CallFunc_PostEvent_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, int32 CallFunc_PostEvent_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default_5, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "ExecuteUbergraph_wid_BuildSystem_Building");

	Params::UWid_BuildSystem_Building_C_ExecuteUbergraph_wid_BuildSystem_Building_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_delegate_Variable_4 = Temp_delegate_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_delegate_Variable_5 = Temp_delegate_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_delegate_Variable_6 = Temp_delegate_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_delegate_Variable_7 = Temp_delegate_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_delegate_Variable_8 = Temp_delegate_Variable_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue = CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetCurrentPath_Path = CallFunc_GetCurrentPath_Path;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetCurrentPath_Path_1 = CallFunc_GetCurrentPath_Path_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue_1 = CallFunc_BuildSystemIsCurrentCatalogTreeComplete_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCurrentPath_Path_2 = CallFunc_GetCurrentPath_Path_2;
	Parms.CallFunc_JoinPaths_Array1 = CallFunc_JoinPaths_Array1;
	Parms.CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue = CallFunc_BuildSystemGetCatalogInfoByPath_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetBuildEntityInFront_ReturnValue = CallFunc_GetBuildEntityInFront_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad_1 = CallFunc_LastInputWasFromGamepad_Gamepad_1;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad_2 = CallFunc_LastInputWasFromGamepad_Gamepad_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetCurrentBuildID_ReturnValue = CallFunc_GetCurrentBuildID_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue = CallFunc_BuildSystemGetEntityInfo_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentBuildID_ReturnValue_1 = CallFunc_GetCurrentBuildID_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue_1 = CallFunc_BuildSystemGetEntityInfo_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_BuildSystemGetReadablePath_ReturnValue = CallFunc_BuildSystemGetReadablePath_ReturnValue;
	Parms.CallFunc_GetCurrentBuildID_ReturnValue_2 = CallFunc_GetCurrentBuildID_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetBuildEntityInFront_ReturnValue_1 = CallFunc_GetBuildEntityInFront_ReturnValue_1;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetTab_Tab = CallFunc_GetTab_Tab;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue_2 = CallFunc_BuildSystemGetEntityInfo_ReturnValue_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_HasEnoughResources_HasEnough = CallFunc_HasEnoughResources_HasEnough;
	Parms.CallFunc_CanBePlaced_CanBePlaced = CallFunc_CanBePlaced_CanBePlaced;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetBuildIdOnMarker_BuildID = CallFunc_GetBuildIdOnMarker_BuildID;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetBuildIdOnMarker_BuildID_1 = CallFunc_GetBuildIdOnMarker_BuildID_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_PostEvent_ReturnValue_4 = CallFunc_PostEvent_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_PostEvent_ReturnValue_5 = CallFunc_PostEvent_ReturnValue_5;
	Parms.CallFunc_GetBuildIdOnMarker_BuildID_2 = CallFunc_GetBuildIdOnMarker_BuildID_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_PostEvent_ReturnValue_6 = CallFunc_PostEvent_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_GetBuildIdOnMarker_BuildID_3 = CallFunc_GetBuildIdOnMarker_BuildID_3;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.CallFunc_CanBePlacedDueToQuantity_ReturnValue = CallFunc_CanBePlacedDueToQuantity_ReturnValue;
	Parms.CallFunc_IsBuildableAvailable_ReturnValue = CallFunc_IsBuildableAvailable_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue_3 = CallFunc_BuildSystemGetEntityInfo_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_PostEvent_ReturnValue_7 = CallFunc_PostEvent_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_PostEvent_ReturnValue_8 = CallFunc_PostEvent_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.GoToEditMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::GoToEditMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "GoToEditMode__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Building.wid_BuildSystem_Building_C.ShouldClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Building_C::ShouldClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_C", "ShouldClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


