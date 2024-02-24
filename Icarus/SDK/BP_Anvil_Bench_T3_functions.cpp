#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Anvil_Bench_T3.BP_Anvil_Bench_T3_C
// (Actor)

class UClass* ABP_Anvil_Bench_T3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Anvil_Bench_T3_C");

	return Clss;
}


// BP_Anvil_Bench_T3_C BP_Anvil_Bench_T3.Default__BP_Anvil_Bench_T3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Anvil_Bench_T3_C* ABP_Anvil_Bench_T3_C::GetDefaultObj()
{
	static class ABP_Anvil_Bench_T3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Anvil_Bench_T3_C*>(ABP_Anvil_Bench_T3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Anvil_Bench_T3.BP_Anvil_Bench_T3_C.GeneratorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Anvil_Bench_T3_C::GeneratorStateUpdate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Anvil_Bench_T3_C", "GeneratorStateUpdate");

	Params::ABP_Anvil_Bench_T3_C_GeneratorStateUpdate_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Anvil_Bench_T3.BP_Anvil_Bench_T3_C.ProcessorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateGenerator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Anvil_Bench_T3_C::ProcessorStateUpdate(bool Active, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Anvil_Bench_T3_C", "ProcessorStateUpdate");

	Params::ABP_Anvil_Bench_T3_C_ProcessorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_ActivateGenerator_ReturnValue = CallFunc_ActivateGenerator_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


