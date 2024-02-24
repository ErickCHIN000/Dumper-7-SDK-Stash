#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_FoodSystem.bp_FoodSystem_C
// (Actor)

class UClass* Abp_FoodSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_FoodSystem_C");

	return Clss;
}


// bp_FoodSystem_C bp_FoodSystem.Default__bp_FoodSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_FoodSystem_C* Abp_FoodSystem_C::GetDefaultObj()
{
	static class Abp_FoodSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_FoodSystem_C*>(Abp_FoodSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_FoodSystem.bp_FoodSystem_C.CreateButtonBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void Abp_FoodSystem_C::CreateButtonBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "CreateButtonBindings");

	Params::Abp_FoodSystem_C_CreateButtonBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.CreateReports
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuestFound                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestResultStat            K2Node_MakeStruct_QuestResultStat                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestResultStat            K2Node_MakeStruct_QuestResultStat_1                              (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation               (UObjectWrapper)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation_1             (UObjectWrapper)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation_2             (UObjectWrapper)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_FoodSystem_C::CreateReports(bool QuestFound, const struct FQuestResultStat& K2Node_MakeStruct_QuestResultStat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_Add_ReturnValue, const struct FQuestResultStat& K2Node_MakeStruct_QuestResultStat_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 Temp_int_Loop_Counter_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMissionReportRequiredInformation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCompanionEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation_1, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation_2, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "CreateReports");

	Params::Abp_FoodSystem_C_CreateReports_Params Parms{};

	Parms.QuestFound = QuestFound;
	Parms.K2Node_MakeStruct_QuestResultStat = K2Node_MakeStruct_QuestResultStat;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.K2Node_MakeStruct_QuestResultStat_1 = K2Node_MakeStruct_QuestResultStat_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation = K2Node_MakeStruct_MissionReportRequiredInformation;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation_1 = K2Node_MakeStruct_MissionReportRequiredInformation_1;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation_2 = K2Node_MakeStruct_MissionReportRequiredInformation_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.CreateFoodWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_FoodSystem_C::CreateFoodWidget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_FoodPanel_v3_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "CreateFoodWidget");

	Params::Abp_FoodSystem_C_CreateFoodWidget_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.SetCameraTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Companion                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_FoodSystem_C::SetCameraTransform(class FName CompanionID, class AActor* Companion, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "SetCameraTransform");

	Params::Abp_FoodSystem_C_SetCameraTransform_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.Companion = Companion;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.CreateReportWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEventMapIconData>   K2Node_MakeArray_Array                                           (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ReportMission_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// struct FInnerEvent                 K2Node_MakeStruct_InnerEvent                                     (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item_1                                        (None)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue_1                    (ReferenceParm)
// struct FCompanionEntry             CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ReportMission_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_FoodSystem_C::CreateReportWidget(int32 CompanionID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FEventMapIconData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_ReportMission_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FCompanionEntry& CallFunc_Array_Get_Item, const struct FInnerEvent& K2Node_MakeStruct_InnerEvent, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FInnerEvent& CallFunc_Array_Get_Item_1, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_1, const struct FCompanionEntry& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_ReportMission_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "CreateReportWidget");

	Params::Abp_FoodSystem_C_CreateReportWidget_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_InnerEvent = K2Node_MakeStruct_InnerEvent;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue_1 = CallFunc_GetAvailableCompanions_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.GetEventsToShow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInnerEvent>         Result1                                                          (Parm, OutParm)
// TArray<struct FInnerEvent>         Result                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_FoodSystem_C::GetEventsToShow(TArray<struct FInnerEvent>* Result1, const TArray<struct FInnerEvent>& Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_GetCurrentDay_ReturnValue, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FInnerEvent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "GetEventsToShow");

	Params::Abp_FoodSystem_C_GetEventsToShow_Params Parms{};

	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result1 != nullptr)
		*Result1 = std::move(Parms.Result1);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputAccept
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputAcceptReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputAcceptReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputAcceptReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputDPadLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputDPadRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputL1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputL1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputL1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputR1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputR1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputR1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputRightStick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_FoodSystem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "ReceiveTick");

	Params::Abp_FoodSystem_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputR2
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputR2Release
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputR2Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputR2Release");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputFaceDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputFaceUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputBack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::InputBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.Internal_R2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::Internal_R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "Internal_R2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.Internal_FaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::Internal_FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "Internal_FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputUpDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_FoodSystem_C::InputUpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputUpDown");

	Params::Abp_FoodSystem_C_InputUpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.InputLeftRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_FoodSystem_C::InputLeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "InputLeftRight");

	Params::Abp_FoodSystem_C_InputLeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.ExecuteUbergraph_bp_FoodSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Axis_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Axis                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_FoodSystem_C::ExecuteUbergraph_bp_FoodSystem(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FInnerEvent& CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float K2Node_Event_DeltaSeconds, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool Temp_bool_IsClosed_Variable_2, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, float K2Node_Event_Axis_1, bool CallFunc_Less_FloatFloat_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Event_Axis, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1, bool CallFunc_BooleanAND_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "ExecuteUbergraph_bp_FoodSystem");

	Params::Abp_FoodSystem_C_ExecuteUbergraph_bp_FoodSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_SetNewMovementState_ReturnValue_2 = CallFunc_SetNewMovementState_ReturnValue_2;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.CallFunc_GetPlayerController_ReturnValue_12 = CallFunc_GetPlayerController_ReturnValue_12;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.K2Node_Event_Axis_1 = K2Node_Event_Axis_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue_3 = CallFunc_SetNewMovementState_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Axis = K2Node_Event_Axis;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCGHud_AsCGHUD = CallFunc_GetCGHud_AsCGHUD;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetCGHud_AsCGHUD_1 = CallFunc_GetCGHud_AsCGHUD_1;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.CompanionReportFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSkip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_FoodSystem_C::CompanionReportFinished__DelegateSignature(class FName CompanionName, bool FromSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "CompanionReportFinished__DelegateSignature");

	Params::Abp_FoodSystem_C_CompanionReportFinished__DelegateSignature_Params Parms{};

	Parms.CompanionName = CompanionName;
	Parms.FromSkip = FromSkip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_FoodSystem.bp_FoodSystem_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_FoodSystem_C::Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_FoodSystem_C", "Finished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


