#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Map.BPFL_Map_C
// (None)

class UClass* UBPFL_Map_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Map_C");

	return Clss;
}


// BPFL_Map_C BPFL_Map.Default__BPFL_Map_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Map_C* UBPFL_Map_C::GetDefaultObj()
{
	static class UBPFL_Map_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Map_C*>(UBPFL_Map_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Map.BPFL_Map_C.GetShowWaypointInWorldFromType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         WaypointType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ShowInWorld                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::GetShowWaypointInWorldFromType(const struct FDataTableRowHandle& WaypointType, class UObject* __WorldContext, bool* ShowInWorld, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "GetShowWaypointInWorldFromType");

	Params::UBPFL_Map_C_GetShowWaypointInWorldFromType_Params Parms{};

	Parms.WaypointType = WaypointType;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowInWorld != nullptr)
		*ShowInWorld = Parms.ShowInWorld;

}


// Function BPFL_Map.BPFL_Map_C.GetMapLocationManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameModeBase*               GameMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MapLocationManager_C*    MapLocationManager                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MapLocationManager_C*    CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::GetMapLocationManager(class AGameModeBase* GameMode, class UObject* __WorldContext, class ABP_MapLocationManager_C** MapLocationManager, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ABP_MapLocationManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "GetMapLocationManager");

	Params::UBPFL_Map_C_GetMapLocationManager_Params Parms{};

	Parms.GameMode = GameMode;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MapLocationManager != nullptr)
		*MapLocationManager = Parms.MapLocationManager;

}


// Function BPFL_Map.BPFL_Map_C.BreakUIMapTable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_UI_MapTable              S_UI_MapTable                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Map_Level_Name                                                   (Parm, OutParm)
// class FText                        Level_Description                                                (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   Map_Texture                                                      (Parm, OutParm, HasGetValueTypeHash)
// enum class E_MapRotation           Map_Rotation_Override                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Maximum_Realm_Height                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::BreakUIMapTable(struct FS_UI_MapTable& S_UI_MapTable, class UObject* __WorldContext, class FText* Map_Level_Name, class FText* Level_Description, TSoftObjectPtr<class UTexture2D>* Map_Texture, enum class E_MapRotation* Map_Rotation_Override, double* Maximum_Realm_Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "BreakUIMapTable");

	Params::UBPFL_Map_C_BreakUIMapTable_Params Parms{};

	Parms.S_UI_MapTable = S_UI_MapTable;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Map_Level_Name != nullptr)
		*Map_Level_Name = Parms.Map_Level_Name;

	if (Level_Description != nullptr)
		*Level_Description = Parms.Level_Description;

	if (Map_Texture != nullptr)
		*Map_Texture = Parms.Map_Texture;

	if (Map_Rotation_Override != nullptr)
		*Map_Rotation_Override = Parms.Map_Rotation_Override;

	if (Maximum_Realm_Height != nullptr)
		*Maximum_Realm_Height = Parms.Maximum_Realm_Height;

}


// Function BPFL_Map.BPFL_Map_C.Get Distance Text From Waypoint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         Waypoint_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DistanceTo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MapTracker_C*            CallFunc_GetMapTracker_MapTrackerComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelWaypoints           CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WaypointInformation      CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Get_Distance_Text_From_Waypoint(const struct FDataTableRowHandle& Waypoint_Type, class UObject* __WorldContext, double* DistanceTo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Get Distance Text From Waypoint");

	Params::UBPFL_Map_C_Get_Distance_Text_From_Waypoint_Params Parms{};

	Parms.Waypoint_Type = Waypoint_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetMapTracker_MapTrackerComponent = CallFunc_GetMapTracker_MapTrackerComponent;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DistanceTo != nullptr)
		*DistanceTo = Parms.DistanceTo;

}


