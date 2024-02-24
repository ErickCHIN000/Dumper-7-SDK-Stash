#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapTracker.BP_MapTracker_C
// (None)

class UClass* UBP_MapTracker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapTracker_C");

	return Clss;
}


// BP_MapTracker_C BP_MapTracker.Default__BP_MapTracker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapTracker_C* UBP_MapTracker_C::GetDefaultObj()
{
	static class UBP_MapTracker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapTracker_C*>(UBP_MapTracker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapTracker.BP_MapTracker_C.MarkerExistsInCurrentRealm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         MarkerData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MarkerFound                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentLevel                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelWaypoints           CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaypointInformation      CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::MarkerExistsInCurrentRealm(const struct FDataTableRowHandle& MarkerData, bool* Result, bool MarkerFound, const class FString& CurrentLevel, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "MarkerExistsInCurrentRealm");

	Params::UBP_MapTracker_C_MarkerExistsInCurrentRealm_Params Parms{};

	Parms.MarkerData = MarkerData;
	Parms.MarkerFound = MarkerFound;
	Parms.CurrentLevel = CurrentLevel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MapTracker.BP_MapTracker_C.CanPlaceStampInCurrentRealm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentStampCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentLevel                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelWaypoints           CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::CanPlaceStampInCurrentRealm(bool* Result, int32 CurrentStampCount, const class FString& CurrentLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "CanPlaceStampInCurrentRealm");

	Params::UBP_MapTracker_C_CanPlaceStampInCurrentRealm_Params Parms{};

	Parms.CurrentStampCount = CurrentStampCount;
	Parms.CurrentLevel = CurrentLevel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_MapTracker.BP_MapTracker_C.Is Waypoint Type in Use
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         WaypointTypeToCheck                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsInUse                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WaypointInformation>CurrentWaypointsInUse                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// class FString                      CurrentLevel                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentWaypoint                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> WaypointTypesFound                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaypointInformation      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelWaypoints           CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Is_Waypoint_Type_in_Use(const struct FDataTableRowHandle& WaypointTypeToCheck, bool* IsInUse, bool Result, const TArray<struct FS_WaypointInformation>& CurrentWaypointsInUse, const class FString& CurrentLevel, const struct FDataTableRowHandle& CurrentWaypoint, const TArray<struct FDataTableRowHandle>& WaypointTypesFound, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FS_WaypointInformation& CallFunc_Array_Get_Item, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Is Waypoint Type in Use");

	Params::UBP_MapTracker_C_Is_Waypoint_Type_in_Use_Params Parms{};

	Parms.WaypointTypeToCheck = WaypointTypeToCheck;
	Parms.Result = Result;
	Parms.CurrentWaypointsInUse = CurrentWaypointsInUse;
	Parms.CurrentLevel = CurrentLevel;
	Parms.CurrentWaypoint = CurrentWaypoint;
	Parms.WaypointTypesFound = WaypointTypesFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInUse != nullptr)
		*IsInUse = Parms.IsInUse;

}


// Function BP_MapTracker.BP_MapTracker_C.Get All Discovery Locations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLevelDiscoveryLocation>All_Discovery_Locations                                          (Parm, OutParm)

void UBP_MapTracker_C::Get_All_Discovery_Locations(TArray<struct FLevelDiscoveryLocation>* All_Discovery_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Get All Discovery Locations");

	Params::UBP_MapTracker_C_Get_All_Discovery_Locations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (All_Discovery_Locations != nullptr)
		*All_Discovery_Locations = std::move(Parms.All_Discovery_Locations);

}


// Function BP_MapTracker.BP_MapTracker_C.OnRep_All Discovery Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_WorldMapManager_C*       World_Map_Manager_LOCAL                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::OnRep_All_Discovery_Locations(class UBP_WorldMapManager_C* World_Map_Manager_LOCAL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "OnRep_All Discovery Locations");

	Params::UBP_MapTracker_C_OnRep_All_Discovery_Locations_Params Parms{};

	Parms.World_Map_Manager_LOCAL = World_Map_Manager_LOCAL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Discover Discovery Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Discovery_Location_Index_LOCAL                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>Discovery_Location_Information_LOCAL                             (Edit, BlueprintVisible)
