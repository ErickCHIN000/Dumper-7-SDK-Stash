#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Throwable_ChemLight.BP_Throwable_ChemLight_C
// (Actor)

class UClass* ABP_Throwable_ChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Throwable_ChemLight_C");

	return Clss;
}


// BP_Throwable_ChemLight_C BP_Throwable_ChemLight.Default__BP_Throwable_ChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Throwable_ChemLight_C* ABP_Throwable_ChemLight_C::GetDefaultObj()
{
	static class ABP_Throwable_ChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Throwable_ChemLight_C*>(ABP_Throwable_ChemLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Throwable_ChemLight.BP_Throwable_ChemLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Throwable_ChemLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Throwable_ChemLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Throwable_ChemLight.BP_Throwable_ChemLight_C.FragExplosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Throwable_ChemLight_C::FragExplosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Throwable_ChemLight_C", "FragExplosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Throwable_ChemLight.BP_Throwable_ChemLight_C.ExecuteUbergraph_BP_Throwable_ChemLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Throwable_ChemLight_C::ExecuteUbergraph_BP_Throwable_ChemLight(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Throwable_ChemLight_C", "ExecuteUbergraph_BP_Throwable_ChemLight");

	Params::ABP_Throwable_ChemLight_C_ExecuteUbergraph_BP_Throwable_ChemLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


