#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPC_Interaction.BPI_NPC_Interaction_C
// (None)

class UClass* IBPI_NPC_Interaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPC_Interaction_C");

	return Clss;
}


// BPI_NPC_Interaction_C BPI_NPC_Interaction.Default__BPI_NPC_Interaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPC_Interaction_C* IBPI_NPC_Interaction_C::GetDefaultObj()
{
	static class IBPI_NPC_Interaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPC_Interaction_C*>(IBPI_NPC_Interaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnAddRemoveDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Add_Dialogue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_NPC_DialogueIntroOutroGreetingsGoodbyes                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FStruct_NPC_AllowedDialogue>Dialogue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_NPC_Interaction_C::FnAddRemoveDialogue(bool Add_Dialogue, const struct FStruct_NPC_DialogueIntroOutro& GreetingsGoodbyes, TArray<struct FStruct_NPC_AllowedDialogue>& Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnAddRemoveDialogue");

	Params::IBPI_NPC_Interaction_C_FnAddRemoveDialogue_Params Parms{};

	Parms.Add_Dialogue = Add_Dialogue;
	Parms.GreetingsGoodbyes = GreetingsGoodbyes;
	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnSetAllowedDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_NPC_DialogueIntroOutroGreetingsGoodbyes                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FStruct_NPC_AllowedDialogue>New_Allowed_Dialogue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_NPC_Interaction_C::FnSetAllowedDialogue(const struct FStruct_NPC_DialogueIntroOutro& GreetingsGoodbyes, TArray<struct FStruct_NPC_AllowedDialogue>& New_Allowed_Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnSetAllowedDialogue");

	Params::IBPI_NPC_Interaction_C_FnSetAllowedDialogue_Params Parms{};

	Parms.GreetingsGoodbyes = GreetingsGoodbyes;
	Parms.New_Allowed_Dialogue = New_Allowed_Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnStartListening
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_NPC_Interaction_C::FnStartListening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnStartListening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnNextLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_Reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_Dialogue_State Dialogue_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_DialogueType       Dialogue_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DT_NPC_Dialogue     Current_Line                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_NPC_Interaction_C::FnNextLine(class AActor* Actor_Reference, enum class Enum_NPC_Dialogue_State Dialogue_State, enum class Enum_DialogueType Dialogue_Type, const struct FStruct_DT_NPC_Dialogue& Current_Line)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnNextLine");

	Params::IBPI_NPC_Interaction_C_FnNextLine_Params Parms{};

	Parms.Actor_Reference = Actor_Reference;
	Parms.Dialogue_State = Dialogue_State;
	Parms.Dialogue_Type = Dialogue_Type;
	Parms.Current_Line = Current_Line;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnConfirmInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_Reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DT_NPC_Dialogue     Selected_Line                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FStruct_NPC_DialogueIntroOutroIntro_and_Outro                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FStruct_NPC_AllowedDialogue>Allowed_Dialogue                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_NPC_Interaction_C::FnConfirmInteraction(class AActor* Actor_Reference, const struct FStruct_DT_NPC_Dialogue& Selected_Line, const struct FStruct_NPC_DialogueIntroOutro& Intro_and_Outro, TArray<struct FStruct_NPC_AllowedDialogue>& Allowed_Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnConfirmInteraction");

	Params::IBPI_NPC_Interaction_C_FnConfirmInteraction_Params Parms{};

	Parms.Actor_Reference = Actor_Reference;
	Parms.Selected_Line = Selected_Line;
	Parms.Intro_and_Outro = Intro_and_Outro;
	Parms.Allowed_Dialogue = Allowed_Dialogue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnInitInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_Reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPC_Interaction_C::FnInitInteraction(class AActor* Actor_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnInitInteraction");

	Params::IBPI_NPC_Interaction_C_FnInitInteraction_Params Parms{};

	Parms.Actor_Reference = Actor_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NPC_Interaction.BPI_NPC_Interaction_C.fnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_Reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPC_Interaction_C::FnInteract(class AActor* Actor_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPC_Interaction_C", "fnInteract");

	Params::IBPI_NPC_Interaction_C_FnInteract_Params Parms{};

	Parms.Actor_Reference = Actor_Reference;

	UObject::ProcessEvent(Func, &Parms);

}

}


