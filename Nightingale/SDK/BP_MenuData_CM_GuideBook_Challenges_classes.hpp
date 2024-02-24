#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Challenges.BP_MenuData_CM_GuideBook_Challenges_C
class UBP_MenuData_CM_GuideBook_Challenges_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Challenges_C* GetDefaultObj();

	void PostInitialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, int32 CallFunc_Array_Length_ReturnValue, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess);
	void CreateAndQuickAddEntry(TScriptInterface<class IChallengeDefinition> ChallengeDefinition, class UNWXMenuDataEntryChallenge* ChallengeEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UChallengeDataAsset* K2Node_DynamicCast_AsChallenge_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UNWXMenuDataEntryChallenge* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Challenge, bool K2Node_DynamicCast_bSuccess_1);
};

}


