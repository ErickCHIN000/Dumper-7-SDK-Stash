#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_CanBeAttacked.I_CanBeAttacked_C
// (None)

class UClass* II_CanBeAttacked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_CanBeAttacked_C");

	return Clss;
}


// I_CanBeAttacked_C I_CanBeAttacked.Default__I_CanBeAttacked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_CanBeAttacked_C* II_CanBeAttacked_C::GetDefaultObj()
{
	static class II_CanBeAttacked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_CanBeAttacked_C*>(II_CanBeAttacked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_CanBeAttacked.I_CanBeAttacked_C.GetHeadSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CanBeAttacked_C::GetHeadSocket(class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CanBeAttacked_C", "GetHeadSocket");

	Params::II_CanBeAttacked_C_GetHeadSocket_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

}


// Function I_CanBeAttacked.I_CanBeAttacked_C.IsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void II_CanBeAttacked_C::IsAlive(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CanBeAttacked_C", "IsAlive");

	Params::II_CanBeAttacked_C_IsAlive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function I_CanBeAttacked.I_CanBeAttacked_C.TakeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          ResultType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CanBeAttacked_C::TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_CanBeAttacked_C", "TakeDamage");

	Params::II_CanBeAttacked_C_TakeDamage_Params Parms{};

	Parms.HitData = HitData;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ResultType != nullptr)
		*ResultType = Parms.ResultType;

}

}


