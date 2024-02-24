#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C
// (Actor)

class UClass* ABP_Deep_Mining_Ore_Deposit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deep_Mining_Ore_Deposit_C");

	return Clss;
}


// BP_Deep_Mining_Ore_Deposit_C BP_Deep_Mining_Ore_Deposit.Default__BP_Deep_Mining_Ore_Deposit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deep_Mining_Ore_Deposit_C* ABP_Deep_Mining_Ore_Deposit_C::GetDefaultObj()
{
	static class ABP_Deep_Mining_Ore_Deposit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deep_Mining_Ore_Deposit_C*>(ABP_Deep_Mining_Ore_Deposit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.AssignType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ListID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_6                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_7                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_8                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_9                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_10                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_11                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_12                                          (NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_13                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOreDepositRowHandle        Temp_struct_Variable_14                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_15                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_16                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_17                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_18                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_19                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_20                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_21                                          (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        Temp_struct_Variable_22                                          (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FOreDepositRowHandle        K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Mining_Ore_Deposit_C::AssignType(int32 ListID, const struct FOreDepositRowHandle& Temp_struct_Variable, const struct FOreDepositRowHandle& Temp_struct_Variable_1, const struct FOreDepositRowHandle& Temp_struct_Variable_2, const struct FOreDepositRowHandle& Temp_struct_Variable_3, const struct FOreDepositRowHandle& Temp_struct_Variable_4, const struct FOreDepositRowHandle& Temp_struct_Variable_5, const struct FOreDepositRowHandle& Temp_struct_Variable_6, const struct FOreDepositRowHandle& Temp_struct_Variable_7, const struct FOreDepositRowHandle& Temp_struct_Variable_8, const struct FOreDepositRowHandle& Temp_struct_Variable_9, const struct FOreDepositRowHandle& Temp_struct_Variable_10, const struct FOreDepositRowHandle& Temp_struct_Variable_11, const struct FOreDepositRowHandle& Temp_struct_Variable_12, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, int32 Temp_int_Variable, const struct FOreDepositRowHandle& Temp_struct_Variable_13, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, const struct FOreDepositRowHandle& Temp_struct_Variable_14, const struct FOreDepositRowHandle& Temp_struct_Variable_15, const struct FOreDepositRowHandle& Temp_struct_Variable_16, const struct FOreDepositRowHandle& Temp_struct_Variable_17, const struct FOreDepositRowHandle& Temp_struct_Variable_18, const struct FOreDepositRowHandle& Temp_struct_Variable_19, const struct FOreDepositRowHandle& Temp_struct_Variable_20, const struct FOreDepositRowHandle& Temp_struct_Variable_21, const struct FOreDepositRowHandle& Temp_struct_Variable_22, int32 Temp_int_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FOreDepositRowHandle& K2Node_Select_Default, const struct FOreDepositRowHandle& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "AssignType");

	Params::ABP_Deep_Mining_Ore_Deposit_C_AssignType_Params Parms{};

	Parms.ListID = ListID;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.GetNodeMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOreDeposit                 OreDeposit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class UMaterialInterface>ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UMaterialInterface>K2Node_Select_Default                                            (HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>K2Node_Select_Default_2                                          (HasGetValueTypeHash)

TSoftObjectPtr<class UMaterialInterface> ABP_Deep_Mining_Ore_Deposit_C::GetNodeMaterial(struct FOreDeposit& OreDeposit, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default_1, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "GetNodeMaterial");

	Params::ABP_Deep_Mining_Ore_Deposit_C_GetNodeMaterial_Params Parms{};

	Parms.OreDeposit = OreDeposit;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.BiomeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIsDesert                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Deep_Mining_Ore_Deposit_C::BiomeUpdated(bool NewIsDesert, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "BiomeUpdated");

	Params::ABP_Deep_Mining_Ore_Deposit_C_BiomeUpdated_Params Parms{};

	Parms.NewIsDesert = NewIsDesert;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnRep_LocalMaterialType
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit                          (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Deep_Mining_Ore_Deposit_C::OnRep_LocalMaterialType(const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "OnRep_LocalMaterialType");

	Params::ABP_Deep_Mining_Ore_Deposit_C_OnRep_LocalMaterialType_Params Parms{};

	Parms.CallFunc_GetOreDepositStruct_OreDeposit = CallFunc_GetOreDepositStruct_OreDeposit;
	Parms.CallFunc_GetOreDepositStruct_Paths = CallFunc_GetOreDepositStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_86CD52A24289457079E06B9B6B8EE0DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Mining_Ore_Deposit_C::OnLoaded_86CD52A24289457079E06B9B6B8EE0DB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "OnLoaded_86CD52A24289457079E06B9B6B8EE0DB");

	Params::ABP_Deep_Mining_Ore_Deposit_C_OnLoaded_86CD52A24289457079E06B9B6B8EE0DB_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_7A08DCE545D5B147504667BA88769DFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Mining_Ore_Deposit_C::OnLoaded_7A08DCE545D5B147504667BA88769DFC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "OnLoaded_7A08DCE545D5B147504667BA88769DFC");

	Params::ABP_Deep_Mining_Ore_Deposit_C_OnLoaded_7A08DCE545D5B147504667BA88769DFC_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.SetMaterialType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOreDepositRowHandle        Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Mining_Ore_Deposit_C::SetMaterialType(const struct FOreDepositRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "SetMaterialType");

	Params::ABP_Deep_Mining_Ore_Deposit_C_SetMaterialType_Params Parms{};

	Parms.Row = Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Deep_Mining_Ore_Deposit_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Deep_Mining_Ore_Deposit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOreDepositRowHandle        K2Node_CustomEvent_Row                                           (NoDestructor, HasGetValueTypeHash)
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit                          (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UMaterialInterface>CallFunc_GetNodeMaterial_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit_1                        (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void ABP_Deep_Mining_Ore_Deposit_C::ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, const struct FOreDepositRowHandle& K2Node_CustomEvent_Row, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UMaterialInterface> CallFunc_GetNodeMaterial_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit_1, enum class EValid CallFunc_GetOreDepositStruct_Paths_1, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable_1, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ore_Deposit_C", "ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit");

	Params::ABP_Deep_Mining_Ore_Deposit_C_ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Row = K2Node_CustomEvent_Row;
	Parms.CallFunc_GetOreDepositStruct_OreDeposit = CallFunc_GetOreDepositStruct_OreDeposit;
	Parms.CallFunc_GetOreDepositStruct_Paths = CallFunc_GetOreDepositStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNodeMaterial_ReturnValue = CallFunc_GetNodeMaterial_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_GetOreDepositStruct_OreDeposit_1 = CallFunc_GetOreDepositStruct_OreDeposit_1;
	Parms.CallFunc_GetOreDepositStruct_Paths_1 = CallFunc_GetOreDepositStruct_Paths_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsMaterial_Interface_1 = K2Node_DynamicCast_AsMaterial_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue = CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