// Function BPFL_Map.BPFL_Map_C.Initialize Discovery Component Sphere Overlap
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapExplorationComponent_C*Discovery_Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            Sphere_Collision                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Initialize_Discovery_Component_Sphere_Overlap(class UBP_MapExplorationComponent_C* Discovery_Component, class USphereComponent* Sphere_Collision, class UObject* __WorldContext, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Initialize Discovery Component Sphere Overlap");

	Params::UBPFL_Map_C_Initialize_Discovery_Component_Sphere_Overlap_Params Parms{};

	Parms.Discovery_Component = Discovery_Component;
	Parms.Sphere_Collision = Sphere_Collision;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast = CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Map.BPFL_Map_C.Make DiscoveryInformation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateDiscovery_Location_State                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryInformation       Discovery_Information                                            (Parm, OutParm, NoDestructor)
// struct FDiscoveryInformation       K2Node_MakeStruct_DiscoveryInformation                           (NoDestructor)

void UBPFL_Map_C::Make_DiscoveryInformation(const struct FGuid& ID, enum class EFDiscoveryLocationState Discovery_Location_State, class UObject* __WorldContext, struct FDiscoveryInformation* Discovery_Information, const struct FDiscoveryInformation& K2Node_MakeStruct_DiscoveryInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Make DiscoveryInformation");

	Params::UBPFL_Map_C_Make_DiscoveryInformation_Params Parms{};

	Parms.ID = ID;
	Parms.Discovery_Location_State = Discovery_Location_State;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_DiscoveryInformation = K2Node_MakeStruct_DiscoveryInformation;

	UObject::ProcessEvent(Func, &Parms);

	if (Discovery_Information != nullptr)
		*Discovery_Information = std::move(Parms.Discovery_Information);

}


// Function BPFL_Map.BPFL_Map_C.Break DiscoveryInformation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscoveryInformation       Discovery_Information                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFDiscoveryLocationStateDiscovery_Location_State                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Break_DiscoveryInformation(const struct FDiscoveryInformation& Discovery_Information, class UObject* __WorldContext, struct FGuid* ID, enum class EFDiscoveryLocationState* Discovery_Location_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break DiscoveryInformation");

	Params::UBPFL_Map_C_Break_DiscoveryInformation_Params Parms{};

	Parms.Discovery_Information = Discovery_Information;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	if (Discovery_Location_State != nullptr)
		*Discovery_Location_State = Parms.Discovery_Location_State;

}


// Function BPFL_Map.BPFL_Map_C.Make LevelDiscoveryLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Level_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>Discovery_Location_Information                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLevelDiscoveryLocation     Level_Discovery_Location_                                        (Parm, OutParm)
// struct FLevelDiscoveryLocation     K2Node_MakeStruct_LevelDiscoveryLocation                         (None)

void UBPFL_Map_C::Make_LevelDiscoveryLocation(const class FString& Level_Name, TArray<struct FDiscoveryInformation>& Discovery_Location_Information, class UObject* __WorldContext, struct FLevelDiscoveryLocation* Level_Discovery_Location_, const struct FLevelDiscoveryLocation& K2Node_MakeStruct_LevelDiscoveryLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Make LevelDiscoveryLocation");

	Params::UBPFL_Map_C_Make_LevelDiscoveryLocation_Params Parms{};

	Parms.Level_Name = Level_Name;
	Parms.Discovery_Location_Information = Discovery_Location_Information;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_LevelDiscoveryLocation = K2Node_MakeStruct_LevelDiscoveryLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Level_Discovery_Location_ != nullptr)
		*Level_Discovery_Location_ = std::move(Parms.Level_Discovery_Location_);

}


// Function BPFL_Map.BPFL_Map_C.Break LevelDiscoveryLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelDiscoveryLocation     Level_Discovery_Location_                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDiscoveryInformation>Discovery_Location_Information                                   (Parm, OutParm)

void UBPFL_Map_C::Break_LevelDiscoveryLocation(const struct FLevelDiscoveryLocation& Level_Discovery_Location_, class UObject* __WorldContext, class FString* Level_Name, TArray<struct FDiscoveryInformation>* Discovery_Location_Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break LevelDiscoveryLocation");

	Params::UBPFL_Map_C_Break_LevelDiscoveryLocation_Params Parms{};

	Parms.Level_Discovery_Location_ = Level_Discovery_Location_;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Level_Name != nullptr)
		*Level_Name = std::move(Parms.Level_Name);

	if (Discovery_Location_Information != nullptr)
		*Discovery_Location_Information = std::move(Parms.Discovery_Location_Information);

}


