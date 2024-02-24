#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapLocationManager.BP_MapLocationManager_C
// (Actor)

class UClass* ABP_MapLocationManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapLocationManager_C");

	return Clss;
}


// BP_MapLocationManager_C BP_MapLocationManager.Default__BP_MapLocationManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapLocationManager_C* ABP_MapLocationManager_C::GetDefaultObj()
{
	static class ABP_MapLocationManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapLocationManager_C*>(ABP_MapLocationManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Find Discovery Location Index
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryLocation          CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_DiscoveryLocation_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Find_Discovery_Location_Index(struct FGuid& Discovery_Location_ID, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDiscoveryLocation& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_Break_DiscoveryLocation_ID, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Find Discovery Location Index");

	Params::ABP_MapLocationManager_C_Find_Discovery_Location_Index_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Break_DiscoveryLocation_ID = CallFunc_Break_DiscoveryLocation_ID;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Discovery Locations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDiscoveryLocation>  Discovery_Locations                                              (Parm, OutParm)

void ABP_MapLocationManager_C::Get_Discovery_Locations(TArray<struct FDiscoveryLocation>* Discovery_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Get Discovery Locations");

	Params::ABP_MapLocationManager_C_Get_Discovery_Locations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Discovery_Locations != nullptr)
		*Discovery_Locations = std::move(Parms.Discovery_Locations);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Discovery Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryLocation          DIscovery_Location                                               (Parm, OutParm, NoDestructor)
// int32                              CallFunc_Find_Discovery_Location_Index_Index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Get_Discovery_Location(const struct FGuid& Discovery_Location_ID, struct FDiscoveryLocation* DIscovery_Location, int32 CallFunc_Find_Discovery_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Get Discovery Location");

	Params::ABP_MapLocationManager_C_Get_Discovery_Location_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;
	Parms.CallFunc_Find_Discovery_Location_Index_Index = CallFunc_Find_Discovery_Location_Index_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DIscovery_Location != nullptr)
		*DIscovery_Location = std::move(Parms.DIscovery_Location);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.OnRep_Discovery Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MapLocationManager_C::OnRep_Discovery_Locations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "OnRep_Discovery Locations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.On Discovery Locations Updated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MapLocationManager_C::On_Discovery_Locations_Updated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "On Discovery Locations Updated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Remove Discovery Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Discovery_Location_Index_Index                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Remove_Discovery_Location(const struct FGuid& Discovery_Location_ID, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Find_Discovery_Location_Index_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Remove Discovery Location");

	Params::ABP_MapLocationManager_C_Remove_Discovery_Location_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Find_Discovery_Location_Index_Index = CallFunc_Find_Discovery_Location_Index_Index;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Add Discovery Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscoveryLocation          DIscovery_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_DiscoveryLocation_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Fast_Travel_Location_Index_Index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Add_Discovery_Location(const struct FDiscoveryLocation& DIscovery_Location, bool CallFunc_IsServer_ReturnValue, const struct FGuid& CallFunc_Break_DiscoveryLocation_ID, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Add Discovery Location");

	Params::ABP_MapLocationManager_C_Add_Discovery_Location_Params Parms{};

	Parms.DIscovery_Location = DIscovery_Location;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Break_DiscoveryLocation_ID = CallFunc_Break_DiscoveryLocation_ID;
	Parms.CallFunc_Find_Fast_Travel_Location_Index_Index = CallFunc_Find_Fast_Travel_Location_Index_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.OnRep_Fast Travel Locations
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MapLocationManager_C::OnRep_Fast_Travel_Locations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "OnRep_Fast Travel Locations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Find Fast Travel Location Index
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name                  (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type               (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Find_Fast_Travel_Location_Index(struct FGuid& Fast_Travel_Location_ID, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Find Fast Travel Location Index");

	Params::ABP_MapLocationManager_C_Find_Fast_Travel_Location_Index_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Break_FastTravelLocation_ID = CallFunc_Break_FastTravelLocation_ID;
	Parms.CallFunc_Break_FastTravelLocation_World_Location = CallFunc_Break_FastTravelLocation_World_Location;
	Parms.CallFunc_Break_FastTravelLocation_Rotation = CallFunc_Break_FastTravelLocation_Rotation;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name = CallFunc_Break_FastTravelLocation_Location_Name;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type = CallFunc_Break_FastTravelLocation_Fast_Travel_Type;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Fast Travel Locations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_FastTravelLocation>Fast_Travel_Locations                                            (Parm, OutParm)

void ABP_MapLocationManager_C::Get_Fast_Travel_Locations(TArray<struct FS_FastTravelLocation>* Fast_Travel_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Get Fast Travel Locations");

	Params::ABP_MapLocationManager_C_Get_Fast_Travel_Locations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Fast_Travel_Locations != nullptr)
		*Fast_Travel_Locations = std::move(Parms.Fast_Travel_Locations);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Fast Travel Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       Fast_Travel_Location                                             (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Find_Fast_Travel_Location_Index_Index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Get_Fast_Travel_Location(const struct FGuid& Fast_Travel_Location_ID, struct FS_FastTravelLocation* Fast_Travel_Location, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Get Fast Travel Location");

	Params::ABP_MapLocationManager_C_Get_Fast_Travel_Location_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;
	Parms.CallFunc_Find_Fast_Travel_Location_Index_Index = CallFunc_Find_Fast_Travel_Location_Index_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Fast_Travel_Location != nullptr)
		*Fast_Travel_Location = std::move(Parms.Fast_Travel_Location);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.On Fast Travel Locations Updated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MapLocationManager_C::On_Fast_Travel_Locations_Updated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "On Fast Travel Locations Updated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Remove Fast Travel Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Fast_Travel_Location_Index_Index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Remove_Fast_Travel_Location(const struct FGuid& Fast_Travel_Location_ID, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Remove Fast Travel Location");

	Params::ABP_MapLocationManager_C_Remove_Fast_Travel_Location_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;
	Parms.CallFunc_Find_Fast_Travel_Location_Index_Index = CallFunc_Find_Fast_Travel_Location_Index_Index;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Update Fast Travel Location Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Location_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        New_Location_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_FastTravelLocation       LocationToUpdate                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name                  (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type               (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       CallFunc_Make_FastTravelLocation_Fast_Travel_Location            (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FastTravelLocation       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name_1                (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1             (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Update_Fast_Travel_Location_Name(const struct FGuid& Location_ID, class FText New_Location_Name, const struct FS_FastTravelLocation& LocationToUpdate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, bool CallFunc_IsServer_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Make_FastTravelLocation_Fast_Travel_Location, int32 CallFunc_Array_Length_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID_1, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location_1, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation_1, class FText CallFunc_Break_FastTravelLocation_Location_Name_1, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Update Fast Travel Location Name");

	Params::ABP_MapLocationManager_C_Update_Fast_Travel_Location_Name_Params Parms{};

	Parms.Location_ID = Location_ID;
	Parms.New_Location_Name = New_Location_Name;
	Parms.LocationToUpdate = LocationToUpdate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Break_FastTravelLocation_ID = CallFunc_Break_FastTravelLocation_ID;
	Parms.CallFunc_Break_FastTravelLocation_World_Location = CallFunc_Break_FastTravelLocation_World_Location;
	Parms.CallFunc_Break_FastTravelLocation_Rotation = CallFunc_Break_FastTravelLocation_Rotation;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name = CallFunc_Break_FastTravelLocation_Location_Name;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type = CallFunc_Break_FastTravelLocation_Fast_Travel_Type;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Make_FastTravelLocation_Fast_Travel_Location = CallFunc_Make_FastTravelLocation_Fast_Travel_Location;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Break_FastTravelLocation_ID_1 = CallFunc_Break_FastTravelLocation_ID_1;
	Parms.CallFunc_Break_FastTravelLocation_World_Location_1 = CallFunc_Break_FastTravelLocation_World_Location_1;
	Parms.CallFunc_Break_FastTravelLocation_Rotation_1 = CallFunc_Break_FastTravelLocation_Rotation_1;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name_1 = CallFunc_Break_FastTravelLocation_Location_Name_1;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1 = CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1 = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.Add Fast Travel Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FastTravelLocation       Fast_Travel_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name                  (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type               (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Break_FastTravelLocation_ID_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Break_FastTravelLocation_World_Location_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Break_FastTravelLocation_Rotation_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Break_FastTravelLocation_Location_Name_1                (None)
// struct FDataTableRowHandle         CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1             (NoDestructor, HasGetValueTypeHash)
// enum class E_FastTravelLocationStateCallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_Fast_Travel_Location_Index_Index                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::Add_Fast_Travel_Location(const struct FS_FastTravelLocation& Fast_Travel_Location, bool NewLocalVar_0, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, const struct FGuid& CallFunc_Break_FastTravelLocation_ID_1, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location_1, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation_1, class FText CallFunc_Break_FastTravelLocation_Location_Name_1, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue_2, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "Add Fast Travel Location");

	Params::ABP_MapLocationManager_C_Add_Fast_Travel_Location_Params Parms{};

	Parms.Fast_Travel_Location = Fast_Travel_Location;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Break_FastTravelLocation_ID = CallFunc_Break_FastTravelLocation_ID;
	Parms.CallFunc_Break_FastTravelLocation_World_Location = CallFunc_Break_FastTravelLocation_World_Location;
	Parms.CallFunc_Break_FastTravelLocation_Rotation = CallFunc_Break_FastTravelLocation_Rotation;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name = CallFunc_Break_FastTravelLocation_Location_Name;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type = CallFunc_Break_FastTravelLocation_Fast_Travel_Type;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State;
	Parms.CallFunc_Break_FastTravelLocation_ID_1 = CallFunc_Break_FastTravelLocation_ID_1;
	Parms.CallFunc_Break_FastTravelLocation_World_Location_1 = CallFunc_Break_FastTravelLocation_World_Location_1;
	Parms.CallFunc_Break_FastTravelLocation_Rotation_1 = CallFunc_Break_FastTravelLocation_Rotation_1;
	Parms.CallFunc_Break_FastTravelLocation_Location_Name_1 = CallFunc_Break_FastTravelLocation_Location_Name_1;
	Parms.CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1 = CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1;
	Parms.CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1 = CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_2 = CallFunc_Conv_GuidToString_ReturnValue_2;
	Parms.CallFunc_Find_Fast_Travel_Location_Index_Index = CallFunc_Find_Fast_Travel_Location_Index_Index;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.AddFastTravelLocationRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_FastTravelLocation       Fast_Travel_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MapLocationManager_C::AddFastTravelLocationRPC(const struct FS_FastTravelLocation& Fast_Travel_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "AddFastTravelLocationRPC");

	Params::ABP_MapLocationManager_C_AddFastTravelLocationRPC_Params Parms{};

	Parms.Fast_Travel_Location = Fast_Travel_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.RemoveFastTravelLocationRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Fast_Travel_Location_ID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::RemoveFastTravelLocationRPC(const struct FGuid& Fast_Travel_Location_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "RemoveFastTravelLocationRPC");

	Params::ABP_MapLocationManager_C_RemoveFastTravelLocationRPC_Params Parms{};

	Parms.Fast_Travel_Location_ID = Fast_Travel_Location_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.AddDiscoveryLocationRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDiscoveryLocation          DIscovery_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MapLocationManager_C::AddDiscoveryLocationRPC(const struct FDiscoveryLocation& DIscovery_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "AddDiscoveryLocationRPC");

	Params::ABP_MapLocationManager_C_AddDiscoveryLocationRPC_Params Parms{};

	Parms.DIscovery_Location = DIscovery_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.RemoveDiscoveryLocationRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Discovery_Location_ID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::RemoveDiscoveryLocationRPC(const struct FGuid& Discovery_Location_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "RemoveDiscoveryLocationRPC");

	Params::ABP_MapLocationManager_C_RemoveDiscoveryLocationRPC_Params Parms{};

	Parms.Discovery_Location_ID = Discovery_Location_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.UpdateFastTravelLocationRPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Location_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        New_Location_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MapLocationManager_C::UpdateFastTravelLocationRPC(const struct FGuid& Location_ID, class FText New_Location_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "UpdateFastTravelLocationRPC");

	Params::ABP_MapLocationManager_C_UpdateFastTravelLocationRPC_Params Parms{};

	Parms.Location_ID = Location_ID;
	Parms.New_Location_Name = New_Location_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.ExecuteUbergraph_BP_MapLocationManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_Location_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_New_Location_Name                             (None)
// struct FS_FastTravelLocation       K2Node_CustomEvent_Fast_Travel_Location                          (HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_Fast_Travel_Location_ID                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscoveryLocation          K2Node_CustomEvent_Discovery_Location                            (NoDestructor)
// struct FGuid                       K2Node_CustomEvent_Discovery_Location_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapLocationManager_C::ExecuteUbergraph_BP_MapLocationManager(int32 EntryPoint, const struct FGuid& K2Node_CustomEvent_Location_ID, class FText K2Node_CustomEvent_New_Location_Name, const struct FS_FastTravelLocation& K2Node_CustomEvent_Fast_Travel_Location, const struct FGuid& K2Node_CustomEvent_Fast_Travel_Location_ID, const struct FDiscoveryLocation& K2Node_CustomEvent_Discovery_Location, const struct FGuid& K2Node_CustomEvent_Discovery_Location_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "ExecuteUbergraph_BP_MapLocationManager");

	Params::ABP_MapLocationManager_C_ExecuteUbergraph_BP_MapLocationManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Location_ID = K2Node_CustomEvent_Location_ID;
	Parms.K2Node_CustomEvent_New_Location_Name = K2Node_CustomEvent_New_Location_Name;
	Parms.K2Node_CustomEvent_Fast_Travel_Location = K2Node_CustomEvent_Fast_Travel_Location;
	Parms.K2Node_CustomEvent_Fast_Travel_Location_ID = K2Node_CustomEvent_Fast_Travel_Location_ID;
	Parms.K2Node_CustomEvent_Discovery_Location = K2Node_CustomEvent_Discovery_Location;
	Parms.K2Node_CustomEvent_Discovery_Location_ID = K2Node_CustomEvent_Discovery_Location_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.OnDiscoveryLocationsUpdatedDelegate__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDiscoveryLocation>  Discovery_Locations                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MapLocationManager_C::OnDiscoveryLocationsUpdatedDelegate__DelegateSignature(TArray<struct FDiscoveryLocation>& Discovery_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "OnDiscoveryLocationsUpdatedDelegate__DelegateSignature");

	Params::ABP_MapLocationManager_C_OnDiscoveryLocationsUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.Discovery_Locations = Discovery_Locations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapLocationManager.BP_MapLocationManager_C.OnFastTravelLocationsUpdatedDelegate__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_FastTravelLocation>Fast_Travel_Locations                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MapLocationManager_C::OnFastTravelLocationsUpdatedDelegate__DelegateSignature(TArray<struct FS_FastTravelLocation>& Fast_Travel_Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapLocationManager_C", "OnFastTravelLocationsUpdatedDelegate__DelegateSignature");

	Params::ABP_MapLocationManager_C_OnFastTravelLocationsUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.Fast_Travel_Locations = Fast_Travel_Locations;

	UObject::ProcessEvent(Func, &Parms);

}

}


