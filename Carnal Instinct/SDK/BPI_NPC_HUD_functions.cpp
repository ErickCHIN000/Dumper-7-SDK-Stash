#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPC_HUD.BPI_NPC_HUD_C
// (None)

class UClass* IBPI_NPC_HUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPC_HUD_C");

	return Clss;
}


// BPI_NPC_HUD_C BPI_NPC_HUD.Default__BPI_NPC_HUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPC_HUD_C* IBPI_NPC_HUD_C::GetDefaultObj()
{
	static class IBPI_NPC_HUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPC_HUD_C*>(IBPI_NPC_HUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPC_HUD.BPI_NPC_HUD_C.fnSetHUDLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reset_Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPC_HUD_C::FnSetHUDLocation(bool Reset_Location, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_HUD_C", "fnSetHUDLocation");

	Params::IBPI_NPC_HUD_C_FnSetHUDLocation_Params Parms{};

	Parms.Reset_Location = Reset_Location;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}

}


