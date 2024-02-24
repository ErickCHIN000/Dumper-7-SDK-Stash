#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_Structure.GA_Interaction_Structure_C
// (None)

class UClass* UGA_Interaction_Structure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_Structure_C");

	return Clss;
}


// GA_Interaction_Structure_C GA_Interaction_Structure.Default__GA_Interaction_Structure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_Structure_C* UGA_Interaction_Structure_C::GetDefaultObj()
{
	static class UGA_Interaction_Structure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_Structure_C*>(UGA_Interaction_Structure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.BuildPawnPayload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureInteractionObject_C*StructureInteraction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleStructurePayload                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (Parm, OutParm)
// struct FGameplayAbilityPayloadHandleEmptyPayload                                                     (Edit, BlueprintVisible)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_BuildPawnInteractionPayload_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildPawnInteractionPayload_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_BuildPawnInteractionPayload_OutputtedPayload            (None)
// int32                              CallFunc_BuildPawnInteractionPayload_NewParseIndex               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Structure_C::BuildPawnPayload(class UBP_StructureInteractionObject_C* StructureInteraction, const struct FGameplayAbilityPayloadHandle& StructurePayload, bool* bSuccess, struct FGameplayAbilityPayloadHandle* Payload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_BuildPawnInteractionPayload_self_CastInput, bool CallFunc_BuildPawnInteractionPayload_Success, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildPawnInteractionPayload_OutputtedPayload, int32 CallFunc_BuildPawnInteractionPayload_NewParseIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "BuildPawnPayload");

	Params::UGA_Interaction_Structure_C_BuildPawnPayload_Params Parms{};

	Parms.StructureInteraction = StructureInteraction;
	Parms.StructurePayload = StructurePayload;
	Parms.EmptyPayload = EmptyPayload;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_BuildPawnInteractionPayload_self_CastInput = CallFunc_BuildPawnInteractionPayload_self_CastInput;
	Parms.CallFunc_BuildPawnInteractionPayload_Success = CallFunc_BuildPawnInteractionPayload_Success;
	Parms.CallFunc_BuildPawnInteractionPayload_OutputtedPayload = CallFunc_BuildPawnInteractionPayload_OutputtedPayload;
	Parms.CallFunc_BuildPawnInteractionPayload_NewParseIndex = CallFunc_BuildPawnInteractionPayload_NewParseIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Payload != nullptr)
		*Payload = std::move(Parms.Payload);

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.BuildStructurePayload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_StructureInteractionObject_C*StructureInteractionObject                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandlePayload                                                          (Parm, OutParm)
// struct FGameplayAbilityPayloadHandleEmptyPayload                                                     (Edit, BlueprintVisible)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_BuildStructureInteractionPayload_self_CastInput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildStructureInteractionPayload_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_BuildStructureInteractionPayload_ModifiedPayload        (None)

void UGA_Interaction_Structure_C::BuildStructurePayload(class UBP_StructureInteractionObject_C* StructureInteractionObject, bool* bSuccess, struct FGameplayAbilityPayloadHandle* Payload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_BuildStructureInteractionPayload_self_CastInput, bool CallFunc_BuildStructureInteractionPayload_Success, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildStructureInteractionPayload_ModifiedPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "BuildStructurePayload");

	Params::UGA_Interaction_Structure_C_BuildStructurePayload_Params Parms{};

	Parms.StructureInteractionObject = StructureInteractionObject;
	Parms.EmptyPayload = EmptyPayload;
	Parms.CallFunc_BuildStructureInteractionPayload_self_CastInput = CallFunc_BuildStructureInteractionPayload_self_CastInput;
	Parms.CallFunc_BuildStructureInteractionPayload_Success = CallFunc_BuildStructureInteractionPayload_Success;
	Parms.CallFunc_BuildStructureInteractionPayload_ModifiedPayload = CallFunc_BuildStructureInteractionPayload_ModifiedPayload;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Payload != nullptr)
		*Payload = std::move(Parms.Payload);

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_ObtainOwningStructure_OwningStructure                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Structure_C::PopulateVariables(bool* bSuccess, class UObject* CallFunc_ObtainOwningStructure_OwningStructure, bool CallFunc_PopulateVariables_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "PopulateVariables");

	Params::UGA_Interaction_Structure_C_PopulateVariables_Params Parms{};

	Parms.CallFunc_ObtainOwningStructure_OwningStructure = CallFunc_ObtainOwningStructure_OwningStructure;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTagContainer       ParentTags                                                       (Edit, BlueprintVisible)
