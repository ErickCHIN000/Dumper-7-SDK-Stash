#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ch_npc_00.ba_ch_npc_00_C
// (Actor, Pawn)

class UClass* Aba_ch_npc_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ch_npc_00_C");

	return Clss;
}


// ba_ch_npc_00_C ba_ch_npc_00.Default__ba_ch_npc_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ch_npc_00_C* Aba_ch_npc_00_C::GetDefaultObj()
{
	static class Aba_ch_npc_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ch_npc_00_C*>(Aba_ch_npc_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ch_npc_00.ba_ch_npc_00_C.GetAdditionalActorsToHighlight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class AActor*> Aba_ch_npc_00_C::GetAdditionalActorsToHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "GetAdditionalActorsToHighlight");

	Params::Aba_ch_npc_00_C_GetAdditionalActorsToHighlight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.GetMeshesToSkipDuringHighlight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UPrimitiveComponent>>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, UObjectWrapper)

TArray<TSoftObjectPtr<class UPrimitiveComponent>> Aba_ch_npc_00_C::GetMeshesToSkipDuringHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "GetMeshesToSkipDuringHighlight");

	Params::Aba_ch_npc_00_C_GetMeshesToSkipDuringHighlight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ShouldIgnoreScan
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ch_npc_00_C::ShouldIgnoreScan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ShouldIgnoreScan");

	Params::Aba_ch_npc_00_C_ShouldIgnoreScan_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.GetForcedMeshesToHighlight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USkeletalMeshComponent*> Aba_ch_npc_00_C::GetForcedMeshesToHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "GetForcedMeshesToHighlight");

	Params::Aba_ch_npc_00_C_GetForcedMeshesToHighlight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.GetResourceType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EScannableResourceType  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EScannableResourceType Aba_ch_npc_00_C::GetResourceType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "GetResourceType");

	Params::Aba_ch_npc_00_C_GetResourceType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ShouldBeHightlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPerk_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Aba_ch_npc_00_C::ShouldBeHightlighted(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ShouldBeHightlighted");

	Params::Aba_ch_npc_00_C_ShouldBeHightlighted_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CheckPerk_ValueA = CallFunc_CheckPerk_ValueA;
	Parms.CallFunc_CheckPerk_ValueB = CallFunc_CheckPerk_ValueB;
	Parms.CallFunc_CheckPerk_ReturnValue = CallFunc_CheckPerk_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateStartingTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::UpdateStartingTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateStartingTransform");

	Params::Aba_ch_npc_00_C_UpdateStartingTransform_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.CheckParametersForDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Nameofdialoguebools                                              (Edit, BlueprintVisible)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CompanionSystemGetLoyaltyLevel_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HACkGetCurrentDayAdjustedForEvening_Day                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMissionReportRequiredInformation>CallFunc_GetMissionInfosForDay_ReturnValue                       (ReferenceParm)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMissionReportRequiredInformationCallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::CheckParametersForDialogue(const TArray<class FString>& Nameofdialoguebools, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_4, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_5, bool K2Node_DynamicCast_bSuccess_5, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_6, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_7, bool K2Node_DynamicCast_bSuccess_7, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_8, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_10, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_9, bool K2Node_DynamicCast_bSuccess_9, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_10, bool K2Node_DynamicCast_bSuccess_10, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_11, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_12, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_12, bool K2Node_DynamicCast_bSuccess_12, int32 CallFunc_CompanionSystemGetLoyaltyLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_13, const class FString& CallFunc_Array_Get_Item, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_13, bool K2Node_DynamicCast_bSuccess_13, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, float CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_HACkGetCurrentDayAdjustedForEvening_Day, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_14, TArray<struct FMissionReportRequiredInformation>& CallFunc_GetMissionInfosForDay_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_14, bool K2Node_DynamicCast_bSuccess_14, const struct FMissionReportRequiredInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_HaveBuffCompanion_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_15, bool CallFunc_HaveBuffCompanion_ReturnValue_1, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_15, bool K2Node_DynamicCast_bSuccess_15, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, bool CallFunc_HaveBuffCompanion_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, bool CallFunc_HaveBuffCompanion_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "CheckParametersForDialogue");

	Params::Aba_ch_npc_00_C_CheckParametersForDialogue_Params Parms{};

	Parms.Nameofdialoguebools = Nameofdialoguebools;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_1 = K2Node_DynamicCast_AsCGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_2 = K2Node_DynamicCast_AsCGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_3 = K2Node_DynamicCast_AsCGGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_4 = K2Node_DynamicCast_AsCGGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_5 = K2Node_DynamicCast_AsCGGame_Instance_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_6 = K2Node_DynamicCast_AsCGGame_Instance_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_7 = K2Node_DynamicCast_AsCGGame_Instance_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_8 = K2Node_DynamicCast_AsCGGame_Instance_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_9 = CallFunc_GetGameInstance_ReturnValue_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_10 = CallFunc_GetGameInstance_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_9 = K2Node_DynamicCast_AsCGGame_Instance_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_10 = K2Node_DynamicCast_AsCGGame_Instance_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_11 = CallFunc_GetGameInstance_ReturnValue_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_11 = K2Node_DynamicCast_AsCGGame_Instance_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetGameInstance_ReturnValue_12 = CallFunc_GetGameInstance_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_12 = K2Node_DynamicCast_AsCGGame_Instance_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_CompanionSystemGetLoyaltyLevel_ReturnValue = CallFunc_CompanionSystemGetLoyaltyLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_13 = CallFunc_GetGameInstance_ReturnValue_13;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_13 = K2Node_DynamicCast_AsCGGame_Instance_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue = CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_HACkGetCurrentDayAdjustedForEvening_Day = CallFunc_HACkGetCurrentDayAdjustedForEvening_Day;
	Parms.CallFunc_GetGameInstance_ReturnValue_14 = CallFunc_GetGameInstance_ReturnValue_14;
	Parms.CallFunc_GetMissionInfosForDay_ReturnValue = CallFunc_GetMissionInfosForDay_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_14 = K2Node_DynamicCast_AsCGGame_Instance_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_15 = CallFunc_GetGameInstance_ReturnValue_15;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_1 = CallFunc_HaveBuffCompanion_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_15 = K2Node_DynamicCast_AsCGGame_Instance_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_2 = CallFunc_HaveBuffCompanion_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue_3 = CallFunc_HaveBuffCompanion_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.CheckIfProceedWithPassiveDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CurrentMin                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_npc_00_C*             ClosestNPC                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_ch_npc_00_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_npc_00_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::CheckIfProceedWithPassiveDialogue(bool* Result, float CurrentMin, class Aba_ch_npc_00_C* ClosestNPC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class Aba_ch_npc_00_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class Aba_ch_npc_00_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "CheckIfProceedWithPassiveDialogue");

	Params::Aba_ch_npc_00_C_CheckIfProceedWithPassiveDialogue_Params Parms{};

	Parms.CurrentMin = CurrentMin;
	Parms.ClosestNPC = ClosestNPC;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.IsNPCAbleToInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::IsNPCAbleToInteract(bool* Result, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "IsNPCAbleToInteract");

	Params::Aba_ch_npc_00_C_IsNPCAbleToInteract_Params Parms{};

	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::Show(bool Enable, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ECollisionEnabled Temp_byte_Variable_2, enum class ECollisionEnabled Temp_byte_Variable_3, enum class ECollisionEnabled K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class ECollisionEnabled K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Show");

	Params::Aba_ch_npc_00_C_Show_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.SetInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::SetInteraction(bool Interaction, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "SetInteraction");

	Params::Aba_ch_npc_00_C_SetInteraction_Params Parms{};

	Parms.Interaction = Interaction;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.SetTagVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiblity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::SetTagVisibility(bool Visiblity, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "SetTagVisibility");

	Params::Aba_ch_npc_00_C_SetTagVisibility_Params Parms{};

	Parms.Visiblity = Visiblity;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag = K2Node_DynamicCast_AsBp_Minimap_Tag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::UserConstructionScript(TArray<class AActor*>& Temp_object_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UserConstructionScript");

	Params::Aba_ch_npc_00_C_UserConstructionScript_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.FixRotTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::FixRotTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "FixRotTL__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.FixRotTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::FixRotTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "FixRotTL__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.OnDeathInternal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      InOwner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              InDamageEvent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void Aba_ch_npc_00_C::OnDeathInternal(class AActor* InOwner, struct FCGDamageEvent& InDamageEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "OnDeathInternal");

	Params::Aba_ch_npc_00_C_OnDeathInternal_Params Parms{};

	Parms.InOwner = InOwner;
	Parms.InDamageEvent = InDamageEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateMinimap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::UpdateMinimap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateMinimap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.BndEvt__ForceDialogueComponent4_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_ch_npc_00_C::BndEvt__ForceDialogueComponent4_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "BndEvt__ForceDialogueComponent4_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Aba_ch_npc_00_C_BndEvt__ForceDialogueComponent4_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.BndEvt__MinimapDiscoverComponent4_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_ch_npc_00_C::BndEvt__MinimapDiscoverComponent4_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "BndEvt__MinimapDiscoverComponent4_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Aba_ch_npc_00_C_BndEvt__MinimapDiscoverComponent4_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateBlendPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::UpdateBlendPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateBlendPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceDialogue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForcePosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  MetaData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Repeat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::UpdateDialogue(bool ForceDialogue, bool ForcePosition, class UDataTable* Data, class UDataTable* MetaData, class FName StartingRow, bool Repeat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateDialogue");

	Params::Aba_ch_npc_00_C_UpdateDialogue_Params Parms{};

	Parms.ForceDialogue = ForceDialogue;
	Parms.ForcePosition = ForcePosition;
	Parms.Data = Data;
	Parms.MetaData = MetaData;
	Parms.StartingRow = StartingRow;
	Parms.Repeat = Repeat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_ch_npc_00_C::BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Aba_ch_npc_00_C_BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ch_npc_00_C::BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::Aba_ch_npc_00_C_BndEvt__PassiveDialogueComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ImportantQuestIntroduction
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::ImportantQuestIntroduction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ImportantQuestIntroduction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.HideNPC
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::HideNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "HideNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ShowNPC
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::ShowNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ShowNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.In base
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::In_base()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "In base");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Hide Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::Hide_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Hide Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.Show Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::Show_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "Show Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ChooseRanomEveningDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::ChooseRanomEveningDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ChooseRanomEveningDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.DeleteCurrentRandomDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::DeleteCurrentRandomDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "DeleteCurrentRandomDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.PassiveDialogueEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::PassiveDialogueEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "PassiveDialogueEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.StopPassiveDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::StopPassiveDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "StopPassiveDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.BlockPassiveDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Block                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::BlockPassiveDialogue(bool Block)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "BlockPassiveDialogue");

	Params::Aba_ch_npc_00_C_BlockPassiveDialogue_Params Parms{};

	Parms.Block = Block;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.FixRot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::FixRot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "FixRot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateStartingTransform_CPP
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::UpdateStartingTransform_CPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateStartingTransform_CPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.FixStartingRotation_CPP
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::FixStartingRotation_CPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "FixStartingRotation_CPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.EnableDialogueHighlight
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::EnableDialogueHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "EnableDialogueHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.DisableDialogueHighgliht
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::DisableDialogueHighgliht()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "DisableDialogueHighgliht");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateDialogueLightPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::UpdateDialogueLightPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateDialogueLightPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.StartNPCDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::StartNPCDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "StartNPCDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.PlayerHasBlendToDesiredPosition_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::PlayerHasBlendToDesiredPosition_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "PlayerHasBlendToDesiredPosition_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.InteractionHasHappend
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::InteractionHasHappend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "InteractionHasHappend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.UpdateRotateInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::UpdateRotateInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "UpdateRotateInPlace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ResetRotateInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::ResetRotateInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ResetRotateInPlace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.OnDialogueEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::OnDialogueEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "OnDialogueEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ComponentOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              InDamageEvent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void Aba_ch_npc_00_C::OnDeath(class AActor* ComponentOwner, struct FCGDamageEvent& InDamageEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "OnDeath");

	Params::Aba_ch_npc_00_C_OnDeath_Params Parms{};

	Parms.ComponentOwner = ComponentOwner;
	Parms.InDamageEvent = InDamageEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.ExecuteUbergraph_ba_ch_npc_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>CallFunc_LockInteraction_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_1         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_2         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>CallFunc_UnlockInteraction_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InOwner                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              K2Node_Event_InDamageEvent                                       (ConstParm, ContainsInstancedReference)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_3         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_2                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ForceDialogue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ForcePosition                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_CustomEvent_Data                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_CustomEvent_MetaData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StartingRow                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Repeat                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_4         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>CallFunc_UnlockInteraction_self_CastInput_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInteractable>CallFunc_LockInteraction_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNPCAbleToInteract_Result                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameCharacter              CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfProceedWithPassiveDialogue_Result                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomUnusedDialogueStart_Dialogue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRandomUnusedDialogueStart_Result                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Block                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameCharacter              CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_2                           (None)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddWorldOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info                                    (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FActorInfo                  CallFunc_K2_GetActorInfo_Info_1                                  (None)
// bool                               CallFunc_K2_GetActorInfo_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECGMap                  CallFunc_GetCurrentMap_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAIController*             CallFunc_GetCGAIController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAIController*             CallFunc_GetCGAIController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionAssignedToBuildingSlot_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNPCAbleToInteract_Result_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAbleToInteract_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAIController*             CallFunc_GetCGAIController_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveCompanion_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_ComponentOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              K2Node_CustomEvent_InDamageEvent                                 (ConstParm, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// TArray<class ADialogueFunctionManager*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ADialogueFunctionManager*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueActorReference     K2Node_MakeStruct_DialogueActorReference                         (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_InteractableCustom_01_NoSave_C*K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_5         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::ExecuteUbergraph_ba_ch_npc_00(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& Temp_string_Variable, bool Temp_bool_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Array_Index_Variable, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInteractable> CallFunc_LockInteraction_self_CastInput, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInteractable> CallFunc_UnlockInteraction_self_CastInput, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess_3, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_1, bool K2Node_DynamicCast_bSuccess_4, class AActor* K2Node_Event_InOwner, const struct FCGDamageEvent& K2Node_Event_InDamageEvent, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsValid_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_3, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_2, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool K2Node_CustomEvent_ForceDialogue, bool K2Node_CustomEvent_ForcePosition, class UDataTable* K2Node_CustomEvent_Data, class UDataTable* K2Node_CustomEvent_MetaData, class FName K2Node_CustomEvent_StartingRow, bool K2Node_CustomEvent_Repeat, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_4, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInteractable> CallFunc_UnlockInteraction_self_CastInput_1, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_2, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class IInteractable> CallFunc_LockInteraction_self_CastInput_1, bool CallFunc_IsNPCAbleToInteract_Result, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FGameCharacter& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckIfProceedWithPassiveDialogue_Result, bool CallFunc_EqualEqual_NameName_ReturnValue, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_3, bool K2Node_DynamicCast_bSuccess_8, class FText CallFunc_Conv_NameToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlaying_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class FName CallFunc_GetRandomUnusedDialogueStart_Dialogue, bool CallFunc_GetRandomUnusedDialogueStart_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, bool CallFunc_IsPlaying_ReturnValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool K2Node_CustomEvent_Block, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_9, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, const struct FGameCharacter& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FText CallFunc_Conv_NameToText_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_10, const struct FHitResult& CallFunc_K2_AddWorldOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class FText K2Node_Select_Default, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info_1, bool CallFunc_K2_GetActorInfo_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, enum class ECGMap CallFunc_GetCurrentMap_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class ACGAIController* CallFunc_GetCGAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_4, bool K2Node_DynamicCast_bSuccess_9, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class ACGAIController* CallFunc_GetCGAIController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, bool CallFunc_IsCompanionAssignedToBuildingSlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_11, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_IsNPCAbleToInteract_Result_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, class ACGAIController* CallFunc_GetCGAIController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, bool CallFunc_RemoveCompanion_ReturnValue, class AActor* K2Node_CustomEvent_ComponentOwner, const struct FCGDamageEvent& K2Node_CustomEvent_InDamageEvent, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_1, class FText K2Node_Select_Default_1, TArray<class ADialogueFunctionManager*>& CallFunc_GetAllActorsOfClass_OutActors, class ADialogueFunctionManager* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FDialogueActorReference& K2Node_MakeStruct_DialogueActorReference, bool CallFunc_Greater_IntInt_ReturnValue, class Aba_InteractableCustom_01_NoSave_C* K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_5, bool K2Node_DynamicCast_bSuccess_10, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "ExecuteUbergraph_ba_ch_npc_00");

	Params::Aba_ch_npc_00_C_ExecuteUbergraph_ba_ch_npc_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LockInteraction_self_CastInput = CallFunc_LockInteraction_self_CastInput;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_1 = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_2 = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_UnlockInteraction_self_CastInput = CallFunc_UnlockInteraction_self_CastInput;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag = K2Node_DynamicCast_AsBp_Minimap_Tag;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag_1 = K2Node_DynamicCast_AsBp_Minimap_Tag_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_InOwner = K2Node_Event_InOwner;
	Parms.K2Node_Event_InDamageEvent = K2Node_Event_InDamageEvent;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_3 = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_3 = K2Node_ComponentBoundEvent_OverlappedComponent_3;
	Parms.K2Node_ComponentBoundEvent_OtherActor_3 = K2Node_ComponentBoundEvent_OtherActor_3;
	Parms.K2Node_ComponentBoundEvent_OtherComp_3 = K2Node_ComponentBoundEvent_OtherComp_3;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_3 = K2Node_ComponentBoundEvent_OtherBodyIndex_3;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_2 = K2Node_ComponentBoundEvent_bFromSweep_2;
	Parms.K2Node_ComponentBoundEvent_SweepResult_2 = K2Node_ComponentBoundEvent_SweepResult_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.K2Node_CustomEvent_ForceDialogue = K2Node_CustomEvent_ForceDialogue;
	Parms.K2Node_CustomEvent_ForcePosition = K2Node_CustomEvent_ForcePosition;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.K2Node_CustomEvent_MetaData = K2Node_CustomEvent_MetaData;
	Parms.K2Node_CustomEvent_StartingRow = K2Node_CustomEvent_StartingRow;
	Parms.K2Node_CustomEvent_Repeat = K2Node_CustomEvent_Repeat;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_4 = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_UnlockInteraction_self_CastInput_1 = CallFunc_UnlockInteraction_self_CastInput_1;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag_2 = K2Node_DynamicCast_AsBp_Minimap_Tag_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_LockInteraction_self_CastInput_1 = CallFunc_LockInteraction_self_CastInput_1;
	Parms.CallFunc_IsNPCAbleToInteract_Result = CallFunc_IsNPCAbleToInteract_Result;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_IsPlaying_ReturnValue_1 = CallFunc_IsPlaying_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CheckIfProceedWithPassiveDialogue_Result = CallFunc_CheckIfProceedWithPassiveDialogue_Result;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag_3 = K2Node_DynamicCast_AsBp_Minimap_Tag_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsPlaying_ReturnValue_2 = CallFunc_IsPlaying_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_GetRandomUnusedDialogueStart_Dialogue = CallFunc_GetRandomUnusedDialogueStart_Dialogue;
	Parms.CallFunc_GetRandomUnusedDialogueStart_Result = CallFunc_GetRandomUnusedDialogueStart_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.CallFunc_IsPlaying_ReturnValue_3 = CallFunc_IsPlaying_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_Block = K2Node_CustomEvent_Block;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_NameToText_ReturnValue_2 = CallFunc_Conv_NameToText_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_K2_AddWorldOffset_SweepHitResult = CallFunc_K2_AddWorldOffset_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_GetActorInfo_Info = CallFunc_K2_GetActorInfo_Info;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue = CallFunc_K2_GetActorInfo_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorInfo_Info_1 = CallFunc_K2_GetActorInfo_Info_1;
	Parms.CallFunc_K2_GetActorInfo_ReturnValue_1 = CallFunc_K2_GetActorInfo_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCurrentMap_ReturnValue = CallFunc_GetCurrentMap_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetCGAIController_ReturnValue = CallFunc_GetCGAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag_4 = K2Node_DynamicCast_AsBp_Minimap_Tag_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetCGAIController_ReturnValue_1 = CallFunc_GetCGAIController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_IsCompanionAssignedToBuildingSlot_ReturnValue = CallFunc_IsCompanionAssignedToBuildingSlot_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_IsNPCAbleToInteract_Result_1 = CallFunc_IsNPCAbleToInteract_Result_1;
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
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_IsPlayerAbleToInteract_ReturnValue = CallFunc_IsPlayerAbleToInteract_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue_4 = CallFunc_IsPlaying_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetCGAIController_ReturnValue_2 = CallFunc_GetCGAIController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_RemoveCompanion_ReturnValue = CallFunc_RemoveCompanion_ReturnValue;
	Parms.K2Node_CustomEvent_ComponentOwner = K2Node_CustomEvent_ComponentOwner;
	Parms.K2Node_CustomEvent_InDamageEvent = K2Node_CustomEvent_InDamageEvent;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_DialogueActorReference = K2Node_MakeStruct_DialogueActorReference;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_5 = K2Node_DynamicCast_AsBa_Interactable_Custom_01_No_Save_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.OnShowHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ch_npc_00_C::OnShowHide__DelegateSignature(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "OnShowHide__DelegateSignature");

	Params::Aba_ch_npc_00_C_OnShowHide__DelegateSignature_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ch_npc_00.ba_ch_npc_00_C.RotateInPlaceReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ch_npc_00_C::RotateInPlaceReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ch_npc_00_C", "RotateInPlaceReset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


