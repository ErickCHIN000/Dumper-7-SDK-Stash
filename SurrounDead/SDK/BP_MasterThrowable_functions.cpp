#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterThrowable.BP_MasterThrowable_C
// (Actor)

class UClass* ABP_MasterThrowable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterThrowable_C");

	return Clss;
}


// BP_MasterThrowable_C BP_MasterThrowable.Default__BP_MasterThrowable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterThrowable_C* ABP_MasterThrowable_C::GetDefaultObj()
{
	static class ABP_MasterThrowable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterThrowable_C*>(ABP_MasterThrowable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterThrowable.BP_MasterThrowable_C.SkillCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTechnologyUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::SkillCheck(double Damage, double* Multiplier, bool CallFunc_IsTechnologyUnlocked_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "SkillCheck");

	Params::ABP_MasterThrowable_C_SkillCheck_Params Parms{};

	Parms.Damage = Damage;
	Parms.CallFunc_IsTechnologyUnlocked_ReturnValue = CallFunc_IsTechnologyUnlocked_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.DamageNumbersEnabled?
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::DamageNumbersEnabled_(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "DamageNumbersEnabled?");

	Params::ABP_MasterThrowable_C_DamageNumbersEnabled__Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.Event_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::Event_Begin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "Event_Begin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.ExecuteUbergraph_BP_MasterThrowable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterThrowable_C::ExecuteUbergraph_BP_MasterThrowable(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_NewValue, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "ExecuteUbergraph_BP_MasterThrowable");

	Params::ABP_MasterThrowable_C_ExecuteUbergraph_BP_MasterThrowable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterThrowable.BP_MasterThrowable_C.Event_Explosion__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterThrowable_C::Event_Explosion__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterThrowable_C", "Event_Explosion__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


