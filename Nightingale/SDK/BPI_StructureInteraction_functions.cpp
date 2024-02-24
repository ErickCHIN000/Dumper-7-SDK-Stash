#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StructureInteraction.BPI_StructureInteraction_C
// (None)

class UClass* IBPI_StructureInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StructureInteraction_C");

	return Clss;
}


// BPI_StructureInteraction_C BPI_StructureInteraction.Default__BPI_StructureInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StructureInteraction_C* IBPI_StructureInteraction_C::GetDefaultObj()
{
	static class IBPI_StructureInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StructureInteraction_C*>(IBPI_StructureInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDisabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisabledText                                                     (Parm, OutParm)

void IBPI_StructureInteraction_C::IsInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* IsDisabled, class FText* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "IsInteractionDisabled");

	Params::IBPI_StructureInteraction_C_IsInteractionDisabled_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisabled != nullptr)
		*IsDisabled = Parms.IsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = Parms.DisabledText;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.GetButtonType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERadialButtonType       ButtonType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureInteraction_C::GetButtonType(enum class ERadialButtonType* ButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "GetButtonType");

	Params::IBPI_StructureInteraction_C_GetButtonType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonType != nullptr)
		*ButtonType = Parms.ButtonType;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.GetInteractionDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)

void IBPI_StructureInteraction_C::GetInteractionDescription(class UObject* Structure, class APawn* Pawn, class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "GetInteractionDescription");

	Params::IBPI_StructureInteraction_C_GetInteractionDescription_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.GetDisabledDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)

void IBPI_StructureInteraction_C::GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "GetDisabledDescription");

	Params::IBPI_StructureInteraction_C_GetDisabledDescription_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.Client_ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureInteraction_C::Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "Client_ExecuteInteraction");

	Params::IBPI_StructureInteraction_C_Client_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureInteraction_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "ExecuteInteraction");

	Params::IBPI_StructureInteraction_C_ExecuteInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.Payload = Payload;
	Parms.StartingParseIndex = StartingParseIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (NewParsingIndex != nullptr)
		*NewParsingIndex = Parms.NewParsingIndex;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.BuildPawnInteractionPayload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleInitialPayload                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilityPayloadHandlePreviousPhaseData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleOutputtedPayload                                                 (Parm, OutParm)
// int32                              NewParseIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StructureInteraction_C::BuildPawnInteractionPayload(class APawn* Pawn, const struct FGameplayAbilityPayloadHandle& InitialPayload, const struct FGameplayAbilityPayloadHandle& PreviousPhaseData, int32 StartingParseIndex, bool* Success, struct FGameplayAbilityPayloadHandle* OutputtedPayload, int32* NewParseIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "BuildPawnInteractionPayload");

	Params::IBPI_StructureInteraction_C_BuildPawnInteractionPayload_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.InitialPayload = InitialPayload;
	Parms.PreviousPhaseData = PreviousPhaseData;
	Parms.StartingParseIndex = StartingParseIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (OutputtedPayload != nullptr)
		*OutputtedPayload = std::move(Parms.OutputtedPayload);

	if (NewParseIndex != nullptr)
		*NewParseIndex = Parms.NewParseIndex;

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.BuildStructureInteractionPayload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleInputtedPayload                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleModifiedPayload                                                  (Parm, OutParm)

void IBPI_StructureInteraction_C::BuildStructureInteractionPayload(class UObject* Structure, const struct FGameplayAbilityPayloadHandle& InputtedPayload, bool* Success, struct FGameplayAbilityPayloadHandle* ModifiedPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "BuildStructureInteractionPayload");

	Params::IBPI_StructureInteraction_C_BuildStructureInteractionPayload_Params Parms{};

	Parms.Structure = Structure;
	Parms.InputtedPayload = InputtedPayload;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ModifiedPayload != nullptr)
		*ModifiedPayload = std::move(Parms.ModifiedPayload);

}


// Function BPI_StructureInteraction.BPI_StructureInteraction_C.CanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionText                                                  (Parm, OutParm)

void IBPI_StructureInteraction_C::CanInteract(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class FText* InteractionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StructureInteraction_C", "CanInteract");

	Params::IBPI_StructureInteraction_C_CanInteract_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

	if (InteractionText != nullptr)
		*InteractionText = Parms.InteractionText;

}

}


