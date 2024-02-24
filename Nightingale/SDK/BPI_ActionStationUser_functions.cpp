#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ActionStationUser.BPI_ActionStationUser_C
// (None)

class UClass* IBPI_ActionStationUser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ActionStationUser_C");

	return Clss;
}


// BPI_ActionStationUser_C BPI_ActionStationUser.Default__BPI_ActionStationUser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ActionStationUser_C* IBPI_ActionStationUser_C::GetDefaultObj()
{
	static class IBPI_ActionStationUser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ActionStationUser_C*>(IBPI_ActionStationUser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.ClearActionStationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::ClearActionStationMode(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "ClearActionStationMode");

	Params::IBPI_ActionStationUser_C_ClearActionStationMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.SetActionStationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::SetActionStationMode(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "SetActionStationMode");

	Params::IBPI_ActionStationUser_C_SetActionStationMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.ClearBTreeActionStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::ClearBTreeActionStation(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "ClearBTreeActionStation");

	Params::IBPI_ActionStationUser_C_ClearBTreeActionStation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.SetBTreeActionStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActionStation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::SetBTreeActionStation(class AActor* ActionStation, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "SetBTreeActionStation");

	Params::IBPI_ActionStationUser_C_SetBTreeActionStation_Params Parms{};

	Parms.ActionStation = ActionStation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.ServerStopMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::ServerStopMontage(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "ServerStopMontage");

	Params::IBPI_ActionStationUser_C_ServerStopMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_ActionStationUser.BPI_ActionStationUser_C.ServerPlayMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Section                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDisableBlendspace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLooping                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ActionStationUser_C::ServerPlayMontage(class UAnimMontage* Montage, double PlayRate, class FName Section, bool bDisableBlendspace, bool bLooping, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ActionStationUser_C", "ServerPlayMontage");

	Params::IBPI_ActionStationUser_C_ServerPlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;
	Parms.Section = Section;
	Parms.bDisableBlendspace = bDisableBlendspace;
	Parms.bLooping = bLooping;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


