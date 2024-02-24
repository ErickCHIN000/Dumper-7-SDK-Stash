#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AIEndlessDungeon.BPI_AIEndlessDungeon_C
// (None)

class UClass* IBPI_AIEndlessDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AIEndlessDungeon_C");

	return Clss;
}


// BPI_AIEndlessDungeon_C BPI_AIEndlessDungeon.Default__BPI_AIEndlessDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AIEndlessDungeon_C* IBPI_AIEndlessDungeon_C::GetDefaultObj()
{
	static class IBPI_AIEndlessDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AIEndlessDungeon_C*>(IBPI_AIEndlessDungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AIEndlessDungeon.BPI_AIEndlessDungeon_C.AIEndlessDungeon_Get
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEndlessDungeon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIEndlessDungeon_C::AIEndlessDungeon_Get(bool* IsEndlessDungeon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIEndlessDungeon_C", "AIEndlessDungeon_Get");

	Params::IBPI_AIEndlessDungeon_C_AIEndlessDungeon_Get_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEndlessDungeon != nullptr)
		*IsEndlessDungeon = Parms.IsEndlessDungeon;

}


// Function BPI_AIEndlessDungeon.BPI_AIEndlessDungeon_C.AIEndlessDungeon_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AIEndlessDungeon_C::AIEndlessDungeon_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIEndlessDungeon_C", "AIEndlessDungeon_Set");



	UObject::ProcessEvent(Func, nullptr);

}

}


