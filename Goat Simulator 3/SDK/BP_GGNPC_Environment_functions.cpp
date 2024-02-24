#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPC_Environment.BP_GGNPC_Environment_C
// (Actor, Pawn)

class UClass* ABP_GGNPC_Environment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPC_Environment_C");

	return Clss;
}


// BP_GGNPC_Environment_C BP_GGNPC_Environment.Default__BP_GGNPC_Environment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGNPC_Environment_C* ABP_GGNPC_Environment_C::GetDefaultObj()
{
	static class ABP_GGNPC_Environment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGNPC_Environment_C*>(ABP_GGNPC_Environment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGNPC_Environment.BP_GGNPC_Environment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Environment_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Environment_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Environment.BP_GGNPC_Environment_C.OnRep_NPCSpawner
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGNPC_Environment_C::OnRep_NPCSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Environment_C", "OnRep_NPCSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGNPC_Environment.BP_GGNPC_Environment_C.ExecuteUbergraph_BP_GGNPC_Environment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGNPCSpawner*               CallFunc_GetNPCSpawner_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGNPCSpawner_Environment*   K2Node_DynamicCast_AsGGNPCSpawner_Environment                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGGRandomPlayerSequenceEntryCallFunc_Array_Get_Item                                          (NoDestructor)
// TArray<struct FGGRandomPlayerSequenceEntry>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GGNPC_Environment_C::ExecuteUbergraph_BP_GGNPC_Environment(int32 EntryPoint, class AGGNPCSpawner* CallFunc_GetNPCSpawner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGNPCSpawner_Environment* K2Node_DynamicCast_AsGGNPCSpawner_Environment, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FGGRandomPlayerSequenceEntry& CallFunc_Array_Get_Item, TArray<struct FGGRandomPlayerSequenceEntry>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGNPC_Environment_C", "ExecuteUbergraph_BP_GGNPC_Environment");

	Params::ABP_GGNPC_Environment_C_ExecuteUbergraph_BP_GGNPC_Environment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNPCSpawner_ReturnValue = CallFunc_GetNPCSpawner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGNPCSpawner_Environment = K2Node_DynamicCast_AsGGNPCSpawner_Environment;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


