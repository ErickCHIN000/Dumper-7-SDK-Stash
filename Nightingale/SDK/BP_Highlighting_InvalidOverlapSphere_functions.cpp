#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Highlighting_InvalidOverlapSphere.BP_Highlighting_InvalidOverlapSphere_C
// (Actor)

class UClass* ABP_Highlighting_InvalidOverlapSphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Highlighting_InvalidOverlapSphere_C");

	return Clss;
}


// BP_Highlighting_InvalidOverlapSphere_C BP_Highlighting_InvalidOverlapSphere.Default__BP_Highlighting_InvalidOverlapSphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Highlighting_InvalidOverlapSphere_C* ABP_Highlighting_InvalidOverlapSphere_C::GetDefaultObj()
{
	static class ABP_Highlighting_InvalidOverlapSphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Highlighting_InvalidOverlapSphere_C*>(ABP_Highlighting_InvalidOverlapSphere_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Highlighting_InvalidOverlapSphere.BP_Highlighting_InvalidOverlapSphere_C.AdjustScaletoExtents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ObjectExtents                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Highlighting_InvalidOverlapSphere_C::AdjustScaletoExtents(const struct FVector& ObjectExtents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Highlighting_InvalidOverlapSphere_C", "AdjustScaletoExtents");

	Params::ABP_Highlighting_InvalidOverlapSphere_C_AdjustScaletoExtents_Params Parms{};

	Parms.ObjectExtents = ObjectExtents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Highlighting_InvalidOverlapSphere.BP_Highlighting_InvalidOverlapSphere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Highlighting_InvalidOverlapSphere_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Highlighting_InvalidOverlapSphere_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Highlighting_InvalidOverlapSphere.BP_Highlighting_InvalidOverlapSphere_C.ExecuteUbergraph_BP_Highlighting_InvalidOverlapSphere
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ObjectExtents                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Highlighting_InvalidOverlapSphere_C::ExecuteUbergraph_BP_Highlighting_InvalidOverlapSphere(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_ObjectExtents, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Highlighting_InvalidOverlapSphere_C", "ExecuteUbergraph_BP_Highlighting_InvalidOverlapSphere");

	Params::ABP_Highlighting_InvalidOverlapSphere_C_ExecuteUbergraph_BP_Highlighting_InvalidOverlapSphere_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ObjectExtents = K2Node_CustomEvent_ObjectExtents;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


