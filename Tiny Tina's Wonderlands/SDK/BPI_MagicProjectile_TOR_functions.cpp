#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MagicProjectile_TOR.BPI_MagicProjectile_TOR_C
// (None)

class UClass* IBPI_MagicProjectile_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MagicProjectile_TOR_C");

	return Clss;
}


// BPI_MagicProjectile_TOR_C BPI_MagicProjectile_TOR.Default__BPI_MagicProjectile_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MagicProjectile_TOR_C* IBPI_MagicProjectile_TOR_C::GetDefaultObj()
{
	static class IBPI_MagicProjectile_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MagicProjectile_TOR_C*>(IBPI_MagicProjectile_TOR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MagicProjectile_TOR.BPI_MagicProjectile_TOR_C.DoMagicTORStickyAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InHitActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_MagicProjectile_TOR_C::DoMagicTORStickyAttach(class AActor* InHitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MagicProjectile_TOR_C", "DoMagicTORStickyAttach");

	Params::IBPI_MagicProjectile_TOR_C_DoMagicTORStickyAttach_Params Parms{};

	Parms.InHitActor = InHitActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


