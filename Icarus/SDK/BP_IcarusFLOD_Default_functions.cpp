#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C
// (Actor)

class UClass* ABP_IcarusFLOD_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusFLOD_Default_C");

	return Clss;
}


// BP_IcarusFLOD_Default_C BP_IcarusFLOD_Default.Default__BP_IcarusFLOD_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusFLOD_Default_C* ABP_IcarusFLOD_Default_C::GetDefaultObj()
{
	static class ABP_IcarusFLOD_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusFLOD_Default_C*>(ABP_IcarusFLOD_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODDescriptionsEnum       CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODDescriptionsRowHandle  CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FFLODDescription            CallFunc_GetFLODDescriptionsStruct_FLODDescriptions              (None)
// enum class EValid                  CallFunc_GetFLODDescriptionsStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusFLOD_Default_C::UserConstructionScript(int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FFLODDescriptionsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFLODDescriptionsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FFLODDescription& CallFunc_GetFLODDescriptionsStruct_FLODDescriptions, enum class EValid CallFunc_GetFLODDescriptionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLOD_Default_C", "UserConstructionScript");

	Params::ABP_IcarusFLOD_Default_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetFLODDescriptionsStruct_FLODDescriptions = CallFunc_GetFLODDescriptionsStruct_FLODDescriptions;
	Parms.CallFunc_GetFLODDescriptionsStruct_Paths = CallFunc_GetFLODDescriptionsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C.FLODDebugStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusFLOD_Default_C::FLODDebugStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLOD_Default_C", "FLODDebugStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusFLOD_Default.BP_IcarusFLOD_Default_C.ExecuteUbergraph_BP_IcarusFLOD_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusFLOD_Default_C::ExecuteUbergraph_BP_IcarusFLOD_Default(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusFLOD_Default_C", "ExecuteUbergraph_BP_IcarusFLOD_Default");

	Params::ABP_IcarusFLOD_Default_C_ExecuteUbergraph_BP_IcarusFLOD_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


