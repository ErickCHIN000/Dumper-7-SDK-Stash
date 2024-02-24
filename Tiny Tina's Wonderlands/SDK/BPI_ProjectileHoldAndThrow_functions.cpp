#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C
// (None)

class UClass* IBPI_ProjectileHoldAndThrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ProjectileHoldAndThrow_C");

	return Clss;
}


// BPI_ProjectileHoldAndThrow_C BPI_ProjectileHoldAndThrow.Default__BPI_ProjectileHoldAndThrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ProjectileHoldAndThrow_C* IBPI_ProjectileHoldAndThrow_C::GetDefaultObj()
{
	static class IBPI_ProjectileHoldAndThrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ProjectileHoldAndThrow_C*>(IBPI_ProjectileHoldAndThrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ProjectileHoldAndThrow_C::HNT_Throw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileHoldAndThrow_C", "HNT_Throw");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ProjectileHoldAndThrow_C::HNT_Drop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileHoldAndThrow_C", "HNT_Drop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_ProjectileHoldAndThrow_C::HNT_Prime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileHoldAndThrow_C", "HNT_Prime");



	UObject::ProcessEvent(Func, nullptr);

}

}


