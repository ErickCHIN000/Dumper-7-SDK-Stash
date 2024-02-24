#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Carry.BPI_Carry_C
// (None)

class UClass* IBPI_Carry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Carry_C");

	return Clss;
}


// BPI_Carry_C BPI_Carry.Default__BPI_Carry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Carry_C* IBPI_Carry_C::GetDefaultObj()
{
	static class IBPI_Carry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Carry_C*>(IBPI_Carry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Carry.BPI_Carry_C.GetCarriedResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             ResourceItem                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsCarryingResource                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Carry_C::GetCarriedResource(class AEquippableItem** ResourceItem, bool* IsCarryingResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Carry_C", "GetCarriedResource");

	Params::IBPI_Carry_C_GetCarriedResource_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResourceItem != nullptr)
		*ResourceItem = Parms.ResourceItem;

	if (IsCarryingResource != nullptr)
		*IsCarryingResource = Parms.IsCarryingResource;

}

}


