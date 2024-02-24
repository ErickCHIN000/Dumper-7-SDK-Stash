#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C
// (Actor, PlayerController)

class UClass* ABP_IcarusPlayerControllerSurvival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusPlayerControllerSurvival_C");

	return Clss;
}


// BP_IcarusPlayerControllerSurvival_C BP_IcarusPlayerControllerSurvival.Default__BP_IcarusPlayerControllerSurvival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusPlayerControllerSurvival_C* ABP_IcarusPlayerControllerSurvival_C::GetDefaultObj()
{
	static class ABP_IcarusPlayerControllerSurvival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusPlayerControllerSurvival_C*>(ABP_IcarusPlayerControllerSurvival_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUMG_UserInterface_Base_C*   UserInterface                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::GetUserInterface(class UUMG_UserInterface_Base_C** UserInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetUserInterface");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UserInterface != nullptr)
		*UserInterface = Parms.UserInterface;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CanRespawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRespawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_GetActiveProspectInfo_ReturnValue                       (ConstParm)

void ABP_IcarusPlayerControllerSurvival_C::CanRespawn(bool* CanRespawn, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CanRespawn");

	Params::ABP_IcarusPlayerControllerSurvival_C_CanRespawn_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetActiveProspectInfo_ReturnValue = CallFunc_GetActiveProspectInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanRespawn != nullptr)
		*CanRespawn = Parms.CanRespawn;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ShouldShowChallengePopup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              ProgressAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      DisplayThresholds                                                (Edit, BlueprintVisible)
// float                              PrevProgressPct                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentProgressPct                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentProgressAmount                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemSlotState        CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot   (None)
// bool                               CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FChallenge                  CallFunc_GetChallengesStruct_Challenges                          (None)
// enum class EValid                  CallFunc_GetChallengesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::ShouldShowChallengePopup(const struct FItemData& Item, int32 ProgressAmount, bool* ShouldShow, const TArray<float>& DisplayThresholds, float PrevProgressPct, float CurrentProgressPct, int32 CurrentProgressAmount, int32 Temp_int_Array_Index_Variable, const struct FLivingItemSlotState& CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot, bool CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ShouldShowChallengePopup");

	Params::ABP_IcarusPlayerControllerSurvival_C_ShouldShowChallengePopup_Params Parms{};

	Parms.Item = Item;
	Parms.ProgressAmount = ProgressAmount;
	Parms.DisplayThresholds = DisplayThresholds;
	Parms.PrevProgressPct = PrevProgressPct;
	Parms.CurrentProgressPct = CurrentProgressPct;
	Parms.CurrentProgressAmount = CurrentProgressAmount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot = CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot;
	Parms.CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue = CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue;
	Parms.CallFunc_GetChallengesStruct_Challenges = CallFunc_GetChallengesStruct_Challenges;
	Parms.CallFunc_GetChallengesStruct_Paths = CallFunc_GetChallengesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetDynamicWidgetInventories
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory*>          ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UInventory*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_IcarusLinkedActorPanel_C*K2Node_DynamicCast_AsUMG_Icarus_Linked_Actor_Panel               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetLinkedActorContainerInventory_ContainerInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetLinkedActorInventoryComponent_InventoryComponent     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)

TArray<class UInventory*> ABP_IcarusPlayerControllerSurvival_C::GetDynamicWidgetInventories(TArray<class UInventory*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMG_IcarusLinkedActorPanel_C* K2Node_DynamicCast_AsUMG_Icarus_Linked_Actor_Panel, bool K2Node_DynamicCast_bSuccess, class UInventory* CallFunc_GetLinkedActorContainerInventory_ContainerInventory, class UInventoryComponent* CallFunc_GetLinkedActorInventoryComponent_InventoryComponent, TArray<class UInventory*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class UInventory*>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetDynamicWidgetInventories");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetDynamicWidgetInventories_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Icarus_Linked_Actor_Panel = K2Node_DynamicCast_AsUMG_Icarus_Linked_Actor_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLinkedActorContainerInventory_ContainerInventory = CallFunc_GetLinkedActorContainerInventory_ContainerInventory;
	Parms.CallFunc_GetLinkedActorInventoryComponent_InventoryComponent = CallFunc_GetLinkedActorInventoryComponent_InventoryComponent;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CorpseUnstuck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoMove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CorpseAvailable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MIN_CORPSE_DIST                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DropLocation                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MAX_CORPSE_DIST                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLocationNoZ                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HaveCorpse                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Overflow_Bag_Gravestone_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_Overflow_Bag_Gravestone_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Gravestone_C*>    CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class ABP_Gravestone_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::CorpseUnstuck(bool DoMove, bool* CorpseAvailable, float MIN_CORPSE_DIST, const struct FVector& DropLocation, float MAX_CORPSE_DIST, const struct FVector& PlayerLocationNoZ, bool HaveCorpse, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class ABP_Overflow_Bag_Gravestone_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Overflow_Bag_Gravestone_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class ABP_Gravestone_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Gravestone_C* CallFunc_Array_Get_Item_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CorpseUnstuck");

	Params::ABP_IcarusPlayerControllerSurvival_C_CorpseUnstuck_Params Parms{};

	Parms.DoMove = DoMove;
	Parms.MIN_CORPSE_DIST = MIN_CORPSE_DIST;
	Parms.DropLocation = DropLocation;
	Parms.MAX_CORPSE_DIST = MAX_CORPSE_DIST;
	Parms.PlayerLocationNoZ = PlayerLocationNoZ;
	Parms.HaveCorpse = HaveCorpse;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CorpseAvailable != nullptr)
		*CorpseAvailable = Parms.CorpseAvailable;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.TryToggleThirdPerson
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFirstPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::TryToggleThirdPerson(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsLocalController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "TryToggleThirdPerson");

	Params::ABP_IcarusPlayerControllerSurvival_C_TryToggleThirdPerson_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetFirstPersonMesh_ReturnValue = CallFunc_GetFirstPersonMesh_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DisplayDynamicWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UIcarusLinkedActorPanelBase>WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      LinkedActorForWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusLinkedActorPanelBase* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_IcarusLinkedActorPanel_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UIcarusLinkedActorPanelBase* ABP_IcarusPlayerControllerSurvival_C::DisplayDynamicWidget(TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass, class AActor* LinkedActorForWidget, class UClass* K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel, bool K2Node_ClassDynamicCast_bSuccess, class UUMG_IcarusLinkedActorPanel_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DisplayDynamicWidget");

	Params::ABP_IcarusPlayerControllerSurvival_C_DisplayDynamicWidget_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.LinkedActorForWidget = LinkedActorForWidget;
	Parms.K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel = K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DelayedHotbarSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::DelayedHotbarSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DelayedHotbarSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ActivateHotbarSlot
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bQuickCraft                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bDelayedActivate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsUnfocusing                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SlotToSelect                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFocusSlot_CanFocus                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingRadialMenu_ShowingRadialMenu                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FocusSlot_FocusedItem                                   (ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::ActivateHotbarSlot(int32 NewSelection, bool bForce, bool bQuickCraft, bool bDelayedActivate, bool IsUnfocusing, int32 SlotToSelect, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanFocusSlot_CanFocus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMoveInputIgnored_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_4, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsShowingRadialMenu_ShowingRadialMenu, const struct FItemData& CallFunc_FocusSlot_FocusedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ActivateHotbarSlot");

	Params::ABP_IcarusPlayerControllerSurvival_C_ActivateHotbarSlot_Params Parms{};

	Parms.NewSelection = NewSelection;
	Parms.bForce = bForce;
	Parms.bQuickCraft = bQuickCraft;
	Parms.bDelayedActivate = bDelayedActivate;
	Parms.IsUnfocusing = IsUnfocusing;
	Parms.SlotToSelect = SlotToSelect;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CanFocusSlot_CanFocus = CallFunc_CanFocusSlot_CanFocus;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue = CallFunc_IsMoveInputIgnored_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsShowingRadialMenu_ShowingRadialMenu = CallFunc_IsShowingRadialMenu_ShowingRadialMenu;
	Parms.CallFunc_FocusSlot_FocusedItem = CallFunc_FocusSlot_FocusedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ProcessChatMessage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerState*          FromPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FIcarusPlayerChatMessage    ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerIdentityData         CallFunc_GetPlayerIdentityData_PlayerIdentity                    (None)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FIcarusPlayerChatMessage    K2Node_MakeStruct_IcarusPlayerChatMessage                        (None)

struct FIcarusPlayerChatMessage ABP_IcarusPlayerControllerSurvival_C::ProcessChatMessage(class AIcarusPlayerState* FromPlayer, const class FString& Message, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FIcarusPlayerChatMessage& K2Node_MakeStruct_IcarusPlayerChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ProcessChatMessage");

	Params::ABP_IcarusPlayerControllerSurvival_C_ProcessChatMessage_Params Parms{};

	Parms.FromPlayer = FromPlayer;
	Parms.Message = Message;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_GetPlayerIdentityData_PlayerIdentity = CallFunc_GetPlayerIdentityData_PlayerIdentity;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusPlayerChatMessage = K2Node_MakeStruct_IcarusPlayerChatMessage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetNetworkProxyComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UNetworkProxyComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UNetworkProxyComponent* ABP_IcarusPlayerControllerSurvival_C::GetNetworkProxyComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetNetworkProxyComponent");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetNetworkProxyComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCriticalHitComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UIcarusCriticalHitComponent* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UIcarusCriticalHitComponent* ABP_IcarusPlayerControllerSurvival_C::GetCriticalHitComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetCriticalHitComponent");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetCriticalHitComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterfaceInternal
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUserInterfaceBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserInterfaceBase* ABP_IcarusPlayerControllerSurvival_C::GetUserInterfaceInternal(class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetUserInterfaceInternal");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetUserInterfaceInternal_Params Parms{};

	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsTryingToUnstuck
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::IsTryingToUnstuck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "IsTryingToUnstuck");

	Params::ABP_IcarusPlayerControllerSurvival_C_IsTryingToUnstuck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EndPhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::EndPhotoMode(bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "EndPhotoMode");

	Params::ABP_IcarusPlayerControllerSurvival_C_EndPhotoMode_Params Parms{};

	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartPhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::StartPhotoMode(class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "StartPhotoMode");

	Params::ABP_IcarusPlayerControllerSurvival_C_StartPhotoMode_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsThirdPersonToggleDisabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsThirdPersonToggleDisabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::IsThirdPersonToggleDisabled(bool CallFunc_IsThirdPersonToggleDisabled_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "IsThirdPersonToggleDisabled");

	Params::ABP_IcarusPlayerControllerSurvival_C_IsThirdPersonToggleDisabled_Params Parms{};

	Parms.CallFunc_IsThirdPersonToggleDisabled_ReturnValue = CallFunc_IsThirdPersonToggleDisabled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSessionFlagsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlagsMultiRowHandle        CallFunc_FromSessionFlagsRowHandle_ReturnValue                   (HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFlagPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OnSessionFlagsUpdated(class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FFlagsMultiRowHandle& CallFunc_FromSessionFlagsRowHandle_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_HasFlagPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnSessionFlagsUpdated");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnSessionFlagsUpdated_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_FromSessionFlagsRowHandle_ReturnValue = CallFunc_FromSessionFlagsRowHandle_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_HasFlagPlayer_ReturnValue = CallFunc_HasFlagPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.RemoveSoloRespawnModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::RemoveSoloRespawnModifier(class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "RemoveSoloRespawnModifier");

	Params::ABP_IcarusPlayerControllerSurvival_C_RemoveSoloRespawnModifier_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddSoloRespawnModifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlagsMultiRowHandle        CallFunc_FromSessionFlagsRowHandle_ReturnValue                   (HasGetValueTypeHash)
// bool                               CallFunc_HasFlagPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::AddSoloRespawnModifier(class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FFlagsMultiRowHandle& CallFunc_FromSessionFlagsRowHandle_ReturnValue, bool CallFunc_HasFlagPlayer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "AddSoloRespawnModifier");

	Params::ABP_IcarusPlayerControllerSurvival_C_AddSoloRespawnModifier_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_FromSessionFlagsRowHandle_ReturnValue = CallFunc_FromSessionFlagsRowHandle_ReturnValue;
	Parms.CallFunc_HasFlagPlayer_ReturnValue = CallFunc_HasFlagPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CreateOverflowBag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Inventory                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         InventoryComp                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           Items                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGravestoneData             CallFunc_GetGravestoneData_Data                                  (None)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TransformTransform_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameModeSurvival*     K2Node_DynamicCast_AsIcarus_Game_Mode_Survival                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_wildcard_Variable                                           (IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryIDEnum>    CallFunc_GetInventoryIds_ReturnValue                             (ReferenceParm)
// struct FInventoryIDEnum            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::CreateOverflowBag(class AActor* Actor, class UInventory* Inventory, class UInventoryComponent* InventoryComp, const TArray<struct FItemData>& Items, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGravestoneData& CallFunc_GetGravestoneData_Data, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_EqualEqual_TransformTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& Temp_wildcard_Variable, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FInventoryIDEnum>& CallFunc_GetInventoryIds_ReturnValue, const struct FInventoryIDEnum& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CreateOverflowBag");

	Params::ABP_IcarusPlayerControllerSurvival_C_CreateOverflowBag_Params Parms{};

	Parms.Actor = Actor;
	Parms.Inventory = Inventory;
	Parms.InventoryComp = InventoryComp;
	Parms.Items = Items;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Gravestone = K2Node_DynamicCast_AsBP_Gravestone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGravestoneData_Data = CallFunc_GetGravestoneData_Data;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TransformTransform_ReturnValue = CallFunc_EqualEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Survival = K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetInventoryIds_ReturnValue = CallFunc_GetInventoryIds_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GatherMetaItems
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FItemData>           OutMetaItems                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FMetaResource>       OutMetaResources                                                 (Parm, OutParm)
// TArray<struct FItemData>           CallFunc_GetMetaItemsAndResources_MetaItems                      (ReferenceParm, ContainsInstancedReference)
// TArray<struct FMetaResource>       CallFunc_GetMetaItemsAndResources_MetaResources                  (ReferenceParm)

void ABP_IcarusPlayerControllerSurvival_C::GatherMetaItems(TArray<struct FItemData>* OutMetaItems, TArray<struct FMetaResource>* OutMetaResources, TArray<struct FItemData>& CallFunc_GetMetaItemsAndResources_MetaItems, TArray<struct FMetaResource>& CallFunc_GetMetaItemsAndResources_MetaResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GatherMetaItems");

	Params::ABP_IcarusPlayerControllerSurvival_C_GatherMetaItems_Params Parms{};

	Parms.CallFunc_GetMetaItemsAndResources_MetaItems = CallFunc_GetMetaItemsAndResources_MetaItems;
	Parms.CallFunc_GetMetaItemsAndResources_MetaResources = CallFunc_GetMetaItemsAndResources_MetaResources;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMetaItems != nullptr)
		*OutMetaItems = std::move(Parms.OutMetaItems);

	if (OutMetaResources != nullptr)
		*OutMetaResources = std::move(Parms.OutMetaResources);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnPodLocations
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FilterBiome                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>AvailableSpawns                                                  (Parm, OutParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>OtherSpawns                                                      (Parm, OutParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>AllSpawns                                                        (Parm, OutParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>AllAvailable                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>AvailableOther                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>Available                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FBiomesRowHandle            PlayerBiome                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusRespawnShipSpawn_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SampleLocationOutOfBounds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::GetRespawnPodLocations(bool FilterBiome, TArray<class ABP_IcarusRespawnShipSpawn_C*>* AvailableSpawns, TArray<class ABP_IcarusRespawnShipSpawn_C*>* OtherSpawns, TArray<class ABP_IcarusRespawnShipSpawn_C*>* AllSpawns, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& AllAvailable, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& AvailableOther, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& Available, const struct FBiomesRowHandle& PlayerBiome, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusRespawnShipSpawn_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_SampleLocationOutOfBounds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetRespawnPodLocations");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetRespawnPodLocations_Params Parms{};

	Parms.FilterBiome = FilterBiome;
	Parms.AllAvailable = AllAvailable;
	Parms.AvailableOther = AvailableOther;
	Parms.Available = Available;
	Parms.PlayerBiome = PlayerBiome;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue = CallFunc_SampleBiomeAtLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue;
	Parms.CallFunc_SampleLocationOutOfBounds_ReturnValue = CallFunc_SampleLocationOutOfBounds_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableSpawns != nullptr)
		*AvailableSpawns = std::move(Parms.AvailableSpawns);

	if (OtherSpawns != nullptr)
		*OtherSpawns = std::move(Parms.OtherSpawns);

	if (AllSpawns != nullptr)
		*AllSpawns = std::move(Parms.AllSpawns);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERespawnType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ERespawnType ABP_IcarusPlayerControllerSurvival_C::GetRespawnType(class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 CallFunc_GetStat_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetRespawnType");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetRespawnType_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_IcarusPlayerControllerSurvival_C::GetRespawnDistance(int32 Distance, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetRespawnDistance");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetRespawnDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SpawnGravestone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DBNO                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseSnapshot               DeathPose                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          CallFunc_GetAllInventories_ReturnValue                           (ReferenceParm, ContainsInstancedReference)
// class UInventory*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// struct FInventorySlot              CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetGravestoneInventory_Inventory                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// struct FItemData                   K2Node_MakeStruct_ItemData_1                                     (ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_Select_Default                                            (ContainsInstancedReference)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::SpawnGravestone(bool DBNO, const struct FPoseSnapshot& DeathPose, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UInventory*>& CallFunc_GetAllInventories_ReturnValue, class UInventory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FInventorySlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UInventory* CallFunc_GetGravestoneInventory_Inventory, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, const struct FItemData& K2Node_MakeStruct_ItemData_1, bool Temp_bool_Variable, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FItemData& K2Node_Select_Default, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "SpawnGravestone");

	Params::ABP_IcarusPlayerControllerSurvival_C_SpawnGravestone_Params Parms{};

	Parms.DBNO = DBNO;
	Parms.DeathPose = DeathPose;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllInventories_ReturnValue = CallFunc_GetAllInventories_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Gravestone = K2Node_DynamicCast_AsBP_Gravestone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetGravestoneInventory_Inventory = CallFunc_GetGravestoneInventory_Inventory;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation = CallFunc_AutomaticallyPlaceItem_PlacedLocation;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue = CallFunc_AutomaticallyPlaceItem_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.K2Node_MakeStruct_ItemData_1 = K2Node_MakeStruct_ItemData_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Gravestone_1 = K2Node_DynamicCast_AsBP_Gravestone_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsTimeElapsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOutOfBoundsSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerOutOfBounds_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGodModeEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutOfBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OutOfBoundsTimeElapsed(class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UOutOfBoundsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_IsPlayerOutOfBounds_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsGodModeEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetStat_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsOutOfBounds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OutOfBoundsTimeElapsed");

	Params::ABP_IcarusPlayerControllerSurvival_C_OutOfBoundsTimeElapsed_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_IsPlayerOutOfBounds_ReturnValue = CallFunc_IsPlayerOutOfBounds_ReturnValue;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue = CallFunc_GetPlayerCharacterState_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_IsGodModeEnabled_ReturnValue = CallFunc_IsGodModeEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsOutOfBounds_ReturnValue = CallFunc_IsOutOfBounds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetOutOfBoundsRemainingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutOfBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_IcarusPlayerControllerSurvival_C::GetOutOfBoundsRemainingTime(class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_IsOutOfBounds_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetOutOfBoundsRemainingTime");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetOutOfBoundsRemainingTime_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsOutOfBounds_ReturnValue = CallFunc_IsOutOfBounds_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsOutOfBounds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::IsOutOfBounds(bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "IsOutOfBounds");

	Params::ABP_IcarusPlayerControllerSurvival_C_IsOutOfBounds_Params Parms{};

	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnRep_OutOfBoundsTimestamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutOfBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutOfBounds_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnRep_OutOfBoundsTimestamp(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsOutOfBounds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOutOfBounds_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnRep_OutOfBoundsTimestamp");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnRep_OutOfBoundsTimestamp_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsOutOfBounds_ReturnValue = CallFunc_IsOutOfBounds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsOutOfBounds_ReturnValue_1 = CallFunc_IsOutOfBounds_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OutOfBounds                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PerformBoundsCheck                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SeatPreventsBoundsCheck                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PreviousState                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesCurrentSeatPreventOutOfBoundsCheck_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutOfBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OutOfBoundsUpdated(class AIcarusPlayerCharacter* Player, bool OutOfBounds, bool PerformBoundsCheck, bool SeatPreventsBoundsCheck, bool PreviousState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_DoesCurrentSeatPreventOutOfBoundsCheck_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsOutOfBounds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OutOfBoundsUpdated");

	Params::ABP_IcarusPlayerControllerSurvival_C_OutOfBoundsUpdated_Params Parms{};

	Parms.Player = Player;
	Parms.OutOfBounds = OutOfBounds;
	Parms.PerformBoundsCheck = PerformBoundsCheck;
	Parms.SeatPreventsBoundsCheck = SeatPreventsBoundsCheck;
	Parms.PreviousState = PreviousState;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_DoesCurrentSeatPreventOutOfBoundsCheck_ReturnValue = CallFunc_DoesCurrentSeatPreventOutOfBoundsCheck_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsOutOfBounds_ReturnValue = CallFunc_IsOutOfBounds_ReturnValue;
	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetPlayerUID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_IcarusPlayerControllerSurvival_C::GetPlayerUID(const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const class FString& CallFunc_UniqueNetIdToString_String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetPlayerUID");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetPlayerUID_Params Parms{};

	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HasAvailableBed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_BedBase_C*               AvailableBed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerUID_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<class ABP_BedBase_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BedBase_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPlayerUID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::HasAvailableBed(class ABP_BedBase_C** AvailableBed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerUID_ReturnValue, TArray<class ABP_BedBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_BedBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasPlayerUID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "HasAvailableBed");

	Params::ABP_IcarusPlayerControllerSurvival_C_HasAvailableBed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerUID_ReturnValue = CallFunc_GetPlayerUID_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasPlayerUID_ReturnValue = CallFunc_HasPlayerUID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableBed != nullptr)
		*AvailableBed = Parms.AvailableBed;

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      UserID                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::GetUserID(class FString* UserID, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const class FString& CallFunc_GetUserID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetUserID");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetUserID_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UserID != nullptr)
		*UserID = std::move(Parms.UserID);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetAvailableRespawnPod
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusRespawnShipSpawn_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              NewLocalVar_0                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>AllSpawns                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>OtherSpawns                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>BiomeSpawns                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FVector                     CheckLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RespawnDistance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>Available                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusRespawnShipSpawn_C*K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1            (ReferenceParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_AvailableSpawns                  (ReferenceParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_OtherSpawns                      (ReferenceParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_AllSpawns                        (ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusRespawnShipSpawn_C*K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_2            (ReferenceParm)
// float                              CallFunc_GetRespawnDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusRespawnShipSpawn_C*K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_AvailableSpawns_1                (ReferenceParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_OtherSpawns_1                    (ReferenceParm)
// TArray<class ABP_IcarusRespawnShipSpawn_C*>CallFunc_GetRespawnPodLocations_AllSpawns_1                      (ReferenceParm)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusRespawnShipSpawn_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERespawnType            CallFunc_GetRespawnType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_IcarusRespawnShipSpawn_C* ABP_IcarusPlayerControllerSurvival_C::GetAvailableRespawnPod(int32 NewLocalVar_1, const TArray<class AActor*>& NewLocalVar_0, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& AllSpawns, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& OtherSpawns, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& BiomeSpawns, const struct FVector& CheckLocation, float RespawnDistance, const TArray<class ABP_IcarusRespawnShipSpawn_C*>& Available, int32 Temp_int_Variable, class AActor* Temp_wildcard_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_IcarusRespawnShipSpawn_C* K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_AvailableSpawns, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_OtherSpawns, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_AllSpawns, int32 CallFunc_Array_LastIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ABP_IcarusRespawnShipSpawn_C* K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_2, float CallFunc_GetRespawnDistance_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, class ABP_IcarusRespawnShipSpawn_C* K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_2, bool K2Node_DynamicCast_bSuccess_2, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_AvailableSpawns_1, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_OtherSpawns_1, TArray<class ABP_IcarusRespawnShipSpawn_C*>& CallFunc_GetRespawnPodLocations_AllSpawns_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusRespawnShipSpawn_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERespawnType CallFunc_GetRespawnType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetAvailableRespawnPod");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetAvailableRespawnPod_Params Parms{};

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.AllSpawns = AllSpawns;
	Parms.OtherSpawns = OtherSpawns;
	Parms.BiomeSpawns = BiomeSpawns;
	Parms.CheckLocation = CheckLocation;
	Parms.RespawnDistance = RespawnDistance;
	Parms.Available = Available;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn = K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1 = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1;
	Parms.CallFunc_GetRespawnPodLocations_AvailableSpawns = CallFunc_GetRespawnPodLocations_AvailableSpawns;
	Parms.CallFunc_GetRespawnPodLocations_OtherSpawns = CallFunc_GetRespawnPodLocations_OtherSpawns;
	Parms.CallFunc_GetRespawnPodLocations_AllSpawns = CallFunc_GetRespawnPodLocations_AllSpawns;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_1 = K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_2 = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_2;
	Parms.CallFunc_GetRespawnDistance_ReturnValue = CallFunc_GetRespawnDistance_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_2 = K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetRespawnPodLocations_AvailableSpawns_1 = CallFunc_GetRespawnPodLocations_AvailableSpawns_1;
	Parms.CallFunc_GetRespawnPodLocations_OtherSpawns_1 = CallFunc_GetRespawnPodLocations_OtherSpawns_1;
	Parms.CallFunc_GetRespawnPodLocations_AllSpawns_1 = CallFunc_GetRespawnPodLocations_AllSpawns_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRespawnType_ReturnValue = CallFunc_GetRespawnType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRespawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UModifierStateComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModifierStateComponent*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnPlayerRespawn(class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, TArray<class UModifierStateComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, class UModifierStateComponent* CallFunc_Array_Get_Item, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnPlayerRespawn");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnPlayerRespawn_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EmptyHands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanFocusSlot_CanFocus                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingRadialMenu_ShowingRadialMenu                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::EmptyHands(class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanFocusSlot_CanFocus, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsShowingRadialMenu_ShowingRadialMenu, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMoveInputIgnored_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "EmptyHands");

	Params::ABP_IcarusPlayerControllerSurvival_C_EmptyHands_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanFocusSlot_CanFocus = CallFunc_CanFocusSlot_CanFocus;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_IsShowingRadialMenu_ShowingRadialMenu = CallFunc_IsShowingRadialMenu_ShowingRadialMenu;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue = CallFunc_IsMoveInputIgnored_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UpdateHotbar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue                              (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FocusSlot_FocusedItem                                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::UpdateHotbar(class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_FocusSlot_FocusedItem, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "UpdateHotbar");

	Params::ABP_IcarusPlayerControllerSurvival_C_UpdateHotbar_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInventoryID_ReturnValue = CallFunc_GetInventoryID_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FocusSlot_FocusedItem = CallFunc_FocusSlot_FocusedItem;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.QuickCraft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FRecipeSetsRowHandle        CallFunc_MakeLiteralRecipeSets_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::QuickCraft(const struct FProcessorRecipesRowHandle& Recipe, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<class UInventory*>& K2Node_MakeArray_Array, const struct FRecipeSetsRowHandle& CallFunc_MakeLiteralRecipeSets_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "QuickCraft");

	Params::ABP_IcarusPlayerControllerSurvival_C_QuickCraft_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralRecipeSets_ReturnValue = CallFunc_MakeLiteralRecipeSets_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.External_CanPerformInputAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bBlockedByUI                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIgnoreAnimLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingRadialMenu_ShowingRadialMenu                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingStaticWidget_Menu_Open                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::External_CanPerformInputAction(bool bBlockedByUI, bool bIgnoreAnimLock, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsMoveInputIgnored_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsShowingRadialMenu_ShowingRadialMenu, bool CallFunc_IsShowingStaticWidget_Menu_Open, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "External_CanPerformInputAction");

	Params::ABP_IcarusPlayerControllerSurvival_C_External_CanPerformInputAction_Params Parms{};

	Parms.bBlockedByUI = bBlockedByUI;
	Parms.bIgnoreAnimLock = bIgnoreAnimLock;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue = CallFunc_IsMoveInputIgnored_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsShowingRadialMenu_ShowingRadialMenu = CallFunc_IsShowingRadialMenu_ShowingRadialMenu;
	Parms.CallFunc_IsShowingStaticWidget_Menu_Open = CallFunc_IsShowingStaticWidget_Menu_Open;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCheatOverlay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatOverlayBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatOverlay_C*         CallFunc_GetCheatOverlay_Overlay                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCheatOverlayBase* ABP_IcarusPlayerControllerSurvival_C::GetCheatOverlay(class UObject* WorldContextObject, class UUMG_CheatOverlay_C* CallFunc_GetCheatOverlay_Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetCheatOverlay");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetCheatOverlay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CallFunc_GetCheatOverlay_Overlay = CallFunc_GetCheatOverlay_Overlay;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CanFocusSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              SlotToFocus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanFocus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::CanFocusSlot(int32 SlotToFocus, bool* CanFocus, bool Temp_bool_Variable, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSeated_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CanFocusSlot");

	Params::ABP_IcarusPlayerControllerSurvival_C_CanFocusSlot_Params Parms{};

	Parms.SlotToFocus = SlotToFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanFocus != nullptr)
		*CanFocus = Parms.CanFocus;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ToggleUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::ToggleUIVisibility(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ToggleUIVisibility");

	Params::ABP_IcarusPlayerControllerSurvival_C_ToggleUIVisibility_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIsThirdPerson
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CriticalHitActive_Active                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CriticalHitActive_Active_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerControllerSurvival_C::GetIsThirdPerson(bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_CriticalHitActive_Active, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CriticalHitActive_Active_1, bool CallFunc_GetIsThirdPerson_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetIsThirdPerson");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetIsThirdPerson_Params Parms{};

	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_CriticalHitActive_Active = CallFunc_CriticalHitActive_Active;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CriticalHitActive_Active_1 = CallFunc_CriticalHitActive_Active_1;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue_1 = CallFunc_GetIsThirdPerson_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventoryID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (Parm, OutParm, ContainsInstancedReference)
// struct FInventoryIDEnum            CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::GetItem(int32 InventoryID, int32 InventorySlot, struct FItemData* Item, const struct FInventoryIDEnum& CallFunc_IntToStruct_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetItem");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetItem_Params Parms{};

	Parms.InventoryID = InventoryID;
	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Calculate Quick Item Move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*PlayerCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemToMove                                                       (Edit, BlueprintVisible, ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::Calculate_Quick_Item_Move(class UInventory* Inventory, int32 Slot, class ABP_IcarusPlayerCharacterSurvival_C* PlayerCharacter, const struct FItemData& ItemToMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Calculate Quick Item Move");

	Params::ABP_IcarusPlayerControllerSurvival_C_Calculate_Quick_Item_Move_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.ItemToMove = ItemToMove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRevive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealthRestoredPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PrevFood                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PrevWater                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PrevOxygen                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       K2Node_DynamicCast_AsPlayer_Character_State                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFood_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWater_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOxygen_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UModifierStateComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModifierStateComponent*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       K2Node_DynamicCast_AsPlayer_Character_State_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxWater_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxFood_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxOxygen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OnPlayerRevive(float HealthRestoredPercent, int32 PrevFood, int32 PrevWater, int32 PrevOxygen, int32 Temp_int_Array_Index_Variable, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, class UPlayerCharacterState* K2Node_DynamicCast_AsPlayer_Character_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_GetWater_ReturnValue, int32 CallFunc_GetOxygen_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, TArray<class UModifierStateComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, class UModifierStateComponent* CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayerCharacterState* K2Node_DynamicCast_AsPlayer_Character_State_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_GetMaxFood_ReturnValue, int32 CallFunc_Max_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_GetMaxOxygen_ReturnValue, int32 CallFunc_Max_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, int32 CallFunc_Max_ReturnValue_3, bool CallFunc_RemoveModifierState_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3, bool CallFunc_IsAlive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnPlayerRevive");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnPlayerRevive_Params Parms{};

	Parms.HealthRestoredPercent = HealthRestoredPercent;
	Parms.PrevFood = PrevFood;
	Parms.PrevWater = PrevWater;
	Parms.PrevOxygen = PrevOxygen;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_State = K2Node_DynamicCast_AsPlayer_Character_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFood_ReturnValue = CallFunc_GetFood_ReturnValue;
	Parms.CallFunc_GetWater_ReturnValue = CallFunc_GetWater_ReturnValue;
	Parms.CallFunc_GetOxygen_ReturnValue = CallFunc_GetOxygen_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_State_1 = K2Node_DynamicCast_AsPlayer_Character_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxWater_ReturnValue = CallFunc_GetMaxWater_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetMaxFood_ReturnValue = CallFunc_GetMaxFood_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetMaxOxygen_ReturnValue = CallFunc_GetMaxOxygen_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_3 = CallFunc_Max_ReturnValue_3;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIcarusPlayerCharacterBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_IcarusPlayerCharacterSurvival_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_IcarusPlayerCharacterSurvival_C* ABP_IcarusPlayerControllerSurvival_C::GetIcarusPlayerCharacterBP(class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "GetIcarusPlayerCharacterBP");

	Params::ABP_IcarusPlayerControllerSurvival_C_GetIcarusPlayerCharacterBP_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DevTeleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::DevTeleport(const struct FVector& Location, const struct FRotator& Rotation, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DevTeleport");

	Params::ABP_IcarusPlayerControllerSurvival_C_DevTeleport_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerDeath
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AIcarusItem*>         AttachedProjectiles                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               WasAlreadyDead                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           K2Node_DynamicCast_AsBP_Photo_Camera                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerObserverSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAvailableBed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BedBase_C*               CallFunc_HasAvailableBed_AvailableBed                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserID_UserID                                        (ZeroConstructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LeaveSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreatureSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_IcarusPlayerControllerSurvival_C::OnPlayerDeath(const TArray<class AIcarusItem*>& AttachedProjectiles, bool WasAlreadyDead, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PhotoCamera_C* K2Node_DynamicCast_AsBP_Photo_Camera, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_FloatFloat_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayerObserverSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAvailableBed_ReturnValue, class ABP_BedBase_C* CallFunc_HasAvailableBed_AvailableBed, const class FString& CallFunc_GetUserID_UserID, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4, bool CallFunc_IsSeated_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, bool CallFunc_LeaveSeat_ReturnValue, class UCreatureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnPlayerDeath");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnPlayerDeath_Params Parms{};

	Parms.AttachedProjectiles = AttachedProjectiles;
	Parms.WasAlreadyDead = WasAlreadyDead;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Photo_Camera = K2Node_DynamicCast_AsBP_Photo_Camera;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAvailableBed_ReturnValue = CallFunc_HasAvailableBed_ReturnValue;
	Parms.CallFunc_HasAvailableBed_AvailableBed = CallFunc_HasAvailableBed_AvailableBed;
	Parms.CallFunc_GetUserID_UserID = CallFunc_GetUserID_UserID;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.CallFunc_LeaveSeat_ReturnValue = CallFunc_LeaveSeat_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_F10_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_F10_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_F10_K2Node_InputKeyEvent_0");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_F10_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Interact_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Interact_K2Node_InputActionEvent_32");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_32_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Interact_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Interact_K2Node_InputActionEvent_31");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_31_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Fire_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Fire_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Fire_K2Node_InputActionEvent_30");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Fire_K2Node_InputActionEvent_30_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_AltFire_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_AltFire_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_AltFire_K2Node_InputActionEvent_29");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_AltFire_K2Node_InputActionEvent_29_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar1_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar1_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar1_K2Node_InputActionEvent_28");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar1_K2Node_InputActionEvent_28_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar0_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar0_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar0_K2Node_InputActionEvent_27");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar0_K2Node_InputActionEvent_27_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar2_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar2_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar2_K2Node_InputActionEvent_26");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar2_K2Node_InputActionEvent_26_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar3_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar3_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar3_K2Node_InputActionEvent_25");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar3_K2Node_InputActionEvent_25_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar4_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar4_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar4_K2Node_InputActionEvent_24");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar4_K2Node_InputActionEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar5_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar5_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar5_K2Node_InputActionEvent_23");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar5_K2Node_InputActionEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar6_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar6_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar6_K2Node_InputActionEvent_22");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar6_K2Node_InputActionEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar7_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar7_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar7_K2Node_InputActionEvent_21");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar7_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar8_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar8_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar8_K2Node_InputActionEvent_20");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar8_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar9_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hotbar9_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hotbar9_K2Node_InputActionEvent_19");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar9_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HideUI_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_HideUI_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_HideUI_K2Node_InputActionEvent_18");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HideUI_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Screenshot_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Screenshot_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Screenshot_K2Node_InputActionEvent_17");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Screenshot_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Inventory_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Inventory_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Inventory_K2Node_InputActionEvent_16");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Inventory_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Crafting_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Crafting_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Crafting_K2Node_InputActionEvent_15");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Crafting_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Tech_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Tech_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Tech_K2Node_InputActionEvent_14");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Tech_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Map_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Map_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Map_K2Node_InputActionEvent_13");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Map_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Escape_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Escape_K2Node_InputActionEvent_12");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Escape_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_HotbarBack_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_HotbarBack_K2Node_InputActionEvent_11");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarBack_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hands_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Hands_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Hands_K2Node_InputActionEvent_10");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hands_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_ToggleMenus_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_ToggleMenus_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_ToggleMenus_K2Node_InputActionEvent_9");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_ToggleMenus_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_HotbarForward_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_HotbarForward_K2Node_InputActionEvent_8");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarForward_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TextChat_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_TextChat_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_TextChat_K2Node_InputActionEvent_6");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_TextChat_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HideQuestUI_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_HideQuestUI_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_HideQuestUI_K2Node_InputActionEvent_5");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HideQuestUI_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_OpenBestiary_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_OpenBestiary_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_OpenBestiary_K2Node_InputActionEvent_4");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_OpenBestiary_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnFailure_6B795656432A1EEE40E31586F8BAF647
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnFailure_6B795656432A1EEE40E31586F8BAF647()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnFailure_6B795656432A1EEE40E31586F8BAF647");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSuccess_6B795656432A1EEE40E31586F8BAF647
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnSuccess_6B795656432A1EEE40E31586F8BAF647()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnSuccess_6B795656432A1EEE40E31586F8BAF647");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_Escape_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_Escape_K2Node_InputActionEvent_1");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Escape_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_LootAll_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpActEvt_LootAll_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpActEvt_LootAll_K2Node_InputActionEvent_0");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpActEvt_LootAll_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckPlayerViewDelta
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Init                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::CheckPlayerViewDelta(bool Init)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CheckPlayerViewDelta");

	Params::ABP_IcarusPlayerControllerSurvival_C_CheckPlayerViewDelta_Params Parms{};

	Parms.Init = Init;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpAxisEvt_LookUp_K2Node_InputAxisEvent_0");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InpAxisEvt_LookRight_K2Node_InputAxisEvent_1");

	Params::ABP_IcarusPlayerControllerSurvival_C_InpAxisEvt_LookRight_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_AttemptRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Gravestone_C*            Gravestone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::Server_AttemptRespawn(class ABP_Gravestone_C* Gravestone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Server_AttemptRespawn");

	Params::ABP_IcarusPlayerControllerSurvival_C_Server_AttemptRespawn_Params Parms{};

	Parms.Gravestone = Gravestone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Gravestone_C*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::Respawn(class ABP_Gravestone_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Respawn");

	Params::ABP_IcarusPlayerControllerSurvival_C_Respawn_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DBNO_OptionAClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::DBNO_OptionAClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DBNO_OptionAClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DBNO_OptionBClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::DBNO_OptionBClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DBNO_OptionBClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::AClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "AClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::BClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "BClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SERVER_ReviveFailsafe
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::SERVER_ReviveFailsafe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "SERVER_ReviveFailsafe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ServerAttemptRevive_Implementation
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGravestoneBase*             Gravestone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::BP_ServerAttemptRevive_Implementation(class AGravestoneBase* Gravestone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "BP_ServerAttemptRevive_Implementation");

	Params::ABP_IcarusPlayerControllerSurvival_C_BP_ServerAttemptRevive_Implementation_Params Parms{};

	Parms.Gravestone = Gravestone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddItemToInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemTemplateRowHandle      ItemTemplate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::AddItemToInventory(const struct FItemTemplateRowHandle& ItemTemplate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "AddItemToInventory");

	Params::ABP_IcarusPlayerControllerSurvival_C_AddItemToInventory_Params Parms{};

	Parms.ItemTemplate = ItemTemplate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_SetFocusedSlot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewFocused                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OnServer_SetFocusedSlot(int32 NewFocused, bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnServer_SetFocusedSlot");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnServer_SetFocusedSlot_Params Parms{};

	Parms.NewFocused = NewFocused;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UIBeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::UIBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "UIBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UITick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::UITick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "UITick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_DeathCleanup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnClient_DeathCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnClient_DeathCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_RespawnCleanup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnClient_RespawnCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnClient_RespawnCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnGainedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              TotalCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnGainedItem(const struct FItemData& Item, int32 TotalCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnGainedItem");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnGainedItem_Params Parms{};

	Parms.Item = Item;
	Parms.TotalCount = TotalCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_ItemGained
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnClient_ItemGained(const struct FItemData& Item, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnClient_ItemGained");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnClient_ItemGained_Params Parms{};

	Parms.Item = Item;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetAmmo
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unload                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::Server_SetAmmo(class UInventory* Inventory, int32 Slot, bool Unload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Server_SetAmmo");

	Params::ABP_IcarusPlayerControllerSurvival_C_Server_SetAmmo_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.Unload = Unload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetBuildingVariation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Variation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::Server_SetBuildingVariation(int32 Variation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Server_SetBuildingVariation");

	Params::ABP_IcarusPlayerControllerSurvival_C_Server_SetBuildingVariation_Params Parms{};

	Parms.Variation = Variation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_UpdateHotBarSelection
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSelection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OnClient_UpdateHotBarSelection(int32 NewSelection, bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnClient_UpdateHotBarSelection");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnClient_UpdateHotBarSelection_Params Parms{};

	Parms.NewSelection = NewSelection;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnHotbarItemAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnHotbarItemAdded(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnHotbarItemAdded");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnHotbarItemAdded_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OwningClient_ForceSlotHighlight
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OwningClient_ForceSlotHighlight(int32 NewSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OwningClient_ForceSlotHighlight");

	Params::ABP_IcarusPlayerControllerSurvival_C_OwningClient_ForceSlotHighlight_Params Parms{};

	Parms.NewSlot = NewSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartQuickCraft
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::StartQuickCraft(const struct FProcessorRecipesRowHandle& Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "StartQuickCraft");

	Params::ABP_IcarusPlayerControllerSurvival_C_StartQuickCraft_Params Parms{};

	Parms.Recipe = Recipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckQuickCraft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::CheckQuickCraft(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CheckQuickCraft");

	Params::ABP_IcarusPlayerControllerSurvival_C_CheckQuickCraft_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.WantsPlayerDeadUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::WantsPlayerDeadUI(bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "WantsPlayerDeadUI");

	Params::ABP_IcarusPlayerControllerSurvival_C_WantsPlayerDeadUI_Params Parms{};

	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_Revived
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::Client_Revived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Client_Revived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ClientOpenContainer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowStoreAll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bShowTakeAll                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::BP_ClientOpenContainer(class UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "BP_ClientOpenContainer");

	Params::ABP_IcarusPlayerControllerSurvival_C_BP_ClientOpenContainer_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.bShowStoreAll = bShowStoreAll;
	Parms.bShowTakeAll = bShowTakeAll;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ReceiveTick");

	Params::ABP_IcarusPlayerControllerSurvival_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_ReturnFocus
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnServer_ReturnFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnServer_ReturnFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_GiveFocusToObject
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::OnServer_GiveFocusToObject(class AActor* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnServer_GiveFocusToObject");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnServer_GiveFocusToObject_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnDevTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::OnDevTeleport(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnDevTeleport");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnDevTeleport_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerDevTeleport
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::ServerDevTeleport(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ServerDevTeleport");

	Params::ABP_IcarusPlayerControllerSurvival_C_ServerDevTeleport_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_Build
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusRocket*               Rocket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::Client_Build(class AIcarusRocket* Rocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Client_Build");

	Params::ABP_IcarusPlayerControllerSurvival_C_Client_Build_Params Parms{};

	Parms.Rocket = Rocket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SetUIVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHide                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideDebug                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::SetUIVisibility(bool bHide, bool bHideDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "SetUIVisibility");

	Params::ABP_IcarusPlayerControllerSurvival_C_SetUIVisibility_Params Parms{};

	Parms.bHide = bHide;
	Parms.bHideDebug = bHideDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EQSFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::EQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "EQSFinished");

	Params::ABP_IcarusPlayerControllerSurvival_C_EQSFinished_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UnstuckAtRespawnShipYes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::UnstuckAtRespawnShipYes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "UnstuckAtRespawnShipYes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UnstuckAtRespawnShipNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::UnstuckAtRespawnShipNo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "UnstuckAtRespawnShipNo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_NoUnstuckFound
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::Client_NoUnstuckFound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Client_NoUnstuckFound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_UnstuckAtRespawnShip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::Server_UnstuckAtRespawnShip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "Server_UnstuckAtRespawnShip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ResetUnstuck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::ResetUnstuck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ResetUnstuck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.On Mouse Sensitivity Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::On_Mouse_Sensitivity_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "On Mouse Sensitivity Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnConnectedPlayerInitialised
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnConnectedPlayerInitialised()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnConnectedPlayerInitialised");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPawnLeavingGame
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnPawnLeavingGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnPawnLeavingGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckOutOfBounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::CheckOutOfBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "CheckOutOfBounds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.MapTravelBackToHab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::MapTravelBackToHab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "MapTravelBackToHab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnItemBounced_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::OnItemBounced_Event(struct FItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnItemBounced_Event");

	Params::ABP_IcarusPlayerControllerSurvival_C_OnItemBounced_Event_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InventoryFullMessageCooldownComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::InventoryFullMessageCooldownComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "InventoryFullMessageCooldownComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnLeaveProspectSessionCompleteImpl
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnLeaveProspectSessionCompleteImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnLeaveProspectSessionCompleteImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerPossessCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::ServerPossessCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ServerPossessCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerStopPossessingCamera
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::ServerStopPossessingCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ServerStopPossessingCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_Server_Unstuck_Implementation
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::BP_Server_Unstuck_Implementation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "BP_Server_Unstuck_Implementation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DelayedShowSavingDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::DelayedShowSavingDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "DelayedShowSavingDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerPushClientDynamicWidget
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UIcarusLinkedActorPanelBase>WidgetClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFocusCameraOnActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerControllerSurvival_C::ServerPushClientDynamicWidget(TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass, class AActor* LinkedActor, bool bFocusCameraOnActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ServerPushClientDynamicWidget");

	Params::ABP_IcarusPlayerControllerSurvival_C_ServerPushClientDynamicWidget_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.LinkedActor = LinkedActor;
	Parms.bFocusCameraOnActor = bFocusCameraOnActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.TriggerLoadShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusRocket*               Rocket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::TriggerLoadShip(class AIcarusRocket* Rocket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "TriggerLoadShip");

	Params::ABP_IcarusPlayerControllerSurvival_C_TriggerLoadShip_Params Parms{};

	Parms.Rocket = Rocket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyExoticsBanked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      Type                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::NotifyExoticsBanked(int32 Amount, const struct FMetaCurrencyRowHandle& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "NotifyExoticsBanked");

	Params::ABP_IcarusPlayerControllerSurvival_C_NotifyExoticsBanked_Params Parms{};

	Parms.Amount = Amount;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyQuestCompleted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AQuest*                      Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMissionsRowHandle   MissionRowHandle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               bIsCurrentQuest                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMetaResource>       ReceivedResources                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IcarusPlayerControllerSurvival_C::NotifyQuestCompleted(class AQuest* Quest, struct FFactionMissionsRowHandle& MissionRowHandle, bool bIsCurrentQuest, TArray<struct FMetaResource>& ReceivedResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "NotifyQuestCompleted");

	Params::ABP_IcarusPlayerControllerSurvival_C_NotifyQuestCompleted_Params Parms{};

	Parms.Quest = Quest;
	Parms.MissionRowHandle = MissionRowHandle;
	Parms.bIsCurrentQuest = bIsCurrentQuest;
	Parms.ReceivedResources = ReceivedResources;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyItemsReturned
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::NotifyItemsReturned(TArray<struct FItemData>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "NotifyItemsReturned");

	Params::ABP_IcarusPlayerControllerSurvival_C_NotifyItemsReturned_Params Parms{};

	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ServerCorpseUnstuck_Implementation
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::BP_ServerCorpseUnstuck_Implementation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "BP_ServerCorpseUnstuck_Implementation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyDynamicQuestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumCredits                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumExperience                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::NotifyDynamicQuestCompleted(int32 NumCredits, int32 NumExperience)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "NotifyDynamicQuestCompleted");

	Params::ABP_IcarusPlayerControllerSurvival_C_NotifyDynamicQuestCompleted_Params Parms{};

	Parms.NumCredits = NumCredits;
	Parms.NumExperience = NumExperience;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OpenBagWidgetUI
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemData                   SourceItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::OpenBagWidgetUI(struct FItemData& SourceItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OpenBagWidgetUI");

	Params::ABP_IcarusPlayerControllerSurvival_C_OpenBagWidgetUI_Params Parms{};

	Parms.SourceItem = SourceItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HandleLivingItemChallengeCompleted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerControllerSurvival_C::HandleLivingItemChallengeCompleted(struct FItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "HandleLivingItemChallengeCompleted");

	Params::ABP_IcarusPlayerControllerSurvival_C_HandleLivingItemChallengeCompleted_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HandleLivingItemChallengeProgressUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              ProgressAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::HandleLivingItemChallengeProgressUpdated(struct FItemData& ItemData, int32 ProgressAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "HandleLivingItemChallengeProgressUpdated");

	Params::ABP_IcarusPlayerControllerSurvival_C_HandleLivingItemChallengeProgressUpdated_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.ProgressAmount = ProgressAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ExecuteUbergraph_BP_IcarusPlayerControllerSurvival
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldRotateCameraOnDeployableInteract_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue                              (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue_1                            (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Init                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UUMG_FLODDebugOverlay_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUMG_FLODDebugOverlay_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_1(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Gravestone_C*            K2Node_CustomEvent_Gravestone                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Gravestone_C*            K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// class ABP_IcarusRespawnShipSpawn_C*CallFunc_GetAvailableRespawnPod_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_UniqueNetIdToString_String                              (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DropShip_RespawnPod_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// bool                               CallFunc_HasAvailableBed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BedBase_C*               CallFunc_HasAvailableBed_AvailableBed                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindExitSpot_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_OnProspectNotification_DynamicMissionComplete_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAvailableBed_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_BedBase_C*               CallFunc_HasAvailableBed_AvailableBed_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerCharacterID          CallFunc_GetPlayerCharacterID_ReturnValue                        (ConstParm, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_OnProspectNotification_ItemsReturned_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// class AGravestoneBase*             K2Node_Event_Gravestone                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRespawn_CanRespawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRespawn_CanRespawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_OnProspectNotification_MissionComplete_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_OnProspectNotification_ExoticsBanked_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingStaticWidget_Menu_Open                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_17                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_18                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_19                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_20                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_21                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_22                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_23                                   (HasGetValueTypeHash)
// struct FItemTemplateRowHandle      K2Node_CustomEvent_ItemTemplate                                  (NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DropItem_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewFocused                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Force_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_24                                   (HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_25                                   (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_26                                   (HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_27                                   (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_Item_1                                        (ContainsInstancedReference)
// int32                              K2Node_CustomEvent_TotalCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_Item                                          (ContainsInstancedReference)
// int32                              K2Node_CustomEvent_Count                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_Inventory_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Unload                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue_2                            (HasGetValueTypeHash)
// class FName                        CallFunc_BreakInventoryIDEnum_Name                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakInventoryIDEnum_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_28                                   (HasGetValueTypeHash)
// class UPlayerSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Variation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewSelection                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Force                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewSlot                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FocusSlot_FocusedItem                                   (ContainsInstancedReference)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FProcessorRecipesRowHandle  K2Node_CustomEvent_Recipe                                        (NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowHotbarScroll_Allow                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventorySlot              CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_FindCraftingRecipe_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_FindCraftingRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowHotbarScroll_Allow_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SpectatorActor_C*        CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingRadialMenu_ShowingRadialMenu                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingStaticWidget_Menu_Open_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsDead                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           K2Node_DynamicCast_AsBP_Photo_Camera                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_Event_Inventory                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowStoreAll                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowTakeAll                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Mount_Base_C*            K2Node_DynamicCast_AsBP_Mount_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_29                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_30                                   (HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuide_C*           CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_C*        K2Node_DynamicCast_AsUMG_User_Interface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECheatsEnabled          CallFunc_IfCheatsEnabled_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeatBase_C*              K2Node_DynamicCast_AsBP_Seat_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMoveInputIgnored_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusRocket*               K2Node_CustomEvent_Rocket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerDropShip_C*        K2Node_DynamicCast_AsBP_Player_Drop_Ship                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AtmosphereController_C*  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesEnum                 CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHide                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideDebug                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivityParameters_Yaw                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivityParameters_Pitch                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivityParameters_AimYaw                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivityParameters_AimPitch                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_31                                   (HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_2(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_32                                   (HasGetValueTypeHash)
// class FText                        Temp_wildcard_Variable                                           (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_1                     (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UUMG_UserInterface_C*        CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_ItemData                                      (ConstParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutOfBoundsSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerOutOfBounds_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowingStaticWidget_Menu_Open_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           K2Node_DynamicCast_AsBP_Photo_Camera_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMountSeat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UIcarusLinkedActorPanelBase>K2Node_Event_WidgetClass                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_LinkedActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFocusCameraOnActor                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusRocket*               K2Node_Event_Rocket                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_2                     (ContainsInstancedReference)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOutOfBoundsSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerOutOfBounds_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Amount                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      K2Node_Event_Type                                                (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AQuest*                      K2Node_Event_Quest                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMissionsRowHandle   K2Node_Event_MissionRowHandle                                    (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsCurrentQuest                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMetaResource>       K2Node_Event_ReceivedResources                                   (ConstParm, ReferenceParm)
// TScriptInterface<class IIOnProspectNotificationDisplay_C>CallFunc_QueueNotification_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class UOutOfBoundsSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIOnProspectNotificationDisplay_C>CallFunc_QueueNotification_self_CastInput_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerOutOfBounds_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// TArray<struct FItemData>           K2Node_CustomEvent_Items                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_3                     (ContainsInstancedReference)
// TScriptInterface<class IIOnProspectNotificationDisplay_C>CallFunc_QueueNotification_self_CastInput_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CorpseUnstuck_CorpseAvailable                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_NumCredits                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumExperience                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FItemData                   K2Node_Event_SourceItem                                          (ConstParm, ContainsInstancedReference)
// TScriptInterface<class IIOnProspectNotificationDisplay_C>CallFunc_QueueNotification_self_CastInput_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_Event_ItemData_1                                          (ConstParm, ContainsInstancedReference)
// class UIcarusLinkedActorPanelBase* CallFunc_DisplayDynamicWidget_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BagInventory_C*         K2Node_DynamicCast_AsUMG_Bag_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_Event_ItemData                                            (ConstParm, ContainsInstancedReference)
// int32                              K2Node_Event_ProgressAmount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowChallengePopup_ShouldShow                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_Chest_C*                CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::ExecuteUbergraph_BP_IcarusPlayerControllerSurvival(int32 EntryPoint, bool CallFunc_ShouldRotateCameraOnDeployableInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_8, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_9, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity_1, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsMoveInputIgnored_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_5, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsMoveInputIgnored_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& K2Node_InputActionEvent_Key_11, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_7, const struct FVector& CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation, bool CallFunc_IsVisible_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsAlive_ReturnValue_2, bool K2Node_CustomEvent_Init, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsPackagedForDistribution_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, TArray<class UUMG_FLODDebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_FLODDebugOverlay_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_1, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& K2Node_InputActionEvent_Key_13, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, class ABP_Gravestone_C* K2Node_CustomEvent_Gravestone, bool CallFunc_IsAlive_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_8, class ABP_Gravestone_C* K2Node_CustomEvent_Target, enum class EValid CallFunc_GetTrait_Paths_1, class UActionableComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FKey& K2Node_InputActionEvent_Key_14, class ABP_IcarusRespawnShipSpawn_C* CallFunc_GetAvailableRespawnPod_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, const struct FTransform& CallFunc_GetTransform_ReturnValue, const class FString& CallFunc_UniqueNetIdToString_String, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DropShip_RespawnPod_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_9, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FKey& K2Node_InputActionEvent_Key_16, bool CallFunc_HasAvailableBed_ReturnValue, class ABP_BedBase_C* CallFunc_HasAvailableBed_AvailableBed, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_10, const struct FVector& CallFunc_FindExitSpot_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_11, class UUMG_OnProspectNotification_DynamicMissionComplete_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsAlive_ReturnValue_4, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, bool CallFunc_HasAvailableBed_ReturnValue_1, class ABP_BedBase_C* CallFunc_HasAvailableBed_AvailableBed_1, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsSheltered_ReturnValue, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone, bool K2Node_DynamicCast_bSuccess_2, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone_1, bool K2Node_DynamicCast_bSuccess_3, const struct FPlayerCharacterID& CallFunc_GetPlayerCharacterID_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key, float CallFunc_SelectFloat_ReturnValue, class UUMG_OnProspectNotification_ItemsReturned_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_AddModifierState_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key_2, class AGravestoneBase* K2Node_Event_Gravestone, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone_2, bool K2Node_DynamicCast_bSuccess_4, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, bool CallFunc_CanRespawn_CanRespawn, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_CanRespawn_CanRespawn_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_5, class UUMG_OnProspectNotification_MissionComplete_C* CallFunc_Create_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue_2, class UUMG_OnProspectNotification_ExoticsBanked_C* CallFunc_Create_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsShowingStaticWidget_Menu_Open, const struct FKey& K2Node_InputActionEvent_Key_17, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_20, const struct FKey& K2Node_InputActionEvent_Key_21, const struct FKey& K2Node_InputActionEvent_Key_22, const struct FKey& K2Node_InputActionEvent_Key_23, const struct FItemTemplateRowHandle& K2Node_CustomEvent_ItemTemplate, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_12, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, bool CallFunc_DropItem_ReturnValue, int32 K2Node_CustomEvent_NewFocused, bool K2Node_CustomEvent_Force_1, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation_1, bool CallFunc_AutomaticallyPlaceItem_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsLocalPlayerController_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_14, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_IsMoveInputIgnored_ReturnValue_2, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_5, const struct FKey& K2Node_InputActionEvent_Key_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FKey& K2Node_InputActionEvent_Key_25, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsAlive_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key_26, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_6, const struct FKey& K2Node_InputActionEvent_Key_27, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FItemData& K2Node_CustomEvent_Item_1, int32 K2Node_CustomEvent_TotalCount, const struct FItemData& K2Node_CustomEvent_Item, int32 K2Node_CustomEvent_Count, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_slot, bool K2Node_CustomEvent_Unload, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_IsValid_ReturnValue_10, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue_2, class FName CallFunc_BreakInventoryIDEnum_Name, int32 CallFunc_BreakInventoryIDEnum_Index, const struct FKey& K2Node_InputActionEvent_Key_28, class UPlayerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_11, int32 K2Node_CustomEvent_Variation, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_IsValid_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 K2Node_CustomEvent_NewSelection, bool K2Node_CustomEvent_Force, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_External_CanPerformInputAction_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location_2, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, int32 K2Node_CustomEvent_NewSlot, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FItemData& CallFunc_FocusSlot_FocusedItem, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_Recipe, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_16, int32 K2Node_CustomEvent_Index, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_AllowHotbarScroll_Allow, const struct FInventorySlot& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue, enum class EDataValid CallFunc_FindCraftingRecipe_Paths, const struct FProcessorRecipesRowHandle& CallFunc_FindCraftingRecipe_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_8, bool K2Node_SwitchEnum_CmpSuccess_9, bool CallFunc_AllowHotbarScroll_Allow_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, bool CallFunc_IsMoveInputIgnored_ReturnValue_3, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_3, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_Not_PreBool_ReturnValue_8, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_14, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_SpectatorActor_C* CallFunc_FinishSpawningActor_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_6, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_7, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_17, bool CallFunc_IsAlive_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsShowingRadialMenu_ShowingRadialMenu, bool CallFunc_IsShowingStaticWidget_Menu_Open_1, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_16, bool K2Node_CustomEvent_IsDead, bool CallFunc_IsValid_ReturnValue_17, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, class ABP_PhotoCamera_C* K2Node_DynamicCast_AsBP_Photo_Camera, bool K2Node_DynamicCast_bSuccess_10, const struct FKey& K2Node_InputActionEvent_Key_3, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_8, class UInventory* K2Node_Event_Inventory, bool K2Node_Event_bShowStoreAll, bool K2Node_Event_bShowTakeAll, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_19, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2, bool K2Node_DynamicCast_bSuccess_12, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_29, const struct FKey& K2Node_InputActionEvent_Key_30, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_20, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_13, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_FieldGuide_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_21, class UUMG_UserInterface_C* K2Node_DynamicCast_AsUMG_User_Interface, bool K2Node_DynamicCast_bSuccess_14, bool K2Node_SwitchEnum_CmpSuccess_10, bool CallFunc_IsValid_ReturnValue_22, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_Object, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, bool K2Node_SwitchEnum_CmpSuccess_11, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_18, bool CallFunc_IsSeated_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, class ABP_SeatBase_C* K2Node_DynamicCast_AsBP_Seat_Base, bool K2Node_DynamicCast_bSuccess_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_9, bool CallFunc_IsMoveInputIgnored_ReturnValue_4, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_4, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_Not_PreBool_ReturnValue_10, class AIcarusRocket* K2Node_CustomEvent_Rocket, bool CallFunc_BooleanOR_ReturnValue_11, class ABP_PlayerDropShip_C* K2Node_DynamicCast_AsBP_Player_Drop_Ship, bool K2Node_DynamicCast_bSuccess_17, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_19, class ABP_AtmosphereController_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_23, const struct FBiomesEnum& CallFunc_RowHandleToStruct_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_11, bool K2Node_Event_bHide, bool K2Node_Event_bHideDebug, const struct FKey& Temp_struct_Variable, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_20, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetMouseSensitivityParameters_Yaw, float CallFunc_GetMouseSensitivityParameters_Pitch, float CallFunc_GetMouseSensitivityParameters_AimYaw, float CallFunc_GetMouseSensitivityParameters_AimPitch, bool CallFunc_IsAlive_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_7, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_21, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_10, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_2, const struct FKey& K2Node_InputActionEvent_Key_31, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_2, bool CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_24, bool CallFunc_Not_PreBool_ReturnValue_12, const struct FKey& K2Node_InputActionEvent_Key_32, class FText Temp_wildcard_Variable, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_9, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_10, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_11, const struct FKey& K2Node_InputKeyEvent_Key, class UUMG_UserInterface_C* CallFunc_Create_ReturnValue_5, bool CallFunc_IsLocalPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_IsLocalPlayerController_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_IsServer_ReturnValue_6, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsServer_ReturnValue_7, const struct FItemData& K2Node_CustomEvent_ItemData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_14, class UOutOfBoundsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsPlayerOutOfBounds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_12, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsShowingStaticWidget_Menu_Open_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_11, class ABP_PhotoCamera_C* K2Node_DynamicCast_AsBP_Photo_Camera_1, bool K2Node_DynamicCast_bSuccess_18, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_22, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_23, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_12, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_28, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsMountSeat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_PhotoCamera_C* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_IsSeated_ReturnValue_1, TSubclassOf<class UIcarusLinkedActorPanelBase> K2Node_Event_WidgetClass, class AActor* K2Node_Event_LinkedActor, bool K2Node_Event_bFocusCameraOnActor, class AIcarusRocket* K2Node_Event_Rocket, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_29, class UOutOfBoundsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, bool CallFunc_IsPlayerOutOfBounds_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_24, bool CallFunc_IsValid_ReturnValue_30, int32 K2Node_Event_Amount, const struct FMetaCurrencyRowHandle& K2Node_Event_Type, class AQuest* K2Node_Event_Quest, const struct FFactionMissionsRowHandle& K2Node_Event_MissionRowHandle, bool K2Node_Event_bIsCurrentQuest, TArray<struct FMetaResource>& K2Node_Event_ReceivedResources, TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UOutOfBoundsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_1, bool CallFunc_IsPlayerOutOfBounds_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class APawn* CallFunc_K2_GetPawn_ReturnValue_12, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_3, bool CallFunc_K2_SetActorLocation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, TArray<struct FItemData>& K2Node_CustomEvent_Items, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_3, TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_2, bool CallFunc_CorpseUnstuck_CorpseAvailable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, int32 K2Node_Event_NumCredits, int32 K2Node_Event_NumExperience, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FItemData& K2Node_Event_SourceItem, TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_3, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_13, const struct FItemData& K2Node_Event_ItemData_1, class UIcarusLinkedActorPanelBase* CallFunc_DisplayDynamicWidget_ReturnValue, class UUMG_BagInventory_C* K2Node_DynamicCast_AsUMG_Bag_Inventory, bool K2Node_DynamicCast_bSuccess_19, const struct FItemData& K2Node_Event_ItemData, int32 K2Node_Event_ProgressAmount, bool CallFunc_ShouldShowChallengePopup_ShouldShow, class UUMG_Chest_C* CallFunc_Create_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ExecuteUbergraph_BP_IcarusPlayerControllerSurvival");

	Params::ABP_IcarusPlayerControllerSurvival_C_ExecuteUbergraph_BP_IcarusPlayerControllerSurvival_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldRotateCameraOnDeployableInteract_ReturnValue = CallFunc_ShouldRotateCameraOnDeployableInteract_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetInventoryID_ReturnValue = CallFunc_GetInventoryID_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity_1 = CallFunc_GetFocusedItemInventoryAndSlot_Validity_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetInventoryID_ReturnValue_1 = CallFunc_GetInventoryID_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue_1 = CallFunc_EqualEqual_EnumEnum_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue = CallFunc_IsMoveInputIgnored_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue_1 = CallFunc_IsAlive_ReturnValue_1;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue_1 = CallFunc_IsMoveInputIgnored_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsIcarus_Character_1 = K2Node_DynamicCast_AsIcarus_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_5 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_6 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_6;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_7 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_7;
	Parms.CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation = CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue_2 = CallFunc_IsAlive_ReturnValue_2;
	Parms.K2Node_CustomEvent_Init = K2Node_CustomEvent_Init;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCameraLocation_ReturnValue_1 = CallFunc_GetCameraLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue_2 = CallFunc_GetCameraLocation_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue_1 = CallFunc_GetConnectedPlayers_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_1 = CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_1;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_1 = CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.K2Node_CustomEvent_Gravestone = K2Node_CustomEvent_Gravestone;
	Parms.CallFunc_IsAlive_ReturnValue_3 = CallFunc_IsAlive_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_8 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_8;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.CallFunc_GetAvailableRespawnPod_ReturnValue = CallFunc_GetAvailableRespawnPod_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_UniqueNetIdToString_String = CallFunc_UniqueNetIdToString_String;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_9 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_9;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.CallFunc_HasAvailableBed_ReturnValue = CallFunc_HasAvailableBed_ReturnValue;
	Parms.CallFunc_HasAvailableBed_AvailableBed = CallFunc_HasAvailableBed_AvailableBed;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_10 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_10;
	Parms.CallFunc_FindExitSpot_ReturnValue = CallFunc_FindExitSpot_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_11 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_11;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsAlive_ReturnValue_4 = CallFunc_IsAlive_ReturnValue_4;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_1 = CallFunc_GetConfirmationWindow_ConfirmationWidget_1;
	Parms.CallFunc_HasAvailableBed_ReturnValue_1 = CallFunc_HasAvailableBed_ReturnValue_1;
	Parms.CallFunc_HasAvailableBed_AvailableBed_1 = CallFunc_HasAvailableBed_AvailableBed_1;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Gravestone = K2Node_DynamicCast_AsBP_Gravestone;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Gravestone_1 = K2Node_DynamicCast_AsBP_Gravestone_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerCharacterID_ReturnValue = CallFunc_GetPlayerCharacterID_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_Event_Gravestone = K2Node_Event_Gravestone;
	Parms.K2Node_DynamicCast_AsBP_Gravestone_2 = K2Node_DynamicCast_AsBP_Gravestone_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue;
	Parms.CallFunc_CanRespawn_CanRespawn = CallFunc_CanRespawn_CanRespawn;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_CanRespawn_CanRespawn_1 = CallFunc_CanRespawn_CanRespawn_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_4 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_5 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetStat_ReturnValue_2 = CallFunc_GetStat_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsShowingStaticWidget_Menu_Open = CallFunc_IsShowingStaticWidget_Menu_Open;
	Parms.K2Node_InputActionEvent_Key_17 = K2Node_InputActionEvent_Key_17;
	Parms.K2Node_InputActionEvent_Key_18 = K2Node_InputActionEvent_Key_18;
	Parms.K2Node_InputActionEvent_Key_19 = K2Node_InputActionEvent_Key_19;
	Parms.K2Node_InputActionEvent_Key_20 = K2Node_InputActionEvent_Key_20;
	Parms.K2Node_InputActionEvent_Key_21 = K2Node_InputActionEvent_Key_21;
	Parms.K2Node_InputActionEvent_Key_22 = K2Node_InputActionEvent_Key_22;
	Parms.K2Node_InputActionEvent_Key_23 = K2Node_InputActionEvent_Key_23;
	Parms.K2Node_CustomEvent_ItemTemplate = K2Node_CustomEvent_ItemTemplate;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_12 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_12;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation = CallFunc_AutomaticallyPlaceItem_PlacedLocation;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue = CallFunc_AutomaticallyPlaceItem_ReturnValue;
	Parms.CallFunc_DropItem_ReturnValue = CallFunc_DropItem_ReturnValue;
	Parms.K2Node_CustomEvent_NewFocused = K2Node_CustomEvent_NewFocused;
	Parms.K2Node_CustomEvent_Force_1 = K2Node_CustomEvent_Force_1;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation_1 = CallFunc_AutomaticallyPlaceItem_PlacedLocation_1;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue_1 = CallFunc_AutomaticallyPlaceItem_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_13 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_14 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_14;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue_2 = CallFunc_IsMoveInputIgnored_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsIcarus_Character_2 = K2Node_DynamicCast_AsIcarus_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.K2Node_InputActionEvent_Key_24 = K2Node_InputActionEvent_Key_24;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_InputActionEvent_Key_25 = K2Node_InputActionEvent_Key_25;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_15 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue_5 = CallFunc_IsAlive_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_InputActionEvent_Key_26 = K2Node_InputActionEvent_Key_26;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_InputActionEvent_Key_27 = K2Node_InputActionEvent_Key_27;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_TotalCount = K2Node_CustomEvent_TotalCount;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Count = K2Node_CustomEvent_Count;
	Parms.K2Node_CustomEvent_Inventory_1 = K2Node_CustomEvent_Inventory_1;
	Parms.K2Node_CustomEvent_slot = K2Node_CustomEvent_slot;
	Parms.K2Node_CustomEvent_Unload = K2Node_CustomEvent_Unload;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetInventoryID_ReturnValue_2 = CallFunc_GetInventoryID_ReturnValue_2;
	Parms.CallFunc_BreakInventoryIDEnum_Name = CallFunc_BreakInventoryIDEnum_Name;
	Parms.CallFunc_BreakInventoryIDEnum_Index = CallFunc_BreakInventoryIDEnum_Index;
	Parms.K2Node_InputActionEvent_Key_28 = K2Node_InputActionEvent_Key_28;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CustomEvent_Variation = K2Node_CustomEvent_Variation;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_CustomEvent_NewSelection = K2Node_CustomEvent_NewSelection;
	Parms.K2Node_CustomEvent_Force = K2Node_CustomEvent_Force;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_2 = CallFunc_K2_SetActorLocation_SweepHitResult_2;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_2 = CallFunc_K2_SetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue = CallFunc_External_CanPerformInputAction_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_CustomEvent_NewSlot = K2Node_CustomEvent_NewSlot;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_FocusSlot_FocusedItem = CallFunc_FocusSlot_FocusedItem;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Recipe = K2Node_CustomEvent_Recipe;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_16 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_16;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_AllowHotbarScroll_Allow = CallFunc_AllowHotbarScroll_Allow;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_FindCraftingRecipe_Paths = CallFunc_FindCraftingRecipe_Paths;
	Parms.CallFunc_FindCraftingRecipe_ReturnValue = CallFunc_FindCraftingRecipe_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_AllowHotbarScroll_Allow_1 = CallFunc_AllowHotbarScroll_Allow_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue_3 = CallFunc_IsMoveInputIgnored_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsIcarus_Character_3 = K2Node_DynamicCast_AsIcarus_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_6 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_6;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_7 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_7;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue_1 = CallFunc_DoesContainerMatchTagQuery_ReturnValue_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue_2 = CallFunc_DoesContainerMatchTagQuery_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_17 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_17;
	Parms.CallFunc_IsAlive_ReturnValue_6 = CallFunc_IsAlive_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_IsShowingRadialMenu_ShowingRadialMenu = CallFunc_IsShowingRadialMenu_ShowingRadialMenu;
	Parms.CallFunc_IsShowingStaticWidget_Menu_Open_1 = CallFunc_IsShowingStaticWidget_Menu_Open_1;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CustomEvent_IsDead = K2Node_CustomEvent_IsDead;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Photo_Camera = K2Node_DynamicCast_AsBP_Photo_Camera;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_8 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_8;
	Parms.K2Node_Event_Inventory = K2Node_Event_Inventory;
	Parms.K2Node_Event_bShowStoreAll = K2Node_Event_bShowStoreAll;
	Parms.K2Node_Event_bShowTakeAll = K2Node_Event_bShowTakeAll;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBP_Mount_Base = K2Node_DynamicCast_AsBP_Mount_Base;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2 = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_29 = K2Node_InputActionEvent_Key_29;
	Parms.K2Node_InputActionEvent_Key_30 = K2Node_InputActionEvent_Key_30;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsUMG_User_Interface = K2Node_DynamicCast_AsUMG_User_Interface;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Rotation_1 = K2Node_CustomEvent_Rotation_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.CallFunc_IfCheatsEnabled_Paths = CallFunc_IfCheatsEnabled_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_18 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_18;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Seat_Base = K2Node_DynamicCast_AsBP_Seat_Base;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_9 = CallFunc_K2_GetPawn_ReturnValue_9;
	Parms.CallFunc_IsMoveInputIgnored_ReturnValue_4 = CallFunc_IsMoveInputIgnored_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsIcarus_Character_4 = K2Node_DynamicCast_AsIcarus_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.K2Node_CustomEvent_Rocket = K2Node_CustomEvent_Rocket;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_Player_Drop_Ship = K2Node_DynamicCast_AsBP_Player_Drop_Ship;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_19 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_19;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_1 = CallFunc_IsLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.K2Node_Event_bHide = K2Node_Event_bHide;
	Parms.K2Node_Event_bHideDebug = K2Node_Event_bHideDebug;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_20 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_20;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetMouseSensitivityParameters_Yaw = CallFunc_GetMouseSensitivityParameters_Yaw;
	Parms.CallFunc_GetMouseSensitivityParameters_Pitch = CallFunc_GetMouseSensitivityParameters_Pitch;
	Parms.CallFunc_GetMouseSensitivityParameters_AimYaw = CallFunc_GetMouseSensitivityParameters_AimYaw;
	Parms.CallFunc_GetMouseSensitivityParameters_AimPitch = CallFunc_GetMouseSensitivityParameters_AimPitch;
	Parms.CallFunc_IsAlive_ReturnValue_7 = CallFunc_IsAlive_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_21 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_21;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_10 = CallFunc_K2_GetPawn_ReturnValue_10;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_2 = CallFunc_GetConfirmationWindow_ConfirmationWidget_2;
	Parms.K2Node_InputActionEvent_Key_31 = K2Node_InputActionEvent_Key_31;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_2 = CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_2;
	Parms.CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_2 = CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.K2Node_InputActionEvent_Key_32 = K2Node_InputActionEvent_Key_32;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_1 = K2Node_MakeStruct_ConfirmationPopupDetails_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_9 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_9;
	Parms.CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid = CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_10 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_10;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_11 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_11;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_2 = CallFunc_IsLocalPlayerController_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_3 = CallFunc_IsLocalPlayerController_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_IsPlayerOutOfBounds_ReturnValue = CallFunc_IsPlayerOutOfBounds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_4 = CallFunc_IsLocalPlayerController_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_12 = K2Node_SwitchEnum_CmpSuccess_12;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_IsShowingStaticWidget_Menu_Open_2 = CallFunc_IsShowingStaticWidget_Menu_Open_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_11 = CallFunc_K2_GetPawn_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_Photo_Camera_1 = K2Node_DynamicCast_AsBP_Photo_Camera_1;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_22 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_22;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_23 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_23;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_12 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_12;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue_1 = CallFunc_GetAttachedToSeat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_IsMountSeat_ReturnValue = CallFunc_IsMountSeat_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_IsSeated_ReturnValue_1 = CallFunc_IsSeated_ReturnValue_1;
	Parms.K2Node_Event_WidgetClass = K2Node_Event_WidgetClass;
	Parms.K2Node_Event_LinkedActor = K2Node_Event_LinkedActor;
	Parms.K2Node_Event_bFocusCameraOnActor = K2Node_Event_bFocusCameraOnActor;
	Parms.K2Node_Event_Rocket = K2Node_Event_Rocket;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_2 = K2Node_MakeStruct_ConfirmationPopupDetails_2;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_IsPlayerOutOfBounds_ReturnValue_1 = CallFunc_IsPlayerOutOfBounds_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_24 = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_24;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_Quest = K2Node_Event_Quest;
	Parms.K2Node_Event_MissionRowHandle = K2Node_Event_MissionRowHandle;
	Parms.K2Node_Event_bIsCurrentQuest = K2Node_Event_bIsCurrentQuest;
	Parms.K2Node_Event_ReceivedResources = K2Node_Event_ReceivedResources;
	Parms.CallFunc_QueueNotification_self_CastInput = CallFunc_QueueNotification_self_CastInput;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_13 = K2Node_SwitchEnum_CmpSuccess_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_QueueNotification_self_CastInput_1 = CallFunc_QueueNotification_self_CastInput_1;
	Parms.CallFunc_IsPlayerOutOfBounds_ReturnValue_2 = CallFunc_IsPlayerOutOfBounds_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_K2_GetPawn_ReturnValue_12 = CallFunc_K2_GetPawn_ReturnValue_12;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_3 = CallFunc_K2_SetActorLocation_SweepHitResult_3;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_3 = CallFunc_K2_SetActorLocation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_Items = K2Node_CustomEvent_Items;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_3 = K2Node_MakeStruct_ConfirmationPopupDetails_3;
	Parms.CallFunc_QueueNotification_self_CastInput_2 = CallFunc_QueueNotification_self_CastInput_2;
	Parms.CallFunc_CorpseUnstuck_CorpseAvailable = CallFunc_CorpseUnstuck_CorpseAvailable;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_Event_NumCredits = K2Node_Event_NumCredits;
	Parms.K2Node_Event_NumExperience = K2Node_Event_NumExperience;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_Event_SourceItem = K2Node_Event_SourceItem;
	Parms.CallFunc_QueueNotification_self_CastInput_3 = CallFunc_QueueNotification_self_CastInput_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_13 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_13;
	Parms.K2Node_Event_ItemData_1 = K2Node_Event_ItemData_1;
	Parms.CallFunc_DisplayDynamicWidget_ReturnValue = CallFunc_DisplayDynamicWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Bag_Inventory = K2Node_DynamicCast_AsUMG_Bag_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_Event_ItemData = K2Node_Event_ItemData;
	Parms.K2Node_Event_ProgressAmount = K2Node_Event_ProgressAmount;
	Parms.CallFunc_ShouldShowChallengePopup_ShouldShow = CallFunc_ShouldShowChallengePopup_ShouldShow;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnLootAll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnLootAll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnLootAll__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::ServerMessage__DelegateSignature(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ServerMessage__DelegateSignature");

	Params::ABP_IcarusPlayerControllerSurvival_C_ServerMessage__DelegateSignature_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnRevived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerControllerSurvival_C::OnRevived__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "OnRevived__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.LocalMessageArrived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::LocalMessageArrived__DelegateSignature(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "LocalMessageArrived__DelegateSignature");

	Params::ABP_IcarusPlayerControllerSurvival_C_LocalMessageArrived__DelegateSignature_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ChatMessageArrived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTChatMessage               Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_IcarusPlayerControllerSurvival_C::ChatMessageArrived__DelegateSignature(const struct FTChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerControllerSurvival_C", "ChatMessageArrived__DelegateSignature");

	Params::ABP_IcarusPlayerControllerSurvival_C_ChatMessageArrived__DelegateSignature_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}

}


