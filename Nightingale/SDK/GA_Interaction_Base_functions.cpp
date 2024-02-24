#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_Base.GA_Interaction_Base_C
// (None)

class UClass* UGA_Interaction_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_Base_C");

	return Clss;
}


// GA_Interaction_Base_C GA_Interaction_Base.Default__GA_Interaction_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_Base_C* UGA_Interaction_Base_C::GetDefaultObj()
{
	static class UGA_Interaction_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_Base_C*>(UGA_Interaction_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_Base.GA_Interaction_Base_C.AuthorityLogUnableToValidateInteraction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      InteractionLocationText                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Vector3fToString_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_VectorToText_ReturnValue                           (None)
// class FString                      CallFunc_GetPlayerNameFromPawn_PlayerName                        (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_Conv_Vector3fToString_InVec_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::AuthorityLogUnableToValidateInteraction(class UObject* Interactable, const class FString& InteractionLocationText, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_Vector3fToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_VectorToText_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FVector3f& CallFunc_Conv_Vector3fToString_InVec_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "AuthorityLogUnableToValidateInteraction");

	Params::UGA_Interaction_Base_C_AuthorityLogUnableToValidateInteraction_Params Parms{};

	Parms.Interactable = Interactable;
	Parms.InteractionLocationText = InteractionLocationText;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_Vector3fToString_ReturnValue = CallFunc_Conv_Vector3fToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_VectorToText_ReturnValue = CallFunc_Conv_VectorToText_ReturnValue;
	Parms.CallFunc_GetPlayerNameFromPawn_PlayerName = CallFunc_GetPlayerNameFromPawn_PlayerName;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info_1 = K2Node_DynamicCast_AsBPI_Player_Account_Info_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_Vector3fToString_InVec_ImplicitCast = CallFunc_Conv_Vector3fToString_InVec_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.GetInteractableTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetInteractableTransform_Transform                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::GetInteractableTransform(struct FTransform* Transform, class UObject* CallFunc_GetInteractable_Interactable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetInteractableTransform_Transform, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "GetInteractableTransform");

	Params::UGA_Interaction_Base_C_GetInteractableTransform_Params Parms{};

	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetInteractableTransform_Transform = CallFunc_GetInteractableTransform_Transform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.IsInteractionInRange
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxInteractionSqrDist                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Interactable                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetInteractableTransform_Transform                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetInteractableTransform_Transform_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureMeshInfoInterface>K2Node_DynamicCast_AsStructure_Mesh_Info_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxLocal                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MinWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshMinAndMax_MaxWorld                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_MakeBox_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GetDistanceFromPointToBox_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::IsInteractionInRange(bool* bSuccess, double MaxInteractionSqrDist, class UObject* Interactable, const struct FTransform& CallFunc_GetInteractableTransform_Transform, const struct FTransform& CallFunc_GetInteractableTransform_Transform_1, class APawn* CallFunc_GetPawn_Pawn, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double K2Node_MathExpression_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetInteractable_Interactable, const struct FVector& CallFunc_GetMeshMinAndMax_MinLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MaxLocal, const struct FVector& CallFunc_GetMeshMinAndMax_MinWorld, const struct FVector& CallFunc_GetMeshMinAndMax_MaxWorld, const struct FBox& CallFunc_MakeBox_ReturnValue, double CallFunc_GetDistanceFromPointToBox_Distance, class APawn* CallFunc_GetPawn_Pawn_1, double CallFunc_Square_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_DistanceSquared_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "IsInteractionInRange");

	Params::UGA_Interaction_Base_C_IsInteractionInRange_Params Parms{};

	Parms.MaxInteractionSqrDist = MaxInteractionSqrDist;
	Parms.Interactable = Interactable;
	Parms.CallFunc_GetInteractableTransform_Transform = CallFunc_GetInteractableTransform_Transform;
	Parms.CallFunc_GetInteractableTransform_Transform_1 = CallFunc_GetInteractableTransform_Transform_1;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Mesh_Info_Interface = K2Node_DynamicCast_AsStructure_Mesh_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_GetMeshMinAndMax_MinLocal = CallFunc_GetMeshMinAndMax_MinLocal;
	Parms.CallFunc_GetMeshMinAndMax_MaxLocal = CallFunc_GetMeshMinAndMax_MaxLocal;
	Parms.CallFunc_GetMeshMinAndMax_MinWorld = CallFunc_GetMeshMinAndMax_MinWorld;
	Parms.CallFunc_GetMeshMinAndMax_MaxWorld = CallFunc_GetMeshMinAndMax_MaxWorld;
	Parms.CallFunc_MakeBox_ReturnValue = CallFunc_MakeBox_ReturnValue;
	Parms.CallFunc_GetDistanceFromPointToBox_Distance = CallFunc_GetDistanceFromPointToBox_Distance;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ValidateInteraction
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Interactable                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Interactable_C>K2Node_DynamicCast_AsBPI_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionInRange_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAnyDeathState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerNameFromPawn_PlayerName                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ValidateInteraction(bool* bSuccess, class UObject* Interactable, class UObject* CallFunc_GetInteractable_Interactable, bool CallFunc_K2_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_HasAuthority_ReturnValue_1, bool CallFunc_CanInteractWithActor_InteractAvailable, class APawn* CallFunc_GetPawn_Pawn, bool CallFunc_IsInteractionInRange_bSuccess, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ValidateInteraction");

	Params::UGA_Interaction_Base_C_ValidateInteraction_Params Parms{};

	Parms.Interactable = Interactable;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Interactable = K2Node_DynamicCast_AsBPI_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_1 = CallFunc_K2_HasAuthority_ReturnValue_1;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_IsInteractionInRange_bSuccess = CallFunc_IsInteractionInRange_bSuccess;
	Parms.CallFunc_IsInAnyDeathState_ReturnValue = CallFunc_IsInAnyDeathState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_2 = CallFunc_K2_HasAuthority_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info_1 = K2Node_DynamicCast_AsBPI_Player_Account_Info_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerNameFromPawn_PlayerName = CallFunc_GetPlayerNameFromPawn_PlayerName;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.OnInteractionExecuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn*                       InstigatorPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::OnInteractionExecuted(const struct FGameplayTagContainer& InteractionTags, class APawn* InstigatorPawn, class UObject* CallFunc_GetInteractable_Interactable, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPawn_Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "OnInteractionExecuted");

	Params::UGA_Interaction_Base_C_OnInteractionExecuted_Params Parms{};

	Parms.InteractionTags = InteractionTags;
	Parms.InstigatorPawn = InstigatorPawn;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ObtainVariablesPawnOwner_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::PopulateVariables(bool* bSuccess, bool CallFunc_ObtainVariablesPawnOwner_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "PopulateVariables");

	Params::UGA_Interaction_Base_C_PopulateVariables_Params Parms{};

	Parms.CallFunc_ObtainVariablesPawnOwner_bSuccess = CallFunc_ObtainVariablesPawnOwner_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ExecuteInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)

void UGA_Interaction_Base_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ExecuteInteraction");

	Params::UGA_Interaction_Base_C_ExecuteInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.GetInstigatingActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatingActor                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::GetInstigatingActor(class AActor** InstigatingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "GetInstigatingActor");

	Params::UGA_Interaction_Base_C_GetInstigatingActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InstigatingActor != nullptr)
		*InstigatingActor = Parms.InstigatingActor;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.GetTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::GetTargetActor(class AActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "GetTargetActor");

	Params::UGA_Interaction_Base_C_GetTargetActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadItemReference
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          Value                                                            (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          LocalValue                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue         (ZeroConstructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_MakeStruct_ItemDataReference                              (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayloadItemReference(bool* bSuccess, struct FItemDataReference* Value, const struct FItemDataReference& LocalValue, int32 Temp_int_Variable, const struct FSoftObjectPath& CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue, const struct FItemDataReference& K2Node_MakeStruct_ItemDataReference, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadItemReference");

	Params::UGA_Interaction_Base_C_ParsePayloadItemReference_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue = CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue;
	Parms.K2Node_MakeStruct_ItemDataReference = K2Node_MakeStruct_ItemDataReference;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadGameplayTagContainer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Value                                                            (Parm, OutParm)
// struct FGameplayTagContainer       LocalValue                                                       (Edit, BlueprintVisible)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameplayTagConatinerFromPayload_Success              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagConatinerFromPayload_GameplayTagContainer (None)

void UGA_Interaction_Base_C::ParsePayloadGameplayTagContainer(bool* bSuccess, struct FGameplayTagContainer* Value, const struct FGameplayTagContainer& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetGameplayTagConatinerFromPayload_Success, const struct FGameplayTagContainer& CallFunc_GetGameplayTagConatinerFromPayload_GameplayTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadGameplayTagContainer");

	Params::UGA_Interaction_Base_C_ParsePayloadGameplayTagContainer_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameplayTagConatinerFromPayload_Success = CallFunc_GetGameplayTagConatinerFromPayload_Success;
	Parms.CallFunc_GetGameplayTagConatinerFromPayload_GameplayTagContainer = CallFunc_GetGameplayTagConatinerFromPayload_GameplayTagContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadGuid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetGuidFromAbilityPayload_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasGuid_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayloadGuid(bool* bSuccess, struct FGuid* Value, const struct FGuid& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetGuidFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadGuid");

	Params::UGA_Interaction_Base_C_ParsePayloadGuid_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGuidFromAbilityPayload_ReturnValue = CallFunc_GetGuidFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasGuid_ReturnValue = CallFunc_AbilityPayloadHasGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringFromAbilityPayload_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasString_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayloadString(bool* bSuccess, class FString* Value, const class FString& LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetStringFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadString");

	Params::UGA_Interaction_Base_C_ParsePayloadString_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStringFromAbilityPayload_ReturnValue = CallFunc_GetStringFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasString_ReturnValue = CallFunc_AbilityPayloadHasString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIntFromPayload_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntFromPayload_Integer                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayloadInt(bool* bSuccess, int32* Value, int32 LocalValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetIntFromPayload_Success, int32 CallFunc_GetIntFromPayload_Integer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadInt");

	Params::UGA_Interaction_Base_C_ParsePayloadInt_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIntFromPayload_Success = CallFunc_GetIntFromPayload_Success;
	Parms.CallFunc_GetIntFromPayload_Integer = CallFunc_GetIntFromPayload_Integer;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayloadBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bValue                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLocalValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolFromAbilityPayload_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayloadBool(bool* bSuccess, bool* bValue, bool bLocalValue, int32 Temp_int_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayloadBool");

	Params::UGA_Interaction_Base_C_ParsePayloadBool_Params Parms{};

	Parms.bLocalValue = bLocalValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBoolFromAbilityPayload_ReturnValue = CallFunc_GetBoolFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasBool_ReturnValue = CallFunc_AbilityPayloadHasBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (bValue != nullptr)
		*bValue = Parms.bValue;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.GetPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::GetPawn(class APawn** Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "GetPawn");

	Params::UGA_Interaction_Base_C_GetPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Pawn != nullptr)
		*Pawn = Parms.Pawn;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.SendInteractionTelemetryEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::SendInteractionTelemetryEvent(const class FString& EventName, class APawn* CallFunc_GetPawn_Pawn, class UObject* CallFunc_GetInteractable_Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "SendInteractionTelemetryEvent");

	Params::UGA_Interaction_Base_C_SendInteractionTelemetryEvent_Params Parms{};

	Parms.EventName = EventName;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.GetInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Interactable                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     InteractableObj                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractableObjectFromInteractionData_ReturnValue    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::GetInteractable(class UObject** Interactable, class UObject* InteractableObj, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "GetInteractable");

	Params::UGA_Interaction_Base_C_GetInteractable_Params Parms{};

	Parms.InteractableObj = InteractableObj;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.CallFunc_GetInteractableObjectFromInteractionData_ReturnValue = CallFunc_GetInteractableObjectFromInteractionData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Interactable != nullptr)
		*Interactable = Parms.Interactable;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ValidatePrimaryActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ExpectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ValidPawn                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ValidatePrimaryActors(class AActor* ExpectedPawn, bool* bSuccess, class APawn** ValidPawn, const class FString& CallFunc_GetDisplayName_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ValidatePrimaryActors");

	Params::UGA_Interaction_Base_C_ValidatePrimaryActors_Params Parms{};

	Parms.ExpectedPawn = ExpectedPawn;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ValidPawn != nullptr)
		*ValidPawn = Parms.ValidPawn;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ObtainVariablesPawnOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidatePrimaryActors_bSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_ValidatePrimaryActors_ValidPawn                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ObtainVariablesPawnOwner(bool* bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_ValidatePrimaryActors_bSuccess, class APawn* CallFunc_ValidatePrimaryActors_ValidPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ObtainVariablesPawnOwner");

	Params::UGA_Interaction_Base_C_ObtainVariablesPawnOwner_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_ValidatePrimaryActors_bSuccess = CallFunc_ValidatePrimaryActors_bSuccess;
	Parms.CallFunc_ValidatePrimaryActors_ValidPawn = CallFunc_ValidatePrimaryActors_ValidPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ParsePayload
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          LocalEventData                                                   (Edit, BlueprintVisible)
// struct FGameplayTag                EventTag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FInteractionTargetData      CallFunc_GetInteractionData_OutData                              (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ParsePayload(const struct FGameplayEventData& EventData, bool* bSuccess, const struct FGameplayEventData& LocalEventData, const struct FGameplayTag& EventTag, const struct FInteractionTargetData& CallFunc_GetInteractionData_OutData, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ParsePayload");

	Params::UGA_Interaction_Base_C_ParsePayload_Params Parms{};

	Parms.EventData = EventData;
	Parms.LocalEventData = LocalEventData;
	Parms.EventTag = EventTag;
	Parms.CallFunc_GetInteractionData_OutData = CallFunc_GetInteractionData_OutData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Interaction_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Interaction_Base_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interaction_Base.GA_Interaction_Base_C.ExecuteUbergraph_GA_Interaction_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_ParsePayload_bSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateInteraction_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Base_C::ExecuteUbergraph_GA_Interaction_Base(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_PopulateVariables_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ParsePayload_bSuccess, bool CallFunc_ValidateInteraction_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Base_C", "ExecuteUbergraph_GA_Interaction_Base");

	Params::UGA_Interaction_Base_C_ExecuteUbergraph_GA_Interaction_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_ParsePayload_bSuccess = CallFunc_ParsePayload_bSuccess;
	Parms.CallFunc_ValidateInteraction_bSuccess = CallFunc_ValidateInteraction_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


