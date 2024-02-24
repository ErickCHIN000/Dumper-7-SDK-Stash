#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Buildables.BPI_Buildables_C
// (None)

class UClass* IBPI_Buildables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Buildables_C");

	return Clss;
}


// BPI_Buildables_C BPI_Buildables.Default__BPI_Buildables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Buildables_C* IBPI_Buildables_C::GetDefaultObj()
{
	static class IBPI_Buildables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Buildables_C*>(IBPI_Buildables_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Buildables.BPI_Buildables_C.GetBuildType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BuildingSnapTypes  Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::GetBuildType(enum class Enum_BuildingSnapTypes* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "GetBuildType");

	Params::IBPI_Buildables_C_GetBuildType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function BPI_Buildables.BPI_Buildables_C.RemoveModularBuilds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Buildables_C::RemoveModularBuilds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "RemoveModularBuilds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Buildables.BPI_Buildables_C.Requires Power?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Required_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Requires_Power_(bool* Required_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "Requires Power?");

	Params::IBPI_Buildables_C_Requires_Power__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Required_ != nullptr)
		*Required_ = Parms.Required_;

}


// Function BPI_Buildables.BPI_Buildables_C.OnDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::OnDestroy(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "OnDestroy");

	Params::IBPI_Buildables_C_OnDestroy_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Buildables.BPI_Buildables_C.OnInteractBuildable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::OnInteractBuildable(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "OnInteractBuildable");

	Params::IBPI_Buildables_C_OnInteractBuildable_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Buildables.BPI_Buildables_C.Power Off
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Power_Off(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "Power Off");

	Params::IBPI_Buildables_C_Power_Off_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Buildables.BPI_Buildables_C.Power On
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Power_On(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Buildables_C", "Power On");

	Params::IBPI_Buildables_C_Power_On_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


