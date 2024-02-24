#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fx_StormWall.BP_Fx_StormWall_C
// (Actor)

class UClass* ABP_Fx_StormWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fx_StormWall_C");

	return Clss;
}


// BP_Fx_StormWall_C BP_Fx_StormWall.Default__BP_Fx_StormWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fx_StormWall_C* ABP_Fx_StormWall_C::GetDefaultObj()
{
	static class ABP_Fx_StormWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fx_StormWall_C*>(ABP_Fx_StormWall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fx_StormWall.BP_Fx_StormWall_C.ActivateWall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDesert                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSnow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fx_StormWall_C::ActivateWall(bool UseDesert, bool UseSnow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fx_StormWall_C", "ActivateWall");

	Params::ABP_Fx_StormWall_C_ActivateWall_Params Parms{};

	Parms.UseDesert = UseDesert;
	Parms.UseSnow = UseSnow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Fx_StormWall.BP_Fx_StormWall_C.DeactivateWall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Fx_StormWall_C::DeactivateWall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fx_StormWall_C", "DeactivateWall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fx_StormWall.BP_Fx_StormWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Fx_StormWall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fx_StormWall_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fx_StormWall.BP_Fx_StormWall_C.ExecuteUbergraph_BP_Fx_StormWall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseDesert                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseSnow                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fx_StormWall_C::ExecuteUbergraph_BP_Fx_StormWall(int32 EntryPoint, bool K2Node_CustomEvent_UseDesert, bool K2Node_CustomEvent_UseSnow, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fx_StormWall_C", "ExecuteUbergraph_BP_Fx_StormWall");

	Params::ABP_Fx_StormWall_C_ExecuteUbergraph_BP_Fx_StormWall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_UseDesert = K2Node_CustomEvent_UseDesert;
	Parms.K2Node_CustomEvent_UseSnow = K2Node_CustomEvent_UseSnow;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


