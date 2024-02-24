#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Contracts.BPI_Contracts_C
// (None)

class UClass* IBPI_Contracts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Contracts_C");

	return Clss;
}


// BPI_Contracts_C BPI_Contracts.Default__BPI_Contracts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Contracts_C* IBPI_Contracts_C::GetDefaultObj()
{
	static class IBPI_Contracts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Contracts_C*>(IBPI_Contracts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Contracts.BPI_Contracts_C.IssueOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PingVerbs             Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OrderTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Contracts_C::IssueOrder(enum class E_PingVerbs Verb, class AActor* OrderTarget, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Contracts_C", "IssueOrder");

	Params::IBPI_Contracts_C_IssueOrder_Params Parms{};

	Parms.Verb = Verb;
	Parms.OrderTarget = OrderTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_Contracts.BPI_Contracts_C.RemoveContractor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NpcActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Contracts_C::RemoveContractor(class AActor* NpcActor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Contracts_C", "RemoveContractor");

	Params::IBPI_Contracts_C_RemoveContractor_Params Parms{};

	Parms.NpcActor = NpcActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_Contracts.BPI_Contracts_C.AddContractor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NpcActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Contracts_C::AddContractor(class AActor* NpcActor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Contracts_C", "AddContractor");

	Params::IBPI_Contracts_C_AddContractor_Params Parms{};

	Parms.NpcActor = NpcActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


