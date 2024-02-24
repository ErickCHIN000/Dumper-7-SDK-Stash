#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_TinaOffering.BPI_TinaOffering_C
// (None)

class UClass* IBPI_TinaOffering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_TinaOffering_C");

	return Clss;
}


// BPI_TinaOffering_C BPI_TinaOffering.Default__BPI_TinaOffering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_TinaOffering_C* IBPI_TinaOffering_C::GetDefaultObj()
{
	static class IBPI_TinaOffering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_TinaOffering_C*>(IBPI_TinaOffering_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_TinaOffering.BPI_TinaOffering_C.GetLootAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LootAmount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TinaOffering_C::GetLootAmount(int32* LootAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_TinaOffering_C", "GetLootAmount");

	Params::IBPI_TinaOffering_C_GetLootAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LootAmount != nullptr)
		*LootAmount = Parms.LootAmount;

}


// Function BPI_TinaOffering.BPI_TinaOffering_C.GetRemainingCrystal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxAttributeFloat          RemainingCrystal                                                 (Parm, OutParm, HasGetValueTypeHash)
// int32                              CurrentCrystal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TinaOffering_C::GetRemainingCrystal(struct FGbxAttributeFloat* RemainingCrystal, int32* CurrentCrystal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_TinaOffering_C", "GetRemainingCrystal");

	Params::IBPI_TinaOffering_C_GetRemainingCrystal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RemainingCrystal != nullptr)
		*RemainingCrystal = std::move(Parms.RemainingCrystal);

	if (CurrentCrystal != nullptr)
		*CurrentCrystal = Parms.CurrentCrystal;

}

}


