#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlassworkingBench.BP_GlassworkingBench_C
// (Actor)

class UClass* ABP_GlassworkingBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlassworkingBench_C");

	return Clss;
}


// BP_GlassworkingBench_C BP_GlassworkingBench.Default__BP_GlassworkingBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlassworkingBench_C* ABP_GlassworkingBench_C::GetDefaultObj()
{
	static class ABP_GlassworkingBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlassworkingBench_C*>(ABP_GlassworkingBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GlassworkingBench.BP_GlassworkingBench_C.GeneratorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlassworkingBench_C::GeneratorStateUpdate(bool Active, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlassworkingBench_C", "GeneratorStateUpdate");

	Params::ABP_GlassworkingBench_C_GeneratorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GlassworkingBench.BP_GlassworkingBench_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GlassworkingBench_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlassworkingBench_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


