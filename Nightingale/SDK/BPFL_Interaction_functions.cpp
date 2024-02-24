#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Interaction.BPFL_Interaction_C
// (None)

class UClass* UBPFL_Interaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Interaction_C");

	return Clss;
}


// BPFL_Interaction_C BPFL_Interaction.Default__BPFL_Interaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Interaction_C* UBPFL_Interaction_C::GetDefaultObj()
{
	static class UBPFL_Interaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Interaction_C*>(UBPFL_Interaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Interaction.BPFL_Interaction_C.GetInteractionOptions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNWXInteractionOption>InteractionOptions                                               (Parm, OutParm)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*LInteractionDataAsset                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXInteractionOption       ExistingInteraction                                              (Edit, BlueprintVisible)
// bool                               bFoundConnectionMatch                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXInteractionOption       NewInteraction                                                   (Edit, BlueprintVisible)
// TArray<struct FNWXInteractionOption>LInteractionOptions                                              (Edit, BlueprintVisible)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailable_Interactions                                          (Edit, BlueprintVisible)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LInteractable                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractableObjectFromInteractionData_ReturnValue    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueID_ReturnValue                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteractionComponent*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetConnectionDataAssetUID_ReturnValue                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllMeshInteractions_Available_Interactions           (ReferenceParm)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionObject_C*CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>K2Node_DynamicCast_AsBPI_Structure_Interaction                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisabledDescription_Description                      (None)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXInteractionOption       CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExecuteStructureInteraction_bCanInteract             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanExecuteStructureInteraction_InteractionText          (None)
// struct FNWXInteractionOption       K2Node_MakeStruct_NWXInteractionOption                           (None)

void UBPFL_Interaction_C::GetInteractionOptions(struct FInteractionData& InteractionData, class APawn* Pawn, class UObject* __WorldContext, TArray<struct FNWXInteractionOption>* InteractionOptions, class UStructureInteraction_PostConstructionInteraction_DataAsset* LInteractionDataAsset, int32 Index, const struct FNWXInteractionOption& ExistingInteraction, bool bFoundConnectionMatch, const struct FNWXInteractionOption& NewInteraction, const TArray<struct FNWXInteractionOption>& LInteractionOptions, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailable_Interactions, class APawn* LPawn, class UObject* LInteractable, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetUniqueID_ReturnValue, class UStructureInteractionComponent* CallFunc_GetDefaultObject_ReturnValue, const struct FGuid& CallFunc_GetConnectionDataAssetUID_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllMeshInteractions_Available_Interactions, bool CallFunc_IsValid_Guid_ReturnValue, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, TScriptInterface<class IBPI_StructureInteraction_C> K2Node_DynamicCast_AsBPI_Structure_Interaction, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisabledDescription_Description, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FNWXInteractionOption& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_CanExecuteStructureInteraction_bCanInteract, class FText CallFunc_CanExecuteStructureInteraction_InteractionText, const struct FNWXInteractionOption& K2Node_MakeStruct_NWXInteractionOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "GetInteractionOptions");

	Params::UBPFL_Interaction_C_GetInteractionOptions_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.Pawn = Pawn;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteractionDataAsset = LInteractionDataAsset;
	Parms.Index = Index;
	Parms.ExistingInteraction = ExistingInteraction;
	Parms.bFoundConnectionMatch = bFoundConnectionMatch;
	Parms.NewInteraction = NewInteraction;
	Parms.LInteractionOptions = LInteractionOptions;
	Parms.LAvailable_Interactions = LAvailable_Interactions;
	Parms.LPawn = LPawn;
	Parms.LInteractable = LInteractable;
	Parms.CallFunc_GetInteractableObjectFromInteractionData_ReturnValue = CallFunc_GetInteractableObjectFromInteractionData_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetConnectionDataAssetUID_ReturnValue = CallFunc_GetConnectionDataAssetUID_ReturnValue;
	Parms.CallFunc_GetAllMeshInteractions_Available_Interactions = CallFunc_GetAllMeshInteractions_Available_Interactions;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object = CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Interaction = K2Node_DynamicCast_AsBPI_Structure_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisabledDescription_Description = CallFunc_GetDisabledDescription_Description;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_CanExecuteStructureInteraction_bCanInteract = CallFunc_CanExecuteStructureInteraction_bCanInteract;
	Parms.CallFunc_CanExecuteStructureInteraction_InteractionText = CallFunc_CanExecuteStructureInteraction_InteractionText;
	Parms.K2Node_MakeStruct_NWXInteractionOption = K2Node_MakeStruct_NWXInteractionOption;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionOptions != nullptr)
		*InteractionOptions = std::move(Parms.InteractionOptions);

}


