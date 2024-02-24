#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Structures_Interaction.BPFL_Structures_Interaction_C
// (None)

class UClass* UBPFL_Structures_Interaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Structures_Interaction_C");

	return Clss;
}


// BPFL_Structures_Interaction_C BPFL_Structures_Interaction.Default__BPFL_Structures_Interaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Structures_Interaction_C* UBPFL_Structures_Interaction_C::GetDefaultObj()
{
	static class UBPFL_Structures_Interaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Structures_Interaction_C*>(UBPFL_Structures_Interaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.IsStructureInteractionDisabled
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDisabled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionMessage                                               (Parm, OutParm)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*LInteractionData                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureData_Interaction  CurrentInteraction                                               (Edit, BlueprintVisible)
// bool                               IsInteractionDisabled                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisabledMessage                                                  (Edit, BlueprintVisible)
// class APawn*                       Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionObject_C*CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_IsInteractionDisabled_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionDisabled_IsDisabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsInteractionDisabled_DisabledText                      (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllMeshInteractions_Available_Interactions           (ReferenceParm)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExecuteStructureInteraction_bCanInteract             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanExecuteStructureInteraction_InteractionText          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::IsStructureInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, const struct FInteractionData& InteractionData, class UObject* __WorldContext, bool* IsDisabled, class FText* InteractionMessage, class UStructureInteraction_PostConstructionInteraction_DataAsset* LInteractionData, const struct FStructureData_Interaction& CurrentInteraction, bool IsInteractionDisabled, class FText DisabledMessage, class APawn* Pawn, class UObject* LStructure, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_IsInteractionDisabled_self_CastInput, bool CallFunc_IsInteractionDisabled_IsDisabled, class FText CallFunc_IsInteractionDisabled_DisabledText, bool CallFunc_IsValid_ReturnValue_3, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllMeshInteractions_Available_Interactions, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, bool CallFunc_CanExecuteStructureInteraction_bCanInteract, class FText CallFunc_CanExecuteStructureInteraction_InteractionText, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "IsStructureInteractionDisabled");

	Params::UBPFL_Structures_Interaction_C_IsStructureInteractionDisabled_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteractionData = LInteractionData;
	Parms.CurrentInteraction = CurrentInteraction;
	Parms.IsInteractionDisabled = IsInteractionDisabled;
	Parms.DisabledMessage = DisabledMessage;
	Parms.Pawn = Pawn;
	Parms.LStructure = LStructure;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object = CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsInteractionDisabled_self_CastInput = CallFunc_IsInteractionDisabled_self_CastInput;
	Parms.CallFunc_IsInteractionDisabled_IsDisabled = CallFunc_IsInteractionDisabled_IsDisabled;
	Parms.CallFunc_IsInteractionDisabled_DisabledText = CallFunc_IsInteractionDisabled_DisabledText;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllMeshInteractions_Available_Interactions = CallFunc_GetAllMeshInteractions_Available_Interactions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CanExecuteStructureInteraction_bCanInteract = CallFunc_CanExecuteStructureInteraction_bCanInteract;
	Parms.CallFunc_CanExecuteStructureInteraction_InteractionText = CallFunc_CanExecuteStructureInteraction_InteractionText;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisabled != nullptr)
		*IsDisabled = Parms.IsDisabled;

	if (InteractionMessage != nullptr)
		*InteractionMessage = Parms.InteractionMessage;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.Add Mesh Post Construction Interactions
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>StartingInteractions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractionData            Interaction_Data                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>Updated_Interactions                                             (Parm, OutParm)
// TArray<TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>>LInteractions_Soft_Data_Assets                                   (Edit, BlueprintVisible)
// TMap<enum class EStructureInteractionType, struct FStructureData_Interaction>LInteractions                                                    (Edit, BlueprintVisible)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LInteractions_Data_Assets                                        (Edit, BlueprintVisible)
// enum class EStructureInteractionTypeMeshMapping                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*LCurrentInteraction                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EStructureInteractionType>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureInteractionTypeCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureTraitInterface>K2Node_DynamicCast_AsStructure_Trait_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitComponent*    CallFunc_GetStructureTraitComponent_ReturnValue                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddResourcesInteractions_UpdatedInteractions            (ReferenceParm)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPostConstructionInteractionData_IsValid              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePostConstructionInteractionData*CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData_Interaction  CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::Add_Mesh_Post_Construction_Interactions(class UObject* Structure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& StartingInteractions, const struct FInteractionData& Interaction_Data, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* Updated_Interactions, const TArray<TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>>& LInteractions_Soft_Data_Assets, TMap<enum class EStructureInteractionType, struct FStructureData_Interaction> LInteractions, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LInteractions_Data_Assets, enum class EStructureInteractionType MeshMapping, class UStructureInteraction_PostConstructionInteraction_DataAsset* LCurrentInteraction, class UObject* LStructure, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<enum class EStructureInteractionType>& CallFunc_Map_Keys_Keys, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EStructureInteractionType CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UStructureTraitComponent* CallFunc_GetStructureTraitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddResourcesInteractions_UpdatedInteractions, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetPostConstructionInteractionData_IsValid, class UStructurePostConstructionInteractionData* CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData, class FName CallFunc_GetEnumeratorName_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue, TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset> CallFunc_Array_Get_Item_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UStructureInteraction_PostConstructionInteraction_DataAsset* K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_1, const struct FStructureData_Interaction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "Add Mesh Post Construction Interactions");

	Params::UBPFL_Structures_Interaction_C_Add_Mesh_Post_Construction_Interactions_Params Parms{};

	Parms.Structure = Structure;
	Parms.StartingInteractions = StartingInteractions;
	Parms.Interaction_Data = Interaction_Data;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteractions_Soft_Data_Assets = LInteractions_Soft_Data_Assets;
	Parms.LInteractions = LInteractions;
	Parms.LInteractions_Data_Assets = LInteractions_Data_Assets;
	Parms.MeshMapping = MeshMapping;
	Parms.LCurrentInteraction = LCurrentInteraction;
	Parms.LStructure = LStructure;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Trait_Interface = K2Node_DynamicCast_AsStructure_Trait_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetStructureTraitComponent_ReturnValue = CallFunc_GetStructureTraitComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddResourcesInteractions_UpdatedInteractions = CallFunc_AddResourcesInteractions_UpdatedInteractions;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPostConstructionInteractionData_IsValid = CallFunc_GetPostConstructionInteractionData_IsValid;
	Parms.CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData = CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset = K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Interactions != nullptr)
		*Updated_Interactions = std::move(Parms.Updated_Interactions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.GetActiveMeshInteractions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Interacting_Pawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            Interaction_Data                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>Mesh_Interactions                                                (Parm, OutParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LMeshInteractions                                                (Edit, BlueprintVisible)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*LCurrent_Interaction                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LInteractingPawn                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllMeshInteractions_Available_Interactions           (ReferenceParm)

void UBPFL_Structures_Interaction_C::GetActiveMeshInteractions(class UObject* Structure, class APawn* Interacting_Pawn, const struct FInteractionData& Interaction_Data, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* Mesh_Interactions, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LMeshInteractions, class UStructureInteraction_PostConstructionInteraction_DataAsset* LCurrent_Interaction, class APawn* LInteractingPawn, class UObject* LStructure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllMeshInteractions_Available_Interactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "GetActiveMeshInteractions");

	Params::UBPFL_Structures_Interaction_C_GetActiveMeshInteractions_Params Parms{};

	Parms.Structure = Structure;
	Parms.Interacting_Pawn = Interacting_Pawn;
	Parms.Interaction_Data = Interaction_Data;
	Parms.__WorldContext = __WorldContext;
	Parms.LMeshInteractions = LMeshInteractions;
	Parms.LCurrent_Interaction = LCurrent_Interaction;
	Parms.LInteractingPawn = LInteractingPawn;
	Parms.LStructure = LStructure;
	Parms.CallFunc_GetAllMeshInteractions_Available_Interactions = CallFunc_GetAllMeshInteractions_Available_Interactions;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh_Interactions != nullptr)
		*Mesh_Interactions = std::move(Parms.Mesh_Interactions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.GetAllMeshInteractions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            Interaction_Data                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>Available_Interactions                                           (Parm, OutParm)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LInteractions_Data_Assets                                        (Edit, BlueprintVisible)
// TArray<TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>>LInteractions_Soft_Data_Assets                                   (Edit, BlueprintVisible)
// enum class EStructureInteractionTypeMeshMapping                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EStructureInteractionType, struct FStructureData_Interaction>LInteractions                                                    (Edit, BlueprintVisible)
// TMap<enum class EStructureInteractionType, struct FStructureData_Interaction>K2Node_MakeVariable_MakeVariableOutput                           (None)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_Add_Mesh_Post_Construction_Interactions_Updated_Interactions(ReferenceParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddResourcesInteractions_UpdatedInteractions            (ReferenceParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddEditInteractions_AvailableInteractions               (ReferenceParm)

void UBPFL_Structures_Interaction_C::GetAllMeshInteractions(class UObject* Structure, const struct FInteractionData& Interaction_Data, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* Available_Interactions, class UObject* LStructure, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LInteractions_Data_Assets, const TArray<TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>>& LInteractions_Soft_Data_Assets, enum class EStructureInteractionType MeshMapping, TMap<enum class EStructureInteractionType, struct FStructureData_Interaction> LInteractions, TMap<enum class EStructureInteractionType, struct FStructureData_Interaction> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsInteractionEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_Add_Mesh_Post_Construction_Interactions_Updated_Interactions, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddResourcesInteractions_UpdatedInteractions, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddEditInteractions_AvailableInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "GetAllMeshInteractions");

	Params::UBPFL_Structures_Interaction_C_GetAllMeshInteractions_Params Parms{};

	Parms.Structure = Structure;
	Parms.Interaction_Data = Interaction_Data;
	Parms.__WorldContext = __WorldContext;
	Parms.LStructure = LStructure;
	Parms.LInteractions_Data_Assets = LInteractions_Data_Assets;
	Parms.LInteractions_Soft_Data_Assets = LInteractions_Soft_Data_Assets;
	Parms.MeshMapping = MeshMapping;
	Parms.LInteractions = LInteractions;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_Mesh_Post_Construction_Interactions_Updated_Interactions = CallFunc_Add_Mesh_Post_Construction_Interactions_Updated_Interactions;
	Parms.CallFunc_AddResourcesInteractions_UpdatedInteractions = CallFunc_AddResourcesInteractions_UpdatedInteractions;
	Parms.CallFunc_AddEditInteractions_AvailableInteractions = CallFunc_AddEditInteractions_AvailableInteractions;

	UObject::ProcessEvent(Func, &Parms);

	if (Available_Interactions != nullptr)
		*Available_Interactions = std::move(Parms.Available_Interactions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.AddEditInteractions
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>StartingInteractions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>AvailableInteractions                                            (Parm, OutParm)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailableInteractions                                           (Edit, BlueprintVisible)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable_2                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable_3                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::AddEditInteractions(class UObject* Structure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& StartingInteractions, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* AvailableInteractions, class UObject* LStructure, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable_1, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable_2, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable_3, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "AddEditInteractions");

	Params::UBPFL_Structures_Interaction_C_AddEditInteractions_Params Parms{};

	Parms.Structure = Structure;
	Parms.StartingInteractions = StartingInteractions;
	Parms.__WorldContext = __WorldContext;
	Parms.LStructure = LStructure;
	Parms.LAvailableInteractions = LAvailableInteractions;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableInteractions != nullptr)
		*AvailableInteractions = std::move(Parms.AvailableInteractions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.Add Structure Post Construction Interactions
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>StartingInteractions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>UpdatedInteractions                                              (Parm, OutParm)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*LCurrentInteraction                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailableInteractions                                           (Edit, BlueprintVisible)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddResourcesInteractions_UpdatedInteractions            (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPostConstructionInteractionData_IsValid              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructurePostConstructionInteractionData*CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureData_Interaction>CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData_Interaction  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::Add_Structure_Post_Construction_Interactions(class UObject* Structure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& StartingInteractions, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* UpdatedInteractions, class UStructureInteraction_PostConstructionInteraction_DataAsset* LCurrentInteraction, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, class UObject* LStructure, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddResourcesInteractions_UpdatedInteractions, int32 CallFunc_Add_IntInt_ReturnValue_1, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetPostConstructionInteractionData_IsValid, class UStructurePostConstructionInteractionData* CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData, TArray<struct FStructureData_Interaction>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const struct FStructureData_Interaction& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class UStructureInteraction_PostConstructionInteraction_DataAsset> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UStructureInteraction_PostConstructionInteraction_DataAsset* K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "Add Structure Post Construction Interactions");

	Params::UBPFL_Structures_Interaction_C_Add_Structure_Post_Construction_Interactions_Params Parms{};

	Parms.Structure = Structure;
	Parms.StartingInteractions = StartingInteractions;
	Parms.__WorldContext = __WorldContext;
	Parms.LCurrentInteraction = LCurrentInteraction;
	Parms.LAvailableInteractions = LAvailableInteractions;
	Parms.LStructure = LStructure;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_AddResourcesInteractions_UpdatedInteractions = CallFunc_AddResourcesInteractions_UpdatedInteractions;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPostConstructionInteractionData_IsValid = CallFunc_GetPostConstructionInteractionData_IsValid;
	Parms.CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData = CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset = K2Node_DynamicCast_AsStructure_Interaction_Post_Construction_Interaction_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

	if (UpdatedInteractions != nullptr)
		*UpdatedInteractions = std::move(Parms.UpdatedInteractions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.AddResourcesInteractions
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>StartingInteractions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>UpdatedInteractions                                              (Parm, OutParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailableInteractions                                           (Edit, BlueprintVisible)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::AddResourcesInteractions(TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& StartingInteractions, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* UpdatedInteractions, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable, class UStructureInteraction_PostConstructionInteraction_DataAsset* Temp_object_Variable_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "AddResourcesInteractions");

	Params::UBPFL_Structures_Interaction_C_AddResourcesInteractions_Params Parms{};

	Parms.StartingInteractions = StartingInteractions;
	Parms.__WorldContext = __WorldContext;
	Parms.LAvailableInteractions = LAvailableInteractions;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UpdatedInteractions != nullptr)
		*UpdatedInteractions = std::move(Parms.UpdatedInteractions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.HasAddResourcesInteractionActive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>Temp_object_Variable                                             (ReferenceParm)
// TScriptInterface<class ISchematicInfoInterface>K2Node_DynamicCast_AsSchematic_Info_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetStructureInteractions_ReturnValue                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Structures_Interaction_C::HasAddResourcesInteractionActive(class UObject* Structure, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& Temp_object_Variable, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetStructureInteractions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "HasAddResourcesInteractionActive");

	Params::UBPFL_Structures_Interaction_C_HasAddResourcesInteractionActive_Params Parms{};

	Parms.Structure = Structure;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsSchematic_Info_Interface = K2Node_DynamicCast_AsSchematic_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureInteractions_ReturnValue = CallFunc_GetStructureInteractions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.GetBPInteractionRequirementObjectFromStructureInteractionData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureInteraction_PostConstructionInteraction_DataAsset*StructureData_Interaction                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionRequirementObject_C*AsBPStructureInteractionRequirementObject                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStructureInteractionRequirementComponent*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UBP_StructureInteractionRequirementObject_C*K2Node_DynamicCast_AsBP_Structure_Interaction_Requirement_Object (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::GetBPInteractionRequirementObjectFromStructureInteractionData(class UStructureInteraction_PostConstructionInteraction_DataAsset*& StructureData_Interaction, class UObject* __WorldContext, class UBP_StructureInteractionRequirementObject_C** AsBPStructureInteractionRequirementObject, class UStructureInteractionRequirementComponent* CallFunc_GetDefaultObject_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UBP_StructureInteractionRequirementObject_C* K2Node_DynamicCast_AsBP_Structure_Interaction_Requirement_Object, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "GetBPInteractionRequirementObjectFromStructureInteractionData");

	Params::UBPFL_Structures_Interaction_C_GetBPInteractionRequirementObjectFromStructureInteractionData_Params Parms{};

	Parms.StructureData_Interaction = StructureData_Interaction;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Interaction_Requirement_Object = K2Node_DynamicCast_AsBP_Structure_Interaction_Requirement_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBPStructureInteractionRequirementObject != nullptr)
		*AsBPStructureInteractionRequirementObject = Parms.AsBPStructureInteractionRequirementObject;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.Get BPInteraction Object from Structure Interaction Data
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStructureInteraction_PostConstructionInteraction_DataAsset*StructureData_Interaction                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureInteractionObject_C*AsBP_Structure_Interaction_Object                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UStructureInteractionComponent*CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UBP_StructureInteractionObject_C*K2Node_DynamicCast_AsBP_Structure_Interaction_Object             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::Get_BPInteraction_Object_from_Structure_Interaction_Data(class UStructureInteraction_PostConstructionInteraction_DataAsset*& StructureData_Interaction, class UObject* __WorldContext, class UBP_StructureInteractionObject_C** AsBP_Structure_Interaction_Object, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class UStructureInteractionComponent* CallFunc_GetDefaultObject_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UBP_StructureInteractionObject_C* K2Node_DynamicCast_AsBP_Structure_Interaction_Object, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "Get BPInteraction Object from Structure Interaction Data");

	Params::UBPFL_Structures_Interaction_C_Get_BPInteraction_Object_from_Structure_Interaction_Data_Params Parms{};

	Parms.StructureData_Interaction = StructureData_Interaction;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Interaction_Object = K2Node_DynamicCast_AsBP_Structure_Interaction_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Structure_Interaction_Object != nullptr)
		*AsBP_Structure_Interaction_Object = Parms.AsBP_Structure_Interaction_Object;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.GetAllStructureInteractions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>AvailableInteractions                                            (Parm, OutParm)
// bool                               ShouldAddStructureInteractions                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData_Interaction  LCurrentInteraction                                              (Edit, BlueprintVisible)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>LAvailableInteractions                                           (Edit, BlueprintVisible)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddEditInteractions_AvailableInteractions               (ReferenceParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_Add_Structure_Post_Construction_Interactions_UpdatedInteractions(ReferenceParm)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_AddResourcesInteractions_UpdatedInteractions            (ReferenceParm)

void UBPFL_Structures_Interaction_C::GetAllStructureInteractions(class UObject* Structure, class UObject* __WorldContext, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>* AvailableInteractions, bool ShouldAddStructureInteractions, const struct FStructureData_Interaction& LCurrentInteraction, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, class UObject* LStructure, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionEnabled_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddEditInteractions_AvailableInteractions, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_Add_Structure_Post_Construction_Interactions_UpdatedInteractions, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_AddResourcesInteractions_UpdatedInteractions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "GetAllStructureInteractions");

	Params::UBPFL_Structures_Interaction_C_GetAllStructureInteractions_Params Parms{};

	Parms.Structure = Structure;
	Parms.__WorldContext = __WorldContext;
	Parms.ShouldAddStructureInteractions = ShouldAddStructureInteractions;
	Parms.LCurrentInteraction = LCurrentInteraction;
	Parms.LAvailableInteractions = LAvailableInteractions;
	Parms.LStructure = LStructure;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_AddEditInteractions_AvailableInteractions = CallFunc_AddEditInteractions_AvailableInteractions;
	Parms.CallFunc_Add_Structure_Post_Construction_Interactions_UpdatedInteractions = CallFunc_Add_Structure_Post_Construction_Interactions_UpdatedInteractions;
	Parms.CallFunc_AddResourcesInteractions_UpdatedInteractions = CallFunc_AddResourcesInteractions_UpdatedInteractions;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableInteractions != nullptr)
		*AvailableInteractions = std::move(Parms.AvailableInteractions);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.CanExecuteStructureInteraction
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bCanInteract                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionText                                                  (Parm, OutParm)
// class UBP_StructureInteractionObject_C*CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureInteraction_C>CallFunc_CanInteract_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_CanInteract                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanInteract_InteractionText                             (None)

void UBPFL_Structures_Interaction_C::CanExecuteStructureInteraction(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset*& InteractionData, class UObject* __WorldContext, bool* bCanInteract, class FText* InteractionText, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_CanInteract, class FText CallFunc_CanInteract_InteractionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "CanExecuteStructureInteraction");

	Params::UBPFL_Structures_Interaction_C_CanExecuteStructureInteraction_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object = CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object;
	Parms.CallFunc_CanInteract_self_CastInput = CallFunc_CanInteract_self_CastInput;
	Parms.CallFunc_CanInteract_CanInteract = CallFunc_CanInteract_CanInteract;
	Parms.CallFunc_CanInteract_InteractionText = CallFunc_CanInteract_InteractionText;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;

	if (InteractionText != nullptr)
		*InteractionText = Parms.InteractionText;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.CanInteractWithStructure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractionMessage                                               (Parm, OutParm)
// struct FStructureData_Interaction  LCurrentInteraction                                              (Edit, BlueprintVisible)
// bool                               LCanInteract                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LInteractionMessage                                              (Edit, BlueprintVisible)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>CallFunc_GetAllMeshInteractions_Available_Interactions           (ReferenceParm)
// class UStructureInteraction_PostConstructionInteraction_DataAsset*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExecuteStructureInteraction_bCanInteract             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CanExecuteStructureInteraction_InteractionText          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::CanInteractWithStructure(class UObject* Structure, class APawn* InteractingPawn, const struct FInteractionData& InteractionData, class UObject* __WorldContext, bool* CanInteract, class FText* InteractionMessage, const struct FStructureData_Interaction& LCurrentInteraction, bool LCanInteract, class FText LInteractionMessage, class APawn* LPawn, class UObject* LStructure, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsInteractionEnabled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllMeshInteractions_Available_Interactions, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanExecuteStructureInteraction_bCanInteract, class FText CallFunc_CanExecuteStructureInteraction_InteractionText, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "CanInteractWithStructure");

	Params::UBPFL_Structures_Interaction_C_CanInteractWithStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.LCurrentInteraction = LCurrentInteraction;
	Parms.LCanInteract = LCanInteract;
	Parms.LInteractionMessage = LInteractionMessage;
	Parms.LPawn = LPawn;
	Parms.LStructure = LStructure;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllMeshInteractions_Available_Interactions = CallFunc_GetAllMeshInteractions_Available_Interactions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CanExecuteStructureInteraction_bCanInteract = CallFunc_CanExecuteStructureInteraction_bCanInteract;
	Parms.CallFunc_CanExecuteStructureInteraction_InteractionText = CallFunc_CanExecuteStructureInteraction_InteractionText;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

	if (InteractionMessage != nullptr)
		*InteractionMessage = Parms.InteractionMessage;

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.AppendInteractionTypeToPayload
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TScriptInterface<class IBPI_StructureInteraction_C>InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleOutPayload                                                       (Parm, OutParm)
// class FString                      InteractionType                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleLocalPayload                                                     (Edit, BlueprintVisible)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleCallFunc_AbilityPayloadFromString_ReturnValue                    (None)
// struct FGameplayAbilityPayloadHandleCallFunc_AppendPayloadHandle_ReturnValue                         (None)

void UBPFL_Structures_Interaction_C::AppendInteractionTypeToPayload(const struct FGameplayAbilityPayloadHandle& Payload, TScriptInterface<class IBPI_StructureInteraction_C> InteractionData, class UObject* __WorldContext, struct FGameplayAbilityPayloadHandle* OutPayload, const class FString& InteractionType, const struct FGameplayAbilityPayloadHandle& LocalPayload, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromString_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "AppendInteractionTypeToPayload");

	Params::UBPFL_Structures_Interaction_C_AppendInteractionTypeToPayload_Params Parms{};

	Parms.Payload = Payload;
	Parms.InteractionData = InteractionData;
	Parms.__WorldContext = __WorldContext;
	Parms.InteractionType = InteractionType;
	Parms.LocalPayload = LocalPayload;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_AbilityPayloadFromString_ReturnValue = CallFunc_AbilityPayloadFromString_ReturnValue;
	Parms.CallFunc_AppendPayloadHandle_ReturnValue = CallFunc_AppendPayloadHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPayload != nullptr)
		*OutPayload = std::move(Parms.OutPayload);

}


// Function BPFL_Structures_Interaction.BPFL_Structures_Interaction_C.HasAvailableResourcesRemaining
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     AvailableResources                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasAvailableResources                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Interaction_C::HasAvailableResourcesRemaining(TArray<struct FInventoryEntry>& AvailableResources, class UObject* __WorldContext, bool* HasAvailableResources, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Interaction_C", "HasAvailableResourcesRemaining");

	Params::UBPFL_Structures_Interaction_C_HasAvailableResourcesRemaining_Params Parms{};

	Parms.AvailableResources = AvailableResources;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAvailableResources != nullptr)
		*HasAvailableResources = Parms.HasAvailableResources;

}

}


