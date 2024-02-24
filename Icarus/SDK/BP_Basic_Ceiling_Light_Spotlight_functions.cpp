#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Basic_Ceiling_Light_Spotlight.BP_Basic_Ceiling_Light_Spotlight_C
// (Actor)

class UClass* ABP_Basic_Ceiling_Light_Spotlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Basic_Ceiling_Light_Spotlight_C");

	return Clss;
}


// BP_Basic_Ceiling_Light_Spotlight_C BP_Basic_Ceiling_Light_Spotlight.Default__BP_Basic_Ceiling_Light_Spotlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Basic_Ceiling_Light_Spotlight_C* ABP_Basic_Ceiling_Light_Spotlight_C::GetDefaultObj()
{
	static class ABP_Basic_Ceiling_Light_Spotlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Basic_Ceiling_Light_Spotlight_C*>(ABP_Basic_Ceiling_Light_Spotlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Basic_Ceiling_Light_Spotlight.BP_Basic_Ceiling_Light_Spotlight_C.SetLightActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Basic_Ceiling_Light_Spotlight_C::SetLightActiveState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Basic_Ceiling_Light_Spotlight_C", "SetLightActiveState");

	Params::ABP_Basic_Ceiling_Light_Spotlight_C_SetLightActiveState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Basic_Ceiling_Light_Spotlight.BP_Basic_Ceiling_Light_Spotlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Basic_Ceiling_Light_Spotlight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Basic_Ceiling_Light_Spotlight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Basic_Ceiling_Light_Spotlight.BP_Basic_Ceiling_Light_Spotlight_C.ExecuteUbergraph_BP_Basic_Ceiling_Light_Spotlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Basic_Ceiling_Light_Spotlight_C::ExecuteUbergraph_BP_Basic_Ceiling_Light_Spotlight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Basic_Ceiling_Light_Spotlight_C", "ExecuteUbergraph_BP_Basic_Ceiling_Light_Spotlight");

	Params::ABP_Basic_Ceiling_Light_Spotlight_C_ExecuteUbergraph_BP_Basic_Ceiling_Light_Spotlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

