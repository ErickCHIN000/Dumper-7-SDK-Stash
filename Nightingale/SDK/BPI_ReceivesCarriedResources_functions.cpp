#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ReceivesCarriedResources.BPI_ReceivesCarriedResources_C
// (None)

class UClass* IBPI_ReceivesCarriedResources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ReceivesCarriedResources_C");

	return Clss;
}


// BPI_ReceivesCarriedResources_C BPI_ReceivesCarriedResources.Default__BPI_ReceivesCarriedResources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ReceivesCarriedResources_C* IBPI_ReceivesCarriedResources_C::GetDefaultObj()
{
	static class IBPI_ReceivesCarriedResources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ReceivesCarriedResources_C*>(IBPI_ReceivesCarriedResources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ReceivesCarriedResources.BPI_ReceivesCarriedResources_C.OnReceiveCarriedResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_ReceivesCarriedResources_C::OnReceiveCarriedResources(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ReceivesCarriedResources_C", "OnReceiveCarriedResources");

	Params::IBPI_ReceivesCarriedResources_C_OnReceiveCarriedResources_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}

}


