#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Player.BPI_Player_C
// (None)

class UClass* IBPI_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Player_C");

	return Clss;
}


// BPI_Player_C BPI_Player.Default__BPI_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Player_C* IBPI_Player_C::GetDefaultObj()
{
	static class IBPI_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Player_C*>(IBPI_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Player.BPI_Player_C.SendOxygenToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewOxygen                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendOxygenToClient(double NewOxygen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendOxygenToClient");

	Params::IBPI_Player_C_SendOxygenToClient_Params Parms{};

	Parms.NewOxygen = NewOxygen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.CreateNotificationUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             UI_Delay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::CreateNotificationUI(class FText Text, class UTexture2D* Image, const struct FLinearColor& Color, double UI_Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "CreateNotificationUI");

	Params::IBPI_Player_C_CreateNotificationUI_Params Parms{};

	Parms.Text = Text;
	Parms.Image = Image;
	Parms.Color = Color;
	Parms.UI_Delay = UI_Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.StopMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::StopMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "StopMontage");

	Params::IBPI_Player_C_StopMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.PlayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Play_Rate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::PlayMontage(class UAnimMontage* Montage, double Play_Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "PlayMontage");

	Params::IBPI_Player_C_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.Play_Rate = Play_Rate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.PlayerDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Player_C::PlayerDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "PlayerDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Player.BPI_Player_C.SendRadiationToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendRadiationToClient(double NewRadiation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendRadiationToClient");

	Params::IBPI_Player_C_SendRadiationToClient_Params Parms{};

	Parms.NewRadiation = NewRadiation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.SendThirstToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewThirst                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendThirstToClient(double NewThirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendThirstToClient");

	Params::IBPI_Player_C_SendThirstToClient_Params Parms{};

	Parms.NewThirst = NewThirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.SendHungerToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendHungerToClient(double NewHunger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendHungerToClient");

	Params::IBPI_Player_C_SendHungerToClient_Params Parms{};

	Parms.NewHunger = NewHunger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.SendHealthToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendHealthToClient(double NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendHealthToClient");

	Params::IBPI_Player_C_SendHealthToClient_Params Parms{};

	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.UpdatePlayerSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSpeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::UpdatePlayerSpeed(double NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "UpdatePlayerSpeed");

	Params::IBPI_Player_C_UpdatePlayerSpeed_Params Parms{};

	Parms.NewSpeed = NewSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Player.BPI_Player_C.GetPlayerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       Player                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::GetPlayerRef(class ABP_PlayerCharacter_C** Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "GetPlayerRef");

	Params::IBPI_Player_C_GetPlayerRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

}


// Function BPI_Player.BPI_Player_C.SendStaminaToClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewStamina                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Player_C::SendStaminaToClient(double NewStamina)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Player_C", "SendStaminaToClient");

	Params::IBPI_Player_C_SendStaminaToClient_Params Parms{};

	Parms.NewStamina = NewStamina;

	UObject::ProcessEvent(Func, &Parms);

}

}