// Function BPFL_Map.BPFL_Map_C.Make DiscoveryLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryLocation          DIscovery_Location                                               (Parm, OutParm, NoDestructor)
// struct FDiscoveryLocation          K2Node_MakeStruct_DiscoveryLocation                              (NoDestructor)

void UBPFL_Map_C::Make_DiscoveryLocation(const struct FGuid& ID, class UObject* __WorldContext, struct FDiscoveryLocation* DIscovery_Location, const struct FDiscoveryLocation& K2Node_MakeStruct_DiscoveryLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Make DiscoveryLocation");

	Params::UBPFL_Map_C_Make_DiscoveryLocation_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_DiscoveryLocation = K2Node_MakeStruct_DiscoveryLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (DIscovery_Location != nullptr)
		*DIscovery_Location = std::move(Parms.DIscovery_Location);

}


// Function BPFL_Map.BPFL_Map_C.Break DiscoveryLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscoveryLocation          DIscovery_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Break_DiscoveryLocation(const struct FDiscoveryLocation& DIscovery_Location, class UObject* __WorldContext, struct FGuid* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break DiscoveryLocation");

	Params::UBPFL_Map_C_Break_DiscoveryLocation_Params Parms{};

	Parms.DIscovery_Location = DIscovery_Location;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function BPFL_Map.BPFL_Map_C.Make FastTravelInformation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateFast_Travel_Location_State                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    S_FastTravelInformation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelInformation    K2Node_MakeStruct_S_FastTravelInformation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Make_FastTravelInformation(const struct FGuid& ID, enum class E_FastTravelLocationState Fast_Travel_Location_State, class UObject* __WorldContext, struct FS_FastTravelInformation* S_FastTravelInformation, const struct FS_FastTravelInformation& K2Node_MakeStruct_S_FastTravelInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Make FastTravelInformation");

	Params::UBPFL_Map_C_Make_FastTravelInformation_Params Parms{};

	Parms.ID = ID;
	Parms.Fast_Travel_Location_State = Fast_Travel_Location_State;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_S_FastTravelInformation = K2Node_MakeStruct_S_FastTravelInformation;

	UObject::ProcessEvent(Func, &Parms);

	if (S_FastTravelInformation != nullptr)
		*S_FastTravelInformation = std::move(Parms.S_FastTravelInformation);

}


// Function BPFL_Map.BPFL_Map_C.Break FastTravelInformation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FastTravelInformation    S_FastTravelInformation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateFast_Travel_Location_State                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Break_FastTravelInformation(struct FS_FastTravelInformation& S_FastTravelInformation, class UObject* __WorldContext, struct FGuid* ID, enum class E_FastTravelLocationState* Fast_Travel_Location_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break FastTravelInformation");

	Params::UBPFL_Map_C_Break_FastTravelInformation_Params Parms{};

	Parms.S_FastTravelInformation = S_FastTravelInformation;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	if (Fast_Travel_Location_State != nullptr)
		*Fast_Travel_Location_State = Parms.Fast_Travel_Location_State;

}


// Function BPFL_Map.BPFL_Map_C.MakeLevelFastTravelLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Level_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>Fast_Travel_Information                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  S_LevelFastTravelLocation                                        (Parm, OutParm, HasGetValueTypeHash)
// struct FS_LevelFastTravelLocation  K2Node_MakeStruct_S_LevelFastTravelLocation                      (HasGetValueTypeHash)

void UBPFL_Map_C::MakeLevelFastTravelLocation(const class FString& Level_Name, TArray<struct FS_FastTravelInformation>& Fast_Travel_Information, class UObject* __WorldContext, struct FS_LevelFastTravelLocation* S_LevelFastTravelLocation, const struct FS_LevelFastTravelLocation& K2Node_MakeStruct_S_LevelFastTravelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "MakeLevelFastTravelLocation");

	Params::UBPFL_Map_C_MakeLevelFastTravelLocation_Params Parms{};

	Parms.Level_Name = Level_Name;
	Parms.Fast_Travel_Information = Fast_Travel_Information;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_S_LevelFastTravelLocation = K2Node_MakeStruct_S_LevelFastTravelLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (S_LevelFastTravelLocation != nullptr)
		*S_LevelFastTravelLocation = std::move(Parms.S_LevelFastTravelLocation);

}


