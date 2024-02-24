#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Pickup.BPI_Pickup_C
// (None)

class UClass* IBPI_Pickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Pickup_C");

	return Clss;
}


// BPI_Pickup_C BPI_Pickup.Default__BPI_Pickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Pickup_C* IBPI_Pickup_C::GetDefaultObj()
{
	static class IBPI_Pickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Pickup_C*>(IBPI_Pickup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Pickup.BPI_Pickup_C.GetCollisionBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*               Box                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_Pickup_C::GetCollisionBox(class UBoxComponent** Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Pickup_C", "GetCollisionBox");

	Params::IBPI_Pickup_C_GetCollisionBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Box != nullptr)
		*Box = Parms.Box;

}

}