// int32                              Level_Index_LOCAL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Expected_Level_Name_LOCAL                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Actual_Level_Name_LOCAL                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryInformation       CallFunc_Make_DiscoveryInformation_Discovery_Information         (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryInformation       CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FLevelDiscoveryLocation     CallFunc_Array_Get_Item_1                                        (None)
// struct FGuid                       CallFunc_Break_DiscoveryInformation_ID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateCallFunc_Break_DiscoveryInformation_Discovery_Location_State     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelDiscoveryLocation_Level_Name                 (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information(ReferenceParm)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Discover_Discovery_Location(const struct FGuid& Discovery_Location_ID, class ABP_PlayerController_C* Player_Controller, bool* Success, int32 Discovery_Location_Index_LOCAL, const TArray<struct FDiscoveryInformation>& Discovery_Location_Information_LOCAL, int32 Level_Index_LOCAL, const class FString& Expected_Level_Name_LOCAL, const class FString& Actual_Level_Name_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FDiscoveryInformation& CallFunc_Make_DiscoveryInformation_Discovery_Information, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FDiscoveryInformation& CallFunc_Array_Get_Item, const struct FLevelDiscoveryLocation& CallFunc_Array_Get_Item_1, const struct FGuid& CallFunc_Break_DiscoveryInformation_ID, enum class EFDiscoveryLocationState CallFunc_Break_DiscoveryInformation_Discovery_Location_State, const class FString& CallFunc_Break_LevelDiscoveryLocation_Level_Name, TArray<struct FDiscoveryInformation>& CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Discover Discovery Location");

	Params::UBP_MapTracker_C_Discover_Discovery_Location_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;
	Parms.Player_Controller = Player_Controller;
	Parms.Discovery_Location_Index_LOCAL = Discovery_Location_Index_LOCAL;
	Parms.Discovery_Location_Information_LOCAL = Discovery_Location_Information_LOCAL;
	Parms.Level_Index_LOCAL = Level_Index_LOCAL;
	Parms.Expected_Level_Name_LOCAL = Expected_Level_Name_LOCAL;
	Parms.Actual_Level_Name_LOCAL = Actual_Level_Name_LOCAL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Make_DiscoveryInformation_Discovery_Information = CallFunc_Make_DiscoveryInformation_Discovery_Information;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Break_DiscoveryInformation_ID = CallFunc_Break_DiscoveryInformation_ID;
	Parms.CallFunc_Break_DiscoveryInformation_Discovery_Location_State = CallFunc_Break_DiscoveryInformation_Discovery_Location_State;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Level_Name = CallFunc_Break_LevelDiscoveryLocation_Level_Name;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information = CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MapTracker.BP_MapTracker_C.On Discovery Locations Updated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDiscoveryLocation>  Discovery_Locations                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index_LOCAL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Level_Found_LOCAL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>Discovery_Information_LOCAL                                      (Edit, BlueprintVisible)
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateTemp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryLocation          CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_DiscoveryLocation_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Discovery_Location_Discovered_Is_Discovered          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location_   (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     CallFunc_Array_Get_Item_1                                        (None)
// enum class EFDiscoveryLocationStateK2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelDiscoveryLocation_Level_Name                 (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information(ReferenceParm)
// struct FDiscoveryInformation       CallFunc_Make_DiscoveryInformation_Discovery_Information         (NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location__1 (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelDiscoveryLocation_Level_Name_1               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information_1(ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::On_Discovery_Locations_Updated(TArray<struct FDiscoveryLocation>& Discovery_Locations, int32 Index_LOCAL, bool Level_Found_LOCAL, const TArray<struct FDiscoveryInformation>& Discovery_Information_LOCAL, const class FString& Level_Name_LOCAL, enum class EFDiscoveryLocationState Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class EFDiscoveryLocationState Temp_byte_Variable_1, const struct FDiscoveryLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Break_DiscoveryLocation_ID, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Is_Discovery_Location_Discovered_Is_Discovered, const struct FLevelDiscoveryLocation& CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location_, bool Temp_bool_Variable, const struct FLevelDiscoveryLocation& CallFunc_Array_Get_Item_1, enum class EFDiscoveryLocationState K2Node_Select_Default, const class FString& CallFunc_Break_LevelDiscoveryLocation_Level_Name, TArray<struct FDiscoveryInformation>& CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information, const struct FDiscoveryInformation& CallFunc_Make_DiscoveryInformation_Discovery_Information, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FLevelDiscoveryLocation& CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location__1, int32 CallFunc_Array_Add_ReturnValue, const struct FLevelDiscoveryLocation& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Break_LevelDiscoveryLocation_Level_Name_1, TArray<struct FDiscoveryInformation>& CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "On Discovery Locations Updated");

	Params::UBP_MapTracker_C_On_Discovery_Locations_Updated_Params Parms{};

	Parms.Discovery_Locations = Discovery_Locations;
	Parms.Index_LOCAL = Index_LOCAL;
	Parms.Level_Found_LOCAL = Level_Found_LOCAL;
	Parms.Discovery_Information_LOCAL = Discovery_Information_LOCAL;
	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_DiscoveryLocation_ID = CallFunc_Break_DiscoveryLocation_ID;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Is_Discovery_Location_Discovered_Is_Discovered = CallFunc_Is_Discovery_Location_Discovered_Is_Discovered;
	Parms.CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location_ = CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Level_Name = CallFunc_Break_LevelDiscoveryLocation_Level_Name;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information = CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information;
	Parms.CallFunc_Make_DiscoveryInformation_Discovery_Information = CallFunc_Make_DiscoveryInformation_Discovery_Information;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location__1 = CallFunc_Make_LevelDiscoveryLocation_Level_Discovery_Location__1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Level_Name_1 = CallFunc_Break_LevelDiscoveryLocation_Level_Name_1;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information_1 = CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Is Discovery Location Discovered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Discovered                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelDiscoveryLocation_Level_Name                 (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information(ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryInformation       CallFunc_Array_Get_Item_1                                        (NoDestructor)
// struct FGuid                       CallFunc_Break_DiscoveryInformation_ID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateCallFunc_Break_DiscoveryInformation_Discovery_Location_State     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Is_Discovery_Location_Discovered(const struct FGuid& Discovery_Location_ID, bool* Is_Discovered, const class FString& Level_Name_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLevelDiscoveryLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Break_LevelDiscoveryLocation_Level_Name, TArray<struct FDiscoveryInformation>& CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FDiscoveryInformation& CallFunc_Array_Get_Item_1, const struct FGuid& CallFunc_Break_DiscoveryInformation_ID, enum class EFDiscoveryLocationState CallFunc_Break_DiscoveryInformation_Discovery_Location_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Is Discovery Location Discovered");

	Params::UBP_MapTracker_C_Is_Discovery_Location_Discovered_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;
	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Level_Name = CallFunc_Break_LevelDiscoveryLocation_Level_Name;
	Parms.CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information = CallFunc_Break_LevelDiscoveryLocation_Discovery_Location_Information;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Break_DiscoveryInformation_ID = CallFunc_Break_DiscoveryInformation_ID;
	Parms.CallFunc_Break_DiscoveryInformation_Discovery_Location_State = CallFunc_Break_DiscoveryInformation_Discovery_Location_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Discovered != nullptr)
		*Is_Discovered = Parms.Is_Discovered;

}


// Function BP_MapTracker.BP_MapTracker_C.Map Teleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Destination_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Destination_Rotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TeleportPawnToLocation_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Map_Teleport(const struct FVector& Destination_Location, const struct FRotator& Destination_Rotation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_ObjectToText_ReturnValue, bool CallFunc_CanUseSupportCommands_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TeleportPawnToLocation_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Map Teleport");

	Params::UBP_MapTracker_C_Map_Teleport_Params Parms{};

	Parms.Destination_Location = Destination_Location;
	Parms.Destination_Rotation = Destination_Rotation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TeleportPawnToLocation_Result = CallFunc_TeleportPawnToLocation_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Fast Travel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Location_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MapLocationManager_C*    CallFunc_Get_Map_Location_Manager_Map_Location_Manager           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       CallFunc_Get_Fast_Travel_Location_Fast_Travel_Location           (HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name                  (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type               (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Fast_Travel(const struct FGuid& Location_ID, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered, class ABP_MapLocationManager_C* CallFunc_Get_Map_Location_Manager_Map_Location_Manager, bool CallFunc_IsServer_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Get_Fast_Travel_Location_Fast_Travel_Location, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Fast Travel");

	Params::UBP_MapTracker_C_Fast_Travel_Params Parms{};

	Parms.Location_ID = Location_ID;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered = CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered;
	Parms.CallFunc_Get_Map_Location_Manager_Map_Location_Manager = CallFunc_Get_Map_Location_Manager_Map_Location_Manager;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Get_Fast_Travel_Location_Fast_Travel_Location = CallFunc_Get_Fast_Travel_Location_Fast_Travel_Location;
	Parms.CallFunc_Break_FastTravelLocation_ID = CallFunc_Break_FastTravelLocation_ID;
	Parms.CallFunc_Break_FastTravelLocation_World_Location = CallFunc_Break_FastTravelLocation_World_Location;
	Parms.CallFunc_Break_FastTravelLocation_Rotation = CallFunc_Break_FastTravelLocation_Rotation;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name = CallFunc_Break_FastTravelLocation_Location_Name;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type = CallFunc_Break_FastTravelLocation_Fast_Travel_Type;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Discover Fast Travel Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Fast_Travel_Index_LOCAL                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>Fast_Travel_Information_LOCAL                                    (Edit, BlueprintVisible)
// int32                              Level_Index_LOCAL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelInformation_ID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelInformation_Fast_Travel_Location_State  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    CallFunc_Make_FastTravelInformation_S_FastTravelInformation      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelFastTravelLocation_Level_Name                (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information   (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Discover_Fast_Travel_Location(const struct FGuid& Fast_Travel_Location_ID, bool* Success, int32 Fast_Travel_Index_LOCAL, const TArray<struct FS_FastTravelInformation>& Fast_Travel_Information_LOCAL, int32 Level_Index_LOCAL, const class FString& Level_Name_LOCAL, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FS_FastTravelInformation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelInformation_ID, enum class E_FastTravelLocationState CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, const struct FS_FastTravelInformation& CallFunc_Make_FastTravelInformation_S_FastTravelInformation, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelFastTravelLocation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Break_LevelFastTravelLocation_Level_Name, TArray<struct FS_FastTravelInformation>& CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Discover Fast Travel Location");

	Params::UBP_MapTracker_C_Discover_Fast_Travel_Location_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;
	Parms.Fast_Travel_Index_LOCAL = Fast_Travel_Index_LOCAL;
	Parms.Fast_Travel_Information_LOCAL = Fast_Travel_Information_LOCAL;
	Parms.Level_Index_LOCAL = Level_Index_LOCAL;
	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_FastTravelInformation_ID = CallFunc_Break_FastTravelInformation_ID;
	Parms.CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State = CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Make_FastTravelInformation_S_FastTravelInformation = CallFunc_Make_FastTravelInformation_S_FastTravelInformation;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Break_LevelFastTravelLocation_Level_Name = CallFunc_Break_LevelFastTravelLocation_Level_Name;
	Parms.CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information = CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_MapTracker.BP_MapTracker_C.OnRep_All Active Waypoint Markers
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_WorldMapManager_C*       World_Map_Manager_LOCAL                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_WaypointMarker_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_WaypointMarker_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerMap_Temp_TransitionComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::OnRep_All_Active_Waypoint_Markers(const class FString& Level_Name_LOCAL, class UBP_WorldMapManager_C* World_Map_Manager_LOCAL, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_WaypointMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_WaypointMarker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UBP_PlayerMap_Temp_TransitionComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "OnRep_All Active Waypoint Markers");

	Params::UBP_MapTracker_C_OnRep_All_Active_Waypoint_Markers_Params Parms{};

	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.World_Map_Manager_LOCAL = World_Map_Manager_LOCAL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.On Fast Travel Locations Updated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_FastTravelLocation>Fast_Travel_Locations                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index_LOCAL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Level_Found_LOCAL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>Fast_Travel_Information_LOCAL                                    (Edit, BlueprintVisible)
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation   (HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelFastTravelLocation_Level_Name                (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information   (ReferenceParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name                  (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type               (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    CallFunc_Make_FastTravelInformation_S_FastTravelInformation      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation_1 (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelFastTravelLocation_Level_Name_1              (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information_1 (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::On_Fast_Travel_Locations_Updated(TArray<struct FS_FastTravelLocation>& Fast_Travel_Locations, int32 Index_LOCAL, bool Level_Found_LOCAL, const TArray<struct FS_FastTravelInformation>& Fast_Travel_Information_LOCAL, const class FString& Level_Name_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class E_FastTravelLocationState Temp_byte_Variable, bool Temp_bool_Variable, const struct FS_LevelFastTravelLocation& CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation, const struct FS_LevelFastTravelLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Break_LevelFastTravelLocation_Level_Name, TArray<struct FS_FastTravelInformation>& CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Array_Get_Item_1, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered, bool CallFunc_Less_IntInt_ReturnValue, enum class E_FastTravelLocationState K2Node_Select_Default, const struct FS_FastTravelInformation& CallFunc_Make_FastTravelInformation_S_FastTravelInformation, const struct FS_LevelFastTravelLocation& CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FS_LevelFastTravelLocation& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Break_LevelFastTravelLocation_Level_Name_1, TArray<struct FS_FastTravelInformation>& CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "On Fast Travel Locations Updated");

	Params::UBP_MapTracker_C_On_Fast_Travel_Locations_Updated_Params Parms{};

	Parms.Fast_Travel_Locations = Fast_Travel_Locations;
	Parms.Index_LOCAL = Index_LOCAL;
	Parms.Level_Found_LOCAL = Level_Found_LOCAL;
	Parms.Fast_Travel_Information_LOCAL = Fast_Travel_Information_LOCAL;
	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation = CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_LevelFastTravelLocation_Level_Name = CallFunc_Break_LevelFastTravelLocation_Level_Name;
	Parms.CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information = CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Break_FastTravelLocation_ID = CallFunc_Break_FastTravelLocation_ID;
	Parms.CallFunc_Break_FastTravelLocation_World_Location = CallFunc_Break_FastTravelLocation_World_Location;
	Parms.CallFunc_Break_FastTravelLocation_Rotation = CallFunc_Break_FastTravelLocation_Rotation;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name = CallFunc_Break_FastTravelLocation_Location_Name;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type = CallFunc_Break_FastTravelLocation_Fast_Travel_Type;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered = CallFunc_Is_Fast_Travel_Location_Discovered_Is_Discovered;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Make_FastTravelInformation_S_FastTravelInformation = CallFunc_Make_FastTravelInformation_S_FastTravelInformation;
	Parms.CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation_1 = CallFunc_MakeLevelFastTravelLocation_S_LevelFastTravelLocation_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Break_LevelFastTravelLocation_Level_Name_1 = CallFunc_Break_LevelFastTravelLocation_Level_Name_1;
	Parms.CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information_1 = CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Is Fast Travel Location Discovered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Discovered                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name_LOCAL                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Break_LevelFastTravelLocation_Level_Name                (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information   (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelInformation_ID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelInformation_Fast_Travel_Location_State  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Is_Fast_Travel_Location_Discovered(const struct FGuid& Fast_Travel_Location_ID, bool* Is_Discovered, const class FString& Level_Name_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FS_LevelFastTravelLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Break_LevelFastTravelLocation_Level_Name, TArray<struct FS_FastTravelInformation>& CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_FastTravelInformation& CallFunc_Array_Get_Item_1, const struct FGuid& CallFunc_Break_FastTravelInformation_ID, enum class E_FastTravelLocationState CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Is Fast Travel Location Discovered");

	Params::UBP_MapTracker_C_Is_Fast_Travel_Location_Discovered_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;
	Parms.Level_Name_LOCAL = Level_Name_LOCAL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_LevelFastTravelLocation_Level_Name = CallFunc_Break_LevelFastTravelLocation_Level_Name;
	Parms.CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information = CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Break_FastTravelInformation_ID = CallFunc_Break_FastTravelInformation_ID;
	Parms.CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State = CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Discovered != nullptr)
		*Is_Discovered = Parms.Is_Discovered;

}


// Function BP_MapTracker.BP_MapTracker_C.Get Map Location Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MapLocationManager_C*    Map_Location_Manager                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MapLocationManager_C*    CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Get_Map_Location_Manager(class ABP_MapLocationManager_C** Map_Location_Manager, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ABP_MapLocationManager_C* CallFunc_GetManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Get Map Location Manager");

	Params::UBP_MapTracker_C_Get_Map_Location_Manager_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Map_Location_Manager != nullptr)
		*Map_Location_Manager = Parms.Map_Location_Manager;

}


// Function BP_MapTracker.BP_MapTracker_C.ReceiveAuthorityGained
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MapTracker_C::ReceiveAuthorityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "ReceiveAuthorityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapTracker.BP_MapTracker_C.ReceiveAuthorityLost
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MapTracker_C::ReceiveAuthorityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "ReceiveAuthorityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapTracker.BP_MapTracker_C.Event OnFastTravelLocationsUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_FastTravelLocation>Fast_Travel_Locations                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MapTracker_C::Event_OnFastTravelLocationsUpdated(TArray<struct FS_FastTravelLocation>& Fast_Travel_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Event OnFastTravelLocationsUpdated");

	Params::UBP_MapTracker_C_Event_OnFastTravelLocationsUpdated_Params Parms{};

	Parms.Fast_Travel_Locations = Fast_Travel_Locations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Event OnDiscoveryLocationsUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDiscoveryLocation>  Discovery_Locations                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MapTracker_C::Event_OnDiscoveryLocationsUpdated(TArray<struct FDiscoveryLocation>& Discovery_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Event OnDiscoveryLocationsUpdated");

	Params::UBP_MapTracker_C_Event_OnDiscoveryLocationsUpdated_Params Parms{};

	Parms.Discovery_Locations = Discovery_Locations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.Process Discovery Location
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Title_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Zone_Name                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MapTracker_C::Process_Discovery_Location(const struct FGuid& ID, class ABP_PlayerController_C* Player_Controller, class FText Title_Text, class FText Zone_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Process Discovery Location");

	Params::UBP_MapTracker_C_Process_Discovery_Location_Params Parms{};

	Parms.ID = ID;
	Parms.Player_Controller = Player_Controller;
	Parms.Title_Text = Title_Text;
	Parms.Zone_Name = Zone_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MapTracker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapTracker.BP_MapTracker_C.Event OnMapLocationManagerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManagerBase*                Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MapTracker_C::Event_OnMapLocationManagerReady(class AManagerBase* Manager, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "Event OnMapLocationManagerReady");

	Params::UBP_MapTracker_C_Event_OnMapLocationManagerReady_Params Parms{};

	Parms.Manager = Manager;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.ExecuteUbergraph_BP_MapTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MapLocationManager_C*    CallFunc_Get_Map_Location_Manager_Map_Location_Manager           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelLocation>K2Node_CustomEvent_Fast_Travel_Locations                         (ReferenceParm)
// class ABP_MapLocationManager_C*    CallFunc_Get_Map_Location_Manager_Map_Location_Manager_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryLocation>  K2Node_CustomEvent_Discovery_Locations                           (ReferenceParm)
// TArray<struct FDiscoveryLocation>  CallFunc_Get_Discovery_Locations_Discovery_Locations             (ReferenceParm)
// TArray<struct FS_FastTravelLocation>CallFunc_Get_Fast_Travel_Locations_Fast_Travel_Locations         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_CustomEvent_Player_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Title_Text                                    (None)
// class FText                        K2Node_CustomEvent_Zone_Name                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Discover_Discovery_Location_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Discovery_Location_Discovered_Is_Discovered          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AManagerBase>    Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AManagerBase*                K2Node_CustomEvent_Manager                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_MapTracker_C::ExecuteUbergraph_BP_MapTracker(int32 EntryPoint, class ABP_MapLocationManager_C* CallFunc_Get_Map_Location_Manager_Map_Location_Manager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TArray<struct FS_FastTravelLocation>& K2Node_CustomEvent_Fast_Travel_Locations, class ABP_MapLocationManager_C* CallFunc_Get_Map_Location_Manager_Map_Location_Manager_1, TArray<struct FDiscoveryLocation>& K2Node_CustomEvent_Discovery_Locations, TArray<struct FDiscoveryLocation>& CallFunc_Get_Discovery_Locations_Discovery_Locations, TArray<struct FS_FastTravelLocation>& CallFunc_Get_Fast_Travel_Locations_Fast_Travel_Locations, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& K2Node_CustomEvent_ID, class ABP_PlayerController_C* K2Node_CustomEvent_Player_Controller, class FText K2Node_CustomEvent_Title_Text, class FText K2Node_CustomEvent_Zone_Name, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Discover_Discovery_Location_Success, bool CallFunc_Is_Discovery_Location_Discovered_Is_Discovered, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TSubclassOf<class AManagerBase> Temp_class_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_1, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, class AActor* CallFunc_GetOwner_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "ExecuteUbergraph_BP_MapTracker");

	Params::UBP_MapTracker_C_ExecuteUbergraph_BP_MapTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_Map_Location_Manager_Map_Location_Manager = CallFunc_Get_Map_Location_Manager_Map_Location_Manager;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Fast_Travel_Locations = K2Node_CustomEvent_Fast_Travel_Locations;
	Parms.CallFunc_Get_Map_Location_Manager_Map_Location_Manager_1 = CallFunc_Get_Map_Location_Manager_Map_Location_Manager_1;
	Parms.K2Node_CustomEvent_Discovery_Locations = K2Node_CustomEvent_Discovery_Locations;
	Parms.CallFunc_Get_Discovery_Locations_Discovery_Locations = CallFunc_Get_Discovery_Locations_Discovery_Locations;
	Parms.CallFunc_Get_Fast_Travel_Locations_Fast_Travel_Locations = CallFunc_Get_Fast_Travel_Locations_Fast_Travel_Locations;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_Player_Controller = K2Node_CustomEvent_Player_Controller;
	Parms.K2Node_CustomEvent_Title_Text = K2Node_CustomEvent_Title_Text;
	Parms.K2Node_CustomEvent_Zone_Name = K2Node_CustomEvent_Zone_Name;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Discover_Discovery_Location_Success = CallFunc_Discover_Discovery_Location_Success;
	Parms.CallFunc_Is_Discovery_Location_Discovered_Is_Discovered = CallFunc_Is_Discovery_Location_Discovered_Is_Discovered;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Manager = K2Node_CustomEvent_Manager;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapTracker.BP_MapTracker_C.UpdateWaypoints__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MapTracker_C::UpdateWaypoints__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapTracker_C", "UpdateWaypoints__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


