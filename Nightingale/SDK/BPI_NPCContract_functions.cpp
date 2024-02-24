#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCContract.BPI_NPCContract_C
// (None)

class UClass* IBPI_NPCContract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCContract_C");

	return Clss;
}


// BPI_NPCContract_C BPI_NPCContract.Default__BPI_NPCContract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCContract_C* IBPI_NPCContract_C::GetDefaultObj()
{
	static class IBPI_NPCContract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCContract_C*>(IBPI_NPCContract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCContract.BPI_NPCContract_C.GetHiringStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HiringStatus       ReturnedStatus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::GetHiringStatus(enum class Enum_HiringStatus* ReturnedStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "GetHiringStatus");

	Params::IBPI_NPCContract_C_GetHiringStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnedStatus != nullptr)
		*ReturnedStatus = Parms.ReturnedStatus;

}


// Function BPI_NPCContract.BPI_NPCContract_C.GetContractCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ContractCost                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::GetContractCost(const class FString& PlayerId, int32* ContractCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "GetContractCost");

	Params::IBPI_NPCContract_C_GetContractCost_Params Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

	if (ContractCost != nullptr)
		*ContractCost = Parms.ContractCost;

}


// Function BPI_NPCContract.BPI_NPCContract_C.GetCurrentActionStationType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ActionStationType  ActionStationType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::GetCurrentActionStationType(enum class Enum_ActionStationType* ActionStationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "GetCurrentActionStationType");

	Params::IBPI_NPCContract_C_GetCurrentActionStationType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionStationType != nullptr)
		*ActionStationType = Parms.ActionStationType;

}


// Function BPI_NPCContract.BPI_NPCContract_C.ClearOrderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::ClearOrderTarget(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "ClearOrderTarget");

	Params::IBPI_NPCContract_C_ClearOrderTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_NPCContract.BPI_NPCContract_C.SetOrderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OrderTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_PingVerbs             Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::SetOrderTarget(class AActor* OrderTarget, enum class E_PingVerbs Verb, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "SetOrderTarget");

	Params::IBPI_NPCContract_C_SetOrderTarget_Params Parms{};

	Parms.OrderTarget = OrderTarget;
	Parms.Verb = Verb;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_NPCContract.BPI_NPCContract_C.GetEmployerPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       EmployerPawn                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::GetEmployerPawn(class APawn** EmployerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "GetEmployerPawn");

	Params::IBPI_NPCContract_C_GetEmployerPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EmployerPawn != nullptr)
		*EmployerPawn = Parms.EmployerPawn;

}


// Function BPI_NPCContract.BPI_NPCContract_C.StopContract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::StopContract(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "StopContract");

	Params::IBPI_NPCContract_C_StopContract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_NPCContract.BPI_NPCContract_C.StartContract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       EmployerPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCContract_C::StartContract(class APawn* EmployerPawn, double Duration, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCContract_C", "StartContract");

	Params::IBPI_NPCContract_C_StartContract_Params Parms{};

	Parms.EmployerPawn = EmployerPawn;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


