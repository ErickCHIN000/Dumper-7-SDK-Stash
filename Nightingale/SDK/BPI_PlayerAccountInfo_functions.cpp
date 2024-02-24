#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlayerAccountInfo.BPI_PlayerAccountInfo_C
// (None)

class UClass* IBPI_PlayerAccountInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayerAccountInfo_C");

	return Clss;
}


// BPI_PlayerAccountInfo_C BPI_PlayerAccountInfo.Default__BPI_PlayerAccountInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlayerAccountInfo_C* IBPI_PlayerAccountInfo_C::GetDefaultObj()
{
	static class IBPI_PlayerAccountInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlayerAccountInfo_C*>(IBPI_PlayerAccountInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlayerAccountInfo.BPI_PlayerAccountInfo_C.GetPlayerNameFromPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_PlayerAccountInfo_C::GetPlayerNameFromPawn(class FString* PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerAccountInfo_C", "GetPlayerNameFromPawn");

	Params::IBPI_PlayerAccountInfo_C_GetPlayerNameFromPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerName != nullptr)
		*PlayerName = std::move(Parms.PlayerName);

}


// Function BPI_PlayerAccountInfo.BPI_PlayerAccountInfo_C.GetPersistentUniqueIdFromPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PersistentId                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_PlayerAccountInfo_C::GetPersistentUniqueIdFromPawn(class FString* PersistentId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerAccountInfo_C", "GetPersistentUniqueIdFromPawn");

	Params::IBPI_PlayerAccountInfo_C_GetPersistentUniqueIdFromPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PersistentId != nullptr)
		*PersistentId = std::move(Parms.PersistentId);

}

}