// Function BPFL_Interaction.BPFL_Interaction_C.HasMultipleInteractionOptions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            CurrentInteractionData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasMultipleInteractions                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LInteractable                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractableObjectFromInteractionData_ReturnValue    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyKindOfStructureObject_IsValidStructure             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetActiveMeshInteractions_Mesh_Interactions             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Interaction_C::HasMultipleInteractionOptions(const struct FInteractionData& CurrentInteractionData, class APawn* InteractingPawn, class UObject* __WorldContext, bool* HasMultipleInteractions, class UObject* LInteractable, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetActiveMeshInteractions_Mesh_Interactions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "HasMultipleInteractionOptions");

	Params::UBPFL_Interaction_C_HasMultipleInteractionOptions_Params Parms{};

	Parms.CurrentInteractionData = CurrentInteractionData;
	Parms.InteractingPawn = InteractingPawn;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteractable = LInteractable;
	Parms.CallFunc_GetInteractableObjectFromInteractionData_ReturnValue = CallFunc_GetInteractableObjectFromInteractionData_ReturnValue;
	Parms.CallFunc_IsAnyKindOfStructureObject_IsValidStructure = CallFunc_IsAnyKindOfStructureObject_IsValidStructure;
	Parms.CallFunc_GetActiveMeshInteractions_Mesh_Interactions = CallFunc_GetActiveMeshInteractions_Mesh_Interactions;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasMultipleInteractions != nullptr)
		*HasMultipleInteractions = Parms.HasMultipleInteractions;

}


// Function BPFL_Interaction.BPFL_Interaction_C.GetInteractableTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInteractionData            InteractionData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            LInteractionData                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// class AActor*                      LInteractionActor                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractableGetter>K2Node_DynamicCast_AsInteractable_Getter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetInteractableTransform_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Interaction_C::GetInteractableTransform(struct FInteractionData& InteractionData, class UObject* __WorldContext, struct FTransform* Transform, const struct FInteractionData& LInteractionData, class AActor* LInteractionActor, const struct FTransform& Temp_struct_Variable, TScriptInterface<class IInteractableGetter> K2Node_DynamicCast_AsInteractable_Getter, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetInteractableTransform_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "GetInteractableTransform");

	Params::UBPFL_Interaction_C_GetInteractableTransform_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteractionData = LInteractionData;
	Parms.LInteractionActor = LInteractionActor;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsInteractable_Getter = K2Node_DynamicCast_AsInteractable_Getter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetInteractableTransform_ReturnValue = CallFunc_GetInteractableTransform_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BPFL_Interaction.BPFL_Interaction_C.InteractWithInteractable
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  AbilitySystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractionInterface>K2Node_DynamicCast_AsInteraction_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractionInterface>K2Node_DynamicCast_AsInteraction_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInteractionTag_InteractionTag                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInteractionTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInteractionTargetData      K2Node_MakeStruct_InteractionTargetData                          (ContainsInstancedReference)
// struct FGameplayAbilityTargetDataHandleCallFunc_TargetDataFromInteractionData_ReturnValue               (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)

void UBPFL_Interaction_C::InteractWithInteractable(class UObject* Interactable, class APawn* Pawn, const struct FInteractionData& InteractionData, class UObject* __WorldContext, class AActor* Target, class UNWXAbilitySystemComponent* AbilitySystem, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_GetInteractionTag_InteractionTag, bool CallFunc_GetInteractionTag_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, const struct FInteractionTargetData& K2Node_MakeStruct_InteractionTargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_TargetDataFromInteractionData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "InteractWithInteractable");

	Params::UBPFL_Interaction_C_InteractWithInteractable_Params Parms{};

	Parms.Interactable = Interactable;
	Parms.Pawn = Pawn;
	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.Target = Target;
	Parms.AbilitySystem = AbilitySystem;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteraction_Interface = K2Node_DynamicCast_AsInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInteraction_Interface_1 = K2Node_DynamicCast_AsInteraction_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInteractionTag_InteractionTag = CallFunc_GetInteractionTag_InteractionTag;
	Parms.CallFunc_GetInteractionTag_ReturnValue = CallFunc_GetInteractionTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_InteractionTargetData = K2Node_MakeStruct_InteractionTargetData;
	Parms.CallFunc_TargetDataFromInteractionData_ReturnValue = CallFunc_TargetDataFromInteractionData_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Interaction.BPFL_Interaction_C.NotEqual
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInteractionData            A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FInteractionData            B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               NotEqual                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Equal_IsEqual                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Interaction_C::NotEqual(struct FInteractionData& A, struct FInteractionData& B, class UObject* __WorldContext, bool* NotEqual, bool CallFunc_Equal_IsEqual, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "NotEqual");

	Params::UBPFL_Interaction_C_NotEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Equal_IsEqual = CallFunc_Equal_IsEqual;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotEqual != nullptr)
		*NotEqual = Parms.NotEqual;

}


// Function BPFL_Interaction.BPFL_Interaction_C.Equal
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInteractionData            A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FInteractionData            B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEqual                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Interaction_C::Equal(struct FInteractionData& A, struct FInteractionData& B, class UObject* __WorldContext, bool* IsEqual, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Interaction_C", "Equal");

	Params::UBPFL_Interaction_C_Equal_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEqual != nullptr)
		*IsEqual = Parms.IsEqual;

}

}


