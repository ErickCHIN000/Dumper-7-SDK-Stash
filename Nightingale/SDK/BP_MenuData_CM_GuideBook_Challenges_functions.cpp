#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Challenges.BP_MenuData_CM_GuideBook_Challenges_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Challenges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Challenges_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Challenges_C BP_MenuData_CM_GuideBook_Challenges.Default__BP_MenuData_CM_GuideBook_Challenges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Challenges_C* UBP_MenuData_CM_GuideBook_Challenges_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Challenges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Challenges_C*>(UBP_MenuData_CM_GuideBook_Challenges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Challenges.BP_MenuData_CM_GuideBook_Challenges_C.PostInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Challenges_C::PostInitialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, int32 CallFunc_Array_Length_ReturnValue, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Challenges_C", "PostInitialize");

	Params::UBP_MenuData_CM_GuideBook_Challenges_C_PostInitialize_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Challenges.BP_MenuData_CM_GuideBook_Challenges_C.CreateAndQuickAddEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IChallengeDefinition>ChallengeDefinition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryChallenge*  ChallengeEntry                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UChallengeDataAsset*         K2Node_DynamicCast_AsChallenge_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryChallenge*  K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Challenges_C::CreateAndQuickAddEntry(TScriptInterface<class IChallengeDefinition> ChallengeDefinition, class UNWXMenuDataEntryChallenge* ChallengeEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UChallengeDataAsset* K2Node_DynamicCast_AsChallenge_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UNWXMenuDataEntryChallenge* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Challenges_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_GuideBook_Challenges_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.ChallengeDefinition = ChallengeDefinition;
	Parms.ChallengeEntry = ChallengeEntry;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_Data_Asset = K2Node_DynamicCast_AsChallenge_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