// struct FGameplayAbilityPayloadHandlePawnPayload                                                      (Edit, BlueprintVisible)
// struct FGameplayAbilityPayloadHandleEmptyPayload                                                     (Edit, BlueprintVisible)
// class UBP_StructureInteractionObject_C*StructureInteractionObject                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionObject_C*CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildStructurePayload_bSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_BuildStructurePayload_Payload                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_Client_ExecuteInteraction_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Client_ExecuteInteraction_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Client_ExecuteInteraction_NewParsingIndex               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)
// bool                               CallFunc_BuildPawnPayload_bSuccess                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_BuildPawnPayload_Payload                                (None)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PawnPhaseCanExecute_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_PawnPhaseCanExecute_SelectedInteraction                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_ExecuteInteraction_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteInteraction_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ExecuteInteraction_NewParsingIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Structure_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& ParentTags, const struct FGameplayAbilityPayloadHandle& PawnPayload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, class UBP_StructureInteractionObject_C* StructureInteractionObject, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, bool CallFunc_BuildStructurePayload_bSuccess, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildStructurePayload_Payload, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_Client_ExecuteInteraction_self_CastInput, bool CallFunc_Client_ExecuteInteraction_Success, int32 CallFunc_Client_ExecuteInteraction_NewParsingIndex, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_BuildPawnPayload_bSuccess, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildPawnPayload_Payload, class APawn* CallFunc_GetPawn_Pawn_1, bool CallFunc_PawnPhaseCanExecute_Success, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_PawnPhaseCanExecute_SelectedInteraction, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_ExecuteInteraction_self_CastInput, bool CallFunc_ExecuteInteraction_Success, int32 CallFunc_ExecuteInteraction_NewParsingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "ExecuteInteraction");

	Params::UGA_Interaction_Structure_C_ExecuteInteraction_Params Parms{};

	Parms.ParentTags = ParentTags;
	Parms.PawnPayload = PawnPayload;
	Parms.EmptyPayload = EmptyPayload;
	Parms.StructureInteractionObject = StructureInteractionObject;
	Parms.CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object = CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object;
	Parms.CallFunc_BuildStructurePayload_bSuccess = CallFunc_BuildStructurePayload_bSuccess;
	Parms.CallFunc_BuildStructurePayload_Payload = CallFunc_BuildStructurePayload_Payload;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_Client_ExecuteInteraction_self_CastInput = CallFunc_Client_ExecuteInteraction_self_CastInput;
	Parms.CallFunc_Client_ExecuteInteraction_Success = CallFunc_Client_ExecuteInteraction_Success;
	Parms.CallFunc_Client_ExecuteInteraction_NewParsingIndex = CallFunc_Client_ExecuteInteraction_NewParsingIndex;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;
	Parms.CallFunc_BuildPawnPayload_bSuccess = CallFunc_BuildPawnPayload_bSuccess;
	Parms.CallFunc_BuildPawnPayload_Payload = CallFunc_BuildPawnPayload_Payload;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.CallFunc_PawnPhaseCanExecute_Success = CallFunc_PawnPhaseCanExecute_Success;
	Parms.CallFunc_PawnPhaseCanExecute_SelectedInteraction = CallFunc_PawnPhaseCanExecute_SelectedInteraction;
	Parms.CallFunc_ExecuteInteraction_self_CastInput = CallFunc_ExecuteInteraction_self_CastInput;
	Parms.CallFunc_ExecuteInteraction_Success = CallFunc_ExecuteInteraction_Success;
	Parms.CallFunc_ExecuteInteraction_NewParsingIndex = CallFunc_ExecuteInteraction_NewParsingIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.PawnPhaseCanExecute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*SelectedInteraction                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Interaction                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailableInteractions                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueID_ReturnValue                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetActiveMeshInteractions_Mesh_Interactions             (ReferenceParm)

void UGA_Interaction_Structure_C::PawnPhaseCanExecute(bool* Success, class UStructureInteraction_PostConstructionInteraction_DataAsset** SelectedInteraction, class UStructureInteraction_PostConstructionInteraction_DataAsset* Interaction, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, int32 Temp_int_Array_Index_Variable, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FGuid& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetActiveMeshInteractions_Mesh_Interactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "PawnPhaseCanExecute");

	Params::UGA_Interaction_Structure_C_PawnPhaseCanExecute_Params Parms{};

	Parms.Interaction = Interaction;
	Parms.LAvailableInteractions = LAvailableInteractions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetActiveMeshInteractions_Mesh_Interactions = CallFunc_GetActiveMeshInteractions_Mesh_Interactions;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SelectedInteraction != nullptr)
		*SelectedInteraction = Parms.SelectedInteraction;

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.ObtainOwningStructure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     OwningStructure                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LocalInteractable                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Structure_C::ObtainOwningStructure(class UObject** OwningStructure, class UObject* LocalInteractable, class UObject* CallFunc_GetInteractable_Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "ObtainOwningStructure");

	Params::UGA_Interaction_Structure_C_ObtainOwningStructure_Params Parms{};

	Parms.LocalInteractable = LocalInteractable;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;

	UObject::ProcessEvent(Func, &Parms);

	if (OwningStructure != nullptr)
		*OwningStructure = Parms.OwningStructure;

}


// Function GA_Interaction_Structure.GA_Interaction_Structure_C.GetInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Interactable                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         Structure                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CompositePiece                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyKindOfStructureObject_IsValidStructure             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractableObjectFromInteractionData_ReturnValue    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyKindOfStructureObject_IsValidStructure_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CallFunc_GetCompositeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_GetCompositePiece_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Structure_C::GetInteractable(class UObject** Interactable, class AStructureComposite* Structure, class UStructureCompositePiece* CompositePiece, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure_1, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, class UObject* CallFunc_GetInteractable_Interactable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Structure_C", "GetInteractable");

	Params::UGA_Interaction_Structure_C_GetInteractable_Params Parms{};

	Parms.Structure = Structure;
	Parms.CompositePiece = CompositePiece;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnyKindOfStructureObject_IsValidStructure = CallFunc_IsAnyKindOfStructureObject_IsValidStructure;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetInteractableObjectFromInteractionData_ReturnValue = CallFunc_GetInteractableObjectFromInteractionData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAnyKindOfStructureObject_IsValidStructure_1 = CallFunc_IsAnyKindOfStructureObject_IsValidStructure_1;
	Parms.CallFunc_GetCompositeComponent_ReturnValue = CallFunc_GetCompositeComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCompositePiece_ReturnValue = CallFunc_GetCompositePiece_ReturnValue;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Composite_1 = K2Node_DynamicCast_AsStructure_Composite_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Interactable != nullptr)
		*Interactable = Parms.Interactable;

}

}


