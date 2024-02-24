#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PLayerStandin.BPI_PlayerStandin_C
// (None)

class UClass* IBPI_PlayerStandin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayerStandin_C");

	return Clss;
}


// BPI_PlayerStandin_C BPI_PLayerStandin.Default__BPI_PlayerStandin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlayerStandin_C* IBPI_PlayerStandin_C::GetDefaultObj()
{
	static class IBPI_PlayerStandin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlayerStandin_C*>(IBPI_PlayerStandin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Rogue_Stealth
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Rogue_Stealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Rogue_Stealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Rogue_LivingBlade
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Rogue_LivingBlade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Rogue_LivingBlade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Ranger_Cryonado
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Ranger_Cryonado()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Ranger_Cryonado");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Ranger_CalledShot
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Ranger_CalledShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Ranger_CalledShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Necromancer_ReaperOfSouls
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Necromancer_ReaperOfSouls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Necromancer_ReaperOfSouls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Necromancer_Sacrifice
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Necromancer_Sacrifice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Necromancer_Sacrifice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Knight_FireyRedemption
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Knight_FireyRedemption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Knight_FireyRedemption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Knight_HammerToss
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Knight_HammerToss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Knight_HammerToss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_GunMage_Polymorph
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_GunMage_Polymorph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_GunMage_Polymorph");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_StandIn_Barbarian_Whirlwind
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_StandIn_Barbarian_Whirlwind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_StandIn_Barbarian_Whirlwind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_PLayerStandin.BPI_PlayerStandin_C.Audio_Standin_Barbarian_AxeSlam
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_PlayerStandin_C::Audio_Standin_Barbarian_AxeSlam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerStandin_C", "Audio_Standin_Barbarian_AxeSlam");



	UObject::ProcessEvent(Func, nullptr);

}

}