// Function BPFL_Map.BPFL_Map_C.Break LevelFastTravelLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LevelFastTravelLocation  S_LevelFastTravelLocation                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_FastTravelInformation>Fast_Travel_Information                                          (Parm, OutParm)

void UBPFL_Map_C::Break_LevelFastTravelLocation(struct FS_LevelFastTravelLocation& S_LevelFastTravelLocation, class UObject* __WorldContext, class FString* Level_Name, TArray<struct FS_FastTravelInformation>* Fast_Travel_Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break LevelFastTravelLocation");

	Params::UBPFL_Map_C_Break_LevelFastTravelLocation_Params Parms{};

	Parms.S_LevelFastTravelLocation = S_LevelFastTravelLocation;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Level_Name != nullptr)
		*Level_Name = std::move(Parms.Level_Name);

	if (Fast_Travel_Information != nullptr)
		*Fast_Travel_Information = std::move(Parms.Fast_Travel_Information);

}


// Function BPFL_Map.BPFL_Map_C.Make FastTravelLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     World_Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Location_Name                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDataTableRowHandle         Fast_Travel_Type                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateInitial_Fast_Travel_Location_State                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       Fast_Travel_Location                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FDiscoveryLocation          NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FS_FastTravelLocation       K2Node_MakeStruct_S_FastTravelLocation                           (HasGetValueTypeHash)

void UBPFL_Map_C::Make_FastTravelLocation(const struct FGuid& ID, const struct FVector& World_Location, const struct FRotator& Rotation, class FText Location_Name, const struct FDataTableRowHandle& Fast_Travel_Type, enum class E_FastTravelLocationState Initial_Fast_Travel_Location_State, class UObject* __WorldContext, struct FS_FastTravelLocation* Fast_Travel_Location, const struct FDiscoveryLocation& NewLocalVar_0, const struct FS_FastTravelLocation& K2Node_MakeStruct_S_FastTravelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Make FastTravelLocation");

	Params::UBPFL_Map_C_Make_FastTravelLocation_Params Parms{};

	Parms.ID = ID;
	Parms.World_Location = World_Location;
	Parms.Rotation = Rotation;
	Parms.Location_Name = Location_Name;
	Parms.Fast_Travel_Type = Fast_Travel_Type;
	Parms.Initial_Fast_Travel_Location_State = Initial_Fast_Travel_Location_State;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeStruct_S_FastTravelLocation = K2Node_MakeStruct_S_FastTravelLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Fast_Travel_Location != nullptr)
		*Fast_Travel_Location = std::move(Parms.Fast_Travel_Location);

}


// Function BPFL_Map.BPFL_Map_C.Break FastTravelLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FastTravelLocation       Fast_Travel_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     World_Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Location_Name                                                    (Parm, OutParm)
// struct FDataTableRowHandle         Fast_Travel_Type                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateInitial_Fast_Travel_Location_State                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Map_C::Break_FastTravelLocation(const struct FS_FastTravelLocation& Fast_Travel_Location, class UObject* __WorldContext, struct FGuid* ID, struct FVector* World_Location, struct FRotator* Rotation, class FText* Location_Name, struct FDataTableRowHandle* Fast_Travel_Type, enum class E_FastTravelLocationState* Initial_Fast_Travel_Location_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Map_C", "Break FastTravelLocation");

	Params::UBPFL_Map_C_Break_FastTravelLocation_Params Parms{};

	Parms.Fast_Travel_Location = Fast_Travel_Location;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	if (World_Location != nullptr)
		*World_Location = std::move(Parms.World_Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (Location_Name != nullptr)
		*Location_Name = Parms.Location_Name;

	if (Fast_Travel_Type != nullptr)
		*Fast_Travel_Type = std::move(Parms.Fast_Travel_Type);

	if (Initial_Fast_Travel_Location_State != nullptr)
		*Initial_Fast_Travel_Location_State = Parms.Initial_Fast_Travel_Location_State;

}

}


