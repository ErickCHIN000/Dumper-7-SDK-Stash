#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_RoomUpgrades.ba_RoomUpgrades_C
// (Actor)

class UClass* Aba_RoomUpgrades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_RoomUpgrades_C");

	return Clss;
}


// ba_RoomUpgrades_C ba_RoomUpgrades.Default__ba_RoomUpgrades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_RoomUpgrades_C* Aba_RoomUpgrades_C::GetDefaultObj()
{
	static class Aba_RoomUpgrades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_RoomUpgrades_C*>(Aba_RoomUpgrades_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_RoomUpgrades_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "GetObjectsToSave");

	Params::Aba_RoomUpgrades_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_RoomUpgrades_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "HasObjectsToSave");

	Params::Aba_RoomUpgrades_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_RoomUpgrades_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_RoomUpgrades_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InternalLoadingFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InternalLoadingFinished(class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InternalLoadingFinished");

	Params::Aba_RoomUpgrades_C_InternalLoadingFinished_Params Parms{};

	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.SetRoomParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SkillTree                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_RoomWidgetController_C*>Controllers                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        RoomDataKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoomDescKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::SetRoomParams(class UClass* SkillTree, TArray<class Abp_RoomWidgetController_C*>& Controllers, class FName RoomDataKey, class FName RoomDescKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "SetRoomParams");

	Params::Aba_RoomUpgrades_C_SetRoomParams_Params Parms{};

	Parms.SkillTree = SkillTree;
	Parms.Controllers = Controllers;
	Parms.RoomDataKey = RoomDataKey;
	Parms.RoomDescKey = RoomDescKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InternalLoadingSaveFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      SlotUsedArray                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// class Abp_RoomWidgetController_C*  LocalWidgetController                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_RoomSlot_C*              LocalSlot                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              AllActorsFromLevel                                               (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_RoomSlot_C*              K2Node_DynamicCast_AsBa_Room_Slot                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_RoomWidgetController_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class Abp_RoomWidgetController_C*  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsFromLevel_ReturnValue                       (ReferenceParm)

void Aba_RoomUpgrades_C::InternalLoadingSaveFinished(const TArray<int32>& SlotUsedArray, class Abp_RoomWidgetController_C* LocalWidgetController, class Aba_RoomSlot_C* LocalSlot, const TArray<class AActor*>& AllActorsFromLevel, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class Aba_RoomSlot_C* K2Node_DynamicCast_AsBa_Room_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class Abp_RoomWidgetController_C* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class Abp_RoomWidgetController_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsFromLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InternalLoadingSaveFinished");

	Params::Aba_RoomUpgrades_C_InternalLoadingSaveFinished_Params Parms{};

	Parms.SlotUsedArray = SlotUsedArray;
	Parms.LocalWidgetController = LocalWidgetController;
	Parms.LocalSlot = LocalSlot;
	Parms.AllActorsFromLevel = AllActorsFromLevel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBa_Room_Slot = K2Node_DynamicCast_AsBa_Room_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsFromLevel_ReturnValue = CallFunc_GetAllActorsFromLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InternalLoadLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_RoomOrigin_C*            OriginActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_InvertTransform_ReturnValue                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FRoomLoadInformation        K2Node_MakeStruct_RoomLoadInformation                            (NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_RoomOrigin_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Aba_RoomOrigin_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRoomLoadInformation        K2Node_MakeStruct_RoomLoadInformation_1                          (NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevel*                      CallFunc_GetPersistentLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InternalLoadLevel(class FName LevelName, bool FromSave, class Aba_RoomOrigin_C* OriginActor, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FRoomLoadInformation& K2Node_MakeStruct_RoomLoadInformation, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class Aba_RoomOrigin_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_RoomOrigin_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRoomLoadInformation& K2Node_MakeStruct_RoomLoadInformation_1, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class ULevel* CallFunc_GetPersistentLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InternalLoadLevel");

	Params::Aba_RoomUpgrades_C_InternalLoadLevel_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.FromSave = FromSave;
	Parms.OriginActor = OriginActor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_InvertTransform_ReturnValue = CallFunc_InvertTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_MakeStruct_RoomLoadInformation = K2Node_MakeStruct_RoomLoadInformation;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_RoomLoadInformation_1 = K2Node_MakeStruct_RoomLoadInformation_1;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.CallFunc_GetPersistentLevel_ReturnValue = CallFunc_GetPersistentLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.HaveValidLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Aba_RoomUpgrades_C::HaveValidLevel(bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "HaveValidLevel");

	Params::Aba_RoomUpgrades_C_HaveValidLevel_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.LoadRoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromSave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevel*                      CallFunc_GetPersistentLevel_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRoomLoadInformation        K2Node_MakeStruct_RoomLoadInformation                            (NoDestructor)

void Aba_RoomUpgrades_C::LoadRoom(class FName Level, bool FromSave, bool CallFunc_Not_PreBool_ReturnValue, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, class ULevel* CallFunc_GetPersistentLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FRoomLoadInformation& K2Node_MakeStruct_RoomLoadInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "LoadRoom");

	Params::Aba_RoomUpgrades_C_LoadRoom_Params Parms{};

	Parms.Level = Level;
	Parms.FromSave = FromSave;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_GetPersistentLevel_ReturnValue = CallFunc_GetPersistentLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_RoomLoadInformation = K2Node_MakeStruct_RoomLoadInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_Enter_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_Enter_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_Enter_K2Node_InputKeyEvent_6");

	Params::Aba_RoomUpgrades_C_InpActEvt_Enter_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_5");

	Params::Aba_RoomUpgrades_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");

	Params::Aba_RoomUpgrades_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3");

	Params::Aba_RoomUpgrades_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2");

	Params::Aba_RoomUpgrades_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_F_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_F_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_F_K2Node_InputKeyEvent_1");

	Params::Aba_RoomUpgrades_C_InpActEvt_F_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0");

	Params::Aba_RoomUpgrades_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.Show Skill Tree
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_Room_Controller_C*       RoomController                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::Show_Skill_Tree(class Aba_Room_Controller_C* RoomController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "Show Skill Tree");

	Params::Aba_RoomUpgrades_C_Show_Skill_Tree_Params Parms{};

	Parms.RoomController = RoomController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.Hide Skill Tree
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::Hide_Skill_Tree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "Hide Skill Tree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0");

	Params::Aba_RoomUpgrades_C_InpAxisEvt_Character_ForwardBackward_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.InpAxisEvt_Character_RightLeft_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::InpAxisEvt_Character_RightLeft_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "InpAxisEvt_Character_RightLeft_K2Node_InputAxisEvent_1");

	Params::Aba_RoomUpgrades_C_InpAxisEvt_Character_RightLeft_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.BuySelectedUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::BuySelectedUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "BuySelectedUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.ResetSkillTree
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::ResetSkillTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "ResetSkillTree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.Set Skill Tree Level Unlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_RoomUpgrades_C::Set_Skill_Tree_Level_Unlocked(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "Set Skill Tree Level Unlocked");

	Params::Aba_RoomUpgrades_C_Set_Skill_Tree_Level_Unlocked_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.ExecuteUbergraph_ba_RoomUpgrades
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// TArray<class FName>                CallFunc_GetRandomUpgrades_RandomUpgrades                        (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeBought_Can                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_MapEnumItemNamesToEResourceType_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MapEnumItemNamesToEResourceType_Found                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ItemEnumToNameID_Name_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Room_Controller_C*       K2Node_CustomEvent_RoomController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeMain_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Normal2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2DSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<float>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeMain_C*    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_Spawnable_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeMain_C*    K2Node_DynamicCast_AsWid_Room_Skill_Tree_Main                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeOption_C*  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_4                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_RoomUpgrades_C::ExecuteUbergraph_ba_RoomUpgrades(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_RemoveChild_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, TArray<float>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_ItemEnumToNameID_Name, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, TArray<class FName>& CallFunc_GetRandomUpgrades_RandomUpgrades, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanBeBought_Can, int32 Temp_int_Array_Index_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key_4, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item_1, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, class FName CallFunc_ItemEnumToNameID_Name_1, class Aba_Room_Controller_C* K2Node_CustomEvent_RoomController, const struct FKey& K2Node_InputKeyEvent_Key_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_RoomSkillTreeMain_C* CallFunc_Create_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_2, TArray<float>& K2Node_MakeArray_Array_3, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_6, bool CallFunc_NotEqual_NameName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UWid_RoomSkillTreeMain_C* CallFunc_Create_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, class FName CallFunc_GetLevelFromActor_ReturnValue, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, int32 K2Node_CustomEvent_Level, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UWid_RoomSkillTreeMain_C* K2Node_DynamicCast_AsWid_Room_Skill_Tree_Main, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_3, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float CallFunc_Remove_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, float CallFunc_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "ExecuteUbergraph_ba_RoomUpgrades");

	Params::Aba_RoomUpgrades_C_ExecuteUbergraph_ba_RoomUpgrades_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.CallFunc_GetRandomUpgrades_RandomUpgrades = CallFunc_GetRandomUpgrades_RandomUpgrades;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanBeBought_Can = CallFunc_CanBeBought_Can;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Value = CallFunc_MapEnumItemNamesToEResourceType_Value;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Found = CallFunc_MapEnumItemNamesToEResourceType_Found;
	Parms.CallFunc_ItemEnumToNameID_Name_1 = CallFunc_ItemEnumToNameID_Name_1;
	Parms.K2Node_CustomEvent_RoomController = K2Node_CustomEvent_RoomController;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Normal2D_ReturnValue = CallFunc_Normal2D_ReturnValue;
	Parms.CallFunc_VSize2DSquared_ReturnValue = CallFunc_VSize2DSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetLevelFromActor_ReturnValue = CallFunc_GetLevelFromActor_ReturnValue;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Room_Skill_Tree_Main = K2Node_DynamicCast_AsWid_Room_Skill_Tree_Main;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_RemoveChild_ReturnValue_1 = CallFunc_RemoveChild_ReturnValue_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue_2 = CallFunc_RemoveChild_ReturnValue_2;
	Parms.CallFunc_RemoveChild_ReturnValue_3 = CallFunc_RemoveChild_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_1 = CallFunc_AddChildToCanvas_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_RoomUpgrades.ba_RoomUpgrades_C.OnSkillTreeReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_RoomUpgrades_C::OnSkillTreeReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_RoomUpgrades_C", "OnSkillTreeReset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


