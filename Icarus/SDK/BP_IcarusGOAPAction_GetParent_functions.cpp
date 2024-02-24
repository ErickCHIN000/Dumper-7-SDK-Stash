#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_GetParent.BP_IcarusGOAPAction_GetParent_C
// (None)

class UClass* UBP_IcarusGOAPAction_GetParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_GetParent_C");

	return Clss;
}


// BP_IcarusGOAPAction_GetParent_C BP_IcarusGOAPAction_GetParent.Default__BP_IcarusGOAPAction_GetParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_GetParent_C* UBP_IcarusGOAPAction_GetParent_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_GetParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_GetParent_C*>(UBP_IcarusGOAPAction_GetParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_GetParent.BP_IcarusGOAPAction_GetParent_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        ParentCharacterKey                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusTamingComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAITargetable>K2Node_DynamicCast_AsAITargetable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActorAlive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_GetParent_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class FName ParentCharacterKey, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActorAlive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_GetParent_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_GetParent_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.ParentCharacterKey = ParentCharacterKey;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAITargetable = K2Node_DynamicCast_AsAITargetable;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsActorAlive_ReturnValue = CallFunc_IsActorAlive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_GetParent.BP_IcarusGOAPAction_GetParent_C.IsTargetValidParent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPCharacter*     TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidParent                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                ParentCreatureType                                               (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAICreatureType             CallFunc_GetAICreatureTypeStruct_AICreatureType                  (None)
// enum class EValid                  CallFunc_GetAICreatureTypeStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup_1                              (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAICreatureType             CallFunc_GetAICreatureTypeStruct_AICreatureType_1                (None)
// enum class EValid                  CallFunc_GetAICreatureTypeStruct_Paths_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipSwitch                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPAction_GetParent_C::IsTargetValidParent(class AIcarusNPCGOAPCharacter* TargetActor, bool* ValidParent, const struct FGameplayTag& ParentCreatureType, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup_1, enum class EValid CallFunc_GetAISetupStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_MatchesTag_ReturnValue, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType_1, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_GetParent_C", "IsTargetValidParent");

	Params::UBP_IcarusGOAPAction_GetParent_C_IsTargetValidParent_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.ParentCreatureType = ParentCreatureType;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAICreatureTypeStruct_AICreatureType = CallFunc_GetAICreatureTypeStruct_AICreatureType;
	Parms.CallFunc_GetAICreatureTypeStruct_Paths = CallFunc_GetAICreatureTypeStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetAISetupStruct_AISetup_1 = CallFunc_GetAISetupStruct_AISetup_1;
	Parms.CallFunc_GetAISetupStruct_Paths_1 = CallFunc_GetAISetupStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_GetAICreatureTypeStruct_AICreatureType_1 = CallFunc_GetAICreatureTypeStruct_AICreatureType_1;
	Parms.CallFunc_GetAICreatureTypeStruct_Paths_1 = CallFunc_GetAICreatureTypeStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_IsHostileTowards_OutRelationshipSwitch = CallFunc_IsHostileTowards_OutRelationshipSwitch;
	Parms.CallFunc_IsHostileTowards_OutRelationshipType = CallFunc_IsHostileTowards_OutRelationshipType;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidParent != nullptr)
		*ValidParent = Parms.ValidParent;

}


// Function BP_IcarusGOAPAction_GetParent.BP_IcarusGOAPAction_GetParent_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              NearbyNPCs                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// class FName                        ParentCharacterKey                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SearchRadius                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Execute_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAITargetable>K2Node_DynamicCast_AsAITargetable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActorAlive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetValidParent_ValidParent                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusTamingComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AIcarusNPCGOAPCharacter*>CallFunc_GetActorsOfClassInWorld_OutActors                       (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAITargetable>K2Node_DynamicCast_AsAITargetable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActorAlive_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPAction_GetParent_C::Execute(class AIcarusNPCGOAPController* Controller, float Delta, const TArray<class AActor*>& NearbyNPCs, class FName ParentCharacterKey, class APawn* ControlledPawn, float SearchRadius, bool Temp_bool_Variable, bool CallFunc_Execute_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActorAlive_ReturnValue, bool CallFunc_IsTargetValidParent_ValidParent, bool CallFunc_CompleteCurrentAction_ReturnValue, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue_2, bool CallFunc_CompleteCurrentAction_ReturnValue_3, bool Temp_bool_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetActorsOfClassInWorld_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsActorAlive_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_GetParent_C", "Execute");

	Params::UBP_IcarusGOAPAction_GetParent_C_Execute_Params Parms{};

	Parms.Controller = Controller;
	Parms.Delta = Delta;
	Parms.NearbyNPCs = NearbyNPCs;
	Parms.ParentCharacterKey = ParentCharacterKey;
	Parms.ControlledPawn = ControlledPawn;
	Parms.SearchRadius = SearchRadius;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Execute_ReturnValue = CallFunc_Execute_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsAITargetable = K2Node_DynamicCast_AsAITargetable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsActorAlive_ReturnValue = CallFunc_IsActorAlive_ReturnValue;
	Parms.CallFunc_IsTargetValidParent_ValidParent = CallFunc_IsTargetValidParent_ValidParent;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue = CallFunc_CompleteCurrentAction_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue_1 = CallFunc_CompleteCurrentAction_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue_2 = CallFunc_CompleteCurrentAction_ReturnValue_2;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue_3 = CallFunc_CompleteCurrentAction_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetActorsOfClassInWorld_OutActors = CallFunc_GetActorsOfClassInWorld_OutActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsAITargetable_1 = K2Node_DynamicCast_AsAITargetable_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsActorAlive_ReturnValue_1 = CallFunc_IsActorAlive_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


