#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Ping.BPI_Ping_C
// (None)

class UClass* IBPI_Ping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Ping_C");

	return Clss;
}


// BPI_Ping_C BPI_Ping.Default__BPI_Ping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Ping_C* IBPI_Ping_C::GetDefaultObj()
{
	static class IBPI_Ping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Ping_C*>(IBPI_Ping_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Ping.BPI_Ping_C.GetDefaultActionStationType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ActionStationType  ActionStationType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Ping_C::GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ping_C", "GetDefaultActionStationType");

	Params::IBPI_Ping_C_GetDefaultActionStationType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionStationType != nullptr)
		*ActionStationType = Parms.ActionStationType;

}


// Function BPI_Ping.BPI_Ping_C.GetPingObjectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PingObjectType        PingObjectType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DataTableRowName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Ping_C::GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ping_C", "GetPingObjectType");

	Params::IBPI_Ping_C_GetPingObjectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PingObjectType != nullptr)
		*PingObjectType = Parms.PingObjectType;

	if (DataTableRowName != nullptr)
		*DataTableRowName = Parms.DataTableRowName;

}

}


