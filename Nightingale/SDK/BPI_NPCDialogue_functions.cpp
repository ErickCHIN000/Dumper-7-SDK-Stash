#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCDialogue.BPI_NPCDialogue_C
// (None)

class UClass* IBPI_NPCDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCDialogue_C");

	return Clss;
}


// BPI_NPCDialogue_C BPI_NPCDialogue.Default__BPI_NPCDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCDialogue_C* IBPI_NPCDialogue_C::GetDefaultObj()
{
	static class IBPI_NPCDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCDialogue_C*>(IBPI_NPCDialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetAmbientDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   AmbientDialogue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::SetAmbientDialogue(class UDialogue* AmbientDialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "SetAmbientDialogue");

	Params::IBPI_NPCDialogue_C_SetAmbientDialogue_Params Parms{};

	Parms.AmbientDialogue = AmbientDialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::SetDialogue(class UDialogue* Dialogue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "SetDialogue");

	Params::IBPI_NPCDialogue_C_SetDialogue_Params Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::SetAssociatedEncounter(class AEncounterBase* Associated_Encounter, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "SetAssociatedEncounter");

	Params::IBPI_NPCDialogue_C_SetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.GetAssociatedEncounter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::GetAssociatedEncounter(class AEncounterBase** Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "GetAssociatedEncounter");

	Params::IBPI_NPCDialogue_C_GetAssociatedEncounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Associated_Encounter != nullptr)
		*Associated_Encounter = Parms.Associated_Encounter;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.ShowMerchant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::ShowMerchant(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "ShowMerchant");

	Params::IBPI_NPCDialogue_C_ShowMerchant_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.RestorePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::RestorePlayer(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "RestorePlayer");

	Params::IBPI_NPCDialogue_C_RestorePlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.CreateDialogueEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*      PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::CreateDialogueEvent(class ABP_PlayerController_C* PlayerController, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "CreateDialogueEvent");

	Params::IBPI_NPCDialogue_C_CreateDialogueEvent_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.RemoveMenus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::RemoveMenus(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "RemoveMenus");

	Params::IBPI_NPCDialogue_C_RemoveMenus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_NPCDialogue.BPI_NPCDialogue_C.SetNPCCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCDialogue_C::SetNPCCamera(class AController* Controller, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCDialogue_C", "SetNPCCamera");

	Params::IBPI_NPCDialogue_C_SetNPCCamera_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


