#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Building.BP_MenuData_CM_GuideBook_Building_C
class UBP_MenuData_CM_GuideBook_Building_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Building_C* GetDefaultObj();

	void PostInitialize(class UClass* LPermLockedEntriesFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FStructureAssetReference>& CallFunc_GatherAllUnlockableStructures_OutStructureReferences, int32 Temp_int_Loop_Counter_Variable, const struct FStructureAssetReference& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnStructureSkillsUnlocked(TArray<struct FStructureAssetReference>& NewlyUnlockedStructures, class UNWXMenuDataEntry* MenuDataEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FStructureAssetReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_2);
	void CreateAndQuickAddEntry(const struct FStructureAssetReference& StructureAssetReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Building_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building, bool K2Node_DynamicCast_bSuccess);
};

}


