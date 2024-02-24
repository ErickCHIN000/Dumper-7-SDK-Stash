#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Worklamp_Directional.BP_Worklamp_Directional_C
// (Actor)

class UClass* ABP_Worklamp_Directional_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Worklamp_Directional_C");

	return Clss;
}


// BP_Worklamp_Directional_C BP_Worklamp_Directional.Default__BP_Worklamp_Directional_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Worklamp_Directional_C* ABP_Worklamp_Directional_C::GetDefaultObj()
{
	static class ABP_Worklamp_Directional_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Worklamp_Directional_C*>(ABP_Worklamp_Directional_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Worklamp_Directional.BP_Worklamp_Directional_C.SetLightActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Worklamp_Directional_C::SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Worklamp_Directional_C", "SetLightActiveState");

	Params::ABP_Worklamp_Directional_C_SetLightActiveState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Worklamp_Directional.BP_Worklamp_Directional_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Worklamp_Directional_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Worklamp_Directional_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Worklamp_Directional.BP_Worklamp_Directional_C.ExecuteUbergraph_BP_Worklamp_Directional
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Worklamp_Directional_C::ExecuteUbergraph_BP_Worklamp_Directional(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Worklamp_Directional_C", "ExecuteUbergraph_BP_Worklamp_Directional");

	Params::ABP_Worklamp_Directional_C_ExecuteUbergraph_BP_Worklamp_Directional_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


