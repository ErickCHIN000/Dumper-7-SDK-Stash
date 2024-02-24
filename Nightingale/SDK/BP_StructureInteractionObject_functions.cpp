#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureInteractionObject.BP_StructureInteractionObject_C
// (None)

class UClass* UBP_StructureInteractionObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureInteractionObject_C");

	return Clss;
}


// BP_StructureInteractionObject_C BP_StructureInteractionObject.Default__BP_StructureInteractionObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureInteractionObject_C* UBP_StructureInteractionObject_C::GetDefaultObj()
{
	static class UBP_StructureInteractionObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureInteractionObject_C*>(UBP_StructureInteractionObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.IsInteractionDisabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDisabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisabledText                                                     (Parm, OutParm)
// class UBP_StructureInteractionRequirementObject_C*CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CheckRequirements_OutReason                             (None)
// bool                               CallFunc_CheckRequirements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_CanInteract                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteract_InteractionText                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisabledDescription_Description                      (None)

void UBP_StructureInteractionObject_C::IsInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* IsDisabled, class FText* DisabledText, class UBP_StructureInteractionRequirementObject_C* CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_CheckRequirements_OutReason, bool CallFunc_CheckRequirements_ReturnValue, bool CallFunc_CanInteract_CanInteract, class FText CallFunc_CanInteract_InteractionText, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetDisabledDescription_Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "IsInteractionDisabled");

	Params::UBP_StructureInteractionObject_C_IsInteractionDisabled_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.Data = Data;
	Parms.CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject = CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckRequirements_OutReason = CallFunc_CheckRequirements_OutReason;
	Parms.CallFunc_CheckRequirements_ReturnValue = CallFunc_CheckRequirements_ReturnValue;
	Parms.CallFunc_CanInteract_CanInteract = CallFunc_CanInteract_CanInteract;
	Parms.CallFunc_CanInteract_InteractionText = CallFunc_CanInteract_InteractionText;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisabledDescription_Description = CallFunc_GetDisabledDescription_Description;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisabled != nullptr)
		*IsDisabled = Parms.IsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = Parms.DisabledText;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.GetButtonType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERadialButtonType       ButtonType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::GetButtonType(enum class ERadialButtonType* ButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "GetButtonType");

	Params::UBP_StructureInteractionObject_C_GetButtonType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonType != nullptr)
		*ButtonType = Parms.ButtonType;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.GetInteractionDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)

void UBP_StructureInteractionObject_C::GetInteractionDescription(class UObject* Structure, class APawn* Pawn, class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "GetInteractionDescription");

	Params::UBP_StructureInteractionObject_C_GetInteractionDescription_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.GetDisabledDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)

void UBP_StructureInteractionObject_C::GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "GetDisabledDescription");

	Params::UBP_StructureInteractionObject_C_GetDisabledDescription_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.Client_ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "Client_ExecuteInteraction");

	Params::UBP_StructureInteractionObject_C_Client_ExecuteInteraction_Params Parms{};

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


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewParsingIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "ExecuteInteraction");

	Params::UBP_StructureInteractionObject_C_ExecuteInteraction_Params Parms{};

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


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.BuildPawnInteractionPayload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleInitialPayload                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilityPayloadHandlePreviousPhaseData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              StartingParseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleOutputtedPayload                                                 (Parm, OutParm)
// int32                              NewParseIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::BuildPawnInteractionPayload(class APawn* Pawn, const struct FGameplayAbilityPayloadHandle& InitialPayload, const struct FGameplayAbilityPayloadHandle& PreviousPhaseData, int32 StartingParseIndex, bool* Success, struct FGameplayAbilityPayloadHandle* OutputtedPayload, int32* NewParseIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "BuildPawnInteractionPayload");

	Params::UBP_StructureInteractionObject_C_BuildPawnInteractionPayload_Params Parms{};

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


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.BuildStructureInteractionPayload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleInputtedPayload                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleModifiedPayload                                                  (Parm, OutParm)

void UBP_StructureInteractionObject_C::BuildStructureInteractionPayload(class UObject* Structure, const struct FGameplayAbilityPayloadHandle& InputtedPayload, bool* Success, struct FGameplayAbilityPayloadHandle* ModifiedPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "BuildStructureInteractionPayload");

	Params::UBP_StructureInteractionObject_C_BuildStructureInteractionPayload_Params Parms{};

	Parms.Structure = Structure;
	Parms.InputtedPayload = InputtedPayload;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ModifiedPayload != nullptr)
		*ModifiedPayload = std::move(Parms.ModifiedPayload);

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.CanInteract
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionText                                                  (Parm, OutParm)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_InteractionText                                 (None)
// bool                               CallFunc_IsInteractionAvailable_CanInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::CanInteract(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class FText* InteractionText, class APawn* LPawn, class UObject* LStructure, class FText CallFunc_GetText_InteractionText, bool CallFunc_IsInteractionAvailable_CanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "CanInteract");

	Params::UBP_StructureInteractionObject_C_CanInteract_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.Data = Data;
	Parms.LPawn = LPawn;
	Parms.LStructure = LStructure;
	Parms.CallFunc_GetText_InteractionText = CallFunc_GetText_InteractionText;
	Parms.CallFunc_IsInteractionAvailable_CanInteract = CallFunc_IsInteractionAvailable_CanInteract;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

	if (InteractionText != nullptr)
		*InteractionText = Parms.InteractionText;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.IsInteractionAvailable
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionRequirementObject_C*CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CheckRequirements_OutReason                             (None)
// bool                               CallFunc_CheckRequirements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UBP_StructureInteractionRequirementObject_C* CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_CheckRequirements_OutReason, bool CallFunc_CheckRequirements_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "IsInteractionAvailable");

	Params::UBP_StructureInteractionObject_C_IsInteractionAvailable_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject = CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckRequirements_OutReason = CallFunc_CheckRequirements_OutReason;
	Parms.CallFunc_CheckRequirements_ReturnValue = CallFunc_CheckRequirements_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function BP_StructureInteractionObject.BP_StructureInteractionObject_C.GetText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionText                                                  (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_InteractionText*K2Node_DynamicCast_AsStructure_Interaction_Interaction_Text      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureInteractionObject_C::GetText(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, class FText* InteractionText, bool CallFunc_IsValid_ReturnValue, class UStructureInteraction_InteractionText* K2Node_DynamicCast_AsStructure_Interaction_Interaction_Text, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureInteractionObject_C", "GetText");

	Params::UBP_StructureInteractionObject_C_GetText_Params Parms{};

	Parms.Structure = Structure;
	Parms.Pawn = Pawn;
	Parms.Data = Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Interaction_Interaction_Text = K2Node_DynamicCast_AsStructure_Interaction_Interaction_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionText != nullptr)
		*InteractionText = Parms.InteractionText;

}

}


