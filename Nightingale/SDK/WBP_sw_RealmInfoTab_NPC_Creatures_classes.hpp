#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C
class UWBP_sw_RealmInfoTab_NPC_Creatures_C : public UNWXUserWidget
{
public:
	class UWBP_sw_RealmInfo_ApexCreatureInfo_C*  ApexCreatureHolder;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_ListOfLabels_C*      CreatureLabelHolder;                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_GenericImageWithTitleHolder_C* NPCImgHolder;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            CreatureTable;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_RealmInfoTab_NPC_Creatures_C* GetDefaultObj();

	void UpdateCreatureList(class FText Current_Creature, TArray<class FText>& Creature_List, bool* Successful, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateCreatureHolder(TArray<struct FDataTableRowHandle>& Creature_Row, class UDataTable* LST_CreatureInfo, const TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& Creature_Classes, const TArray<class FText>& CreatureNamesFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, const struct FS_CreatureInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1, bool CallFunc_UpdateCreatureList_Successful, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FText CallFunc_BreakCreatureUIInfo_CreatureName, TSoftObjectPtr<class UTexture2D> CallFunc_BreakCreatureUIInfo_CreatureIcon, int32 CallFunc_BreakCreatureUIInfo_FerocityMin, int32 CallFunc_BreakCreatureUIInfo_FerocityMax, TArray<enum class EBiomeID>& CallFunc_BreakCreatureUIInfo_Biomes, bool CallFunc_BreakCreatureUIInfo_ShowNameplate, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& CallFunc_Map_Keys_Keys, bool CallFunc_UpdateCreatureList_Successful_1, bool CallFunc_HasTag_ReturnValue);
	void UpdateApexCreature(TSoftObjectPtr<class UTexture2D> Icon, class FText Description);
	void UpdateNPCHolder(TArray<struct FNWXNPCNarrativeData>& NPCInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNWXNPCNarrativeData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQuestGiverTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


