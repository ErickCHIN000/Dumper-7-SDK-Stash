#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C
// (Actor)

class UClass* ABP_GlassworkingBench_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlassworkingBench_V2_C");

	return Clss;
}


// BP_GlassworkingBench_V2_C BP_GlassworkingBench_V2.Default__BP_GlassworkingBench_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlassworkingBench_V2_C* ABP_GlassworkingBench_V2_C::GetDefaultObj()
{
	static class ABP_GlassworkingBench_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlassworkingBench_V2_C*>(ABP_GlassworkingBench_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C.ProcessorStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlassworkingBench_V2_C::ProcessorStateUpdate(bool Active, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlassworkingBench_V2_C", "ProcessorStateUpdate");

	Params::ABP_GlassworkingBench_V2_C_ProcessorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GlassworkingBench_V2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GlassworkingBench_V2_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


