#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0x2B2 - 0x258)
// BlueprintGeneratedClass GenericCraftTable.GenericCraftTable_C
class AGenericCraftTable_C : public ASHCraftTable
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         CraftEquipmentVolume;                              // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHQuestSpawnerComponent*              NormalQuestSpawner;                                // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHQuestSpawnerComponent*              BrokenQuestSpawner;                                // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        RepairTime;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    CurrentRepairingCharacter;                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RepairBenchBrokenTaskTag;                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RepairBenchNormalTaskTag;                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanGiveQuest;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCanCompleteQuest;                                 // 0x2B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericCraftTable_C* GetDefaultObj();

	bool ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter);
	class USoundCue* GetExplorationSound();
	float GetExplorationTime();
	bool IsExplored(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool StartExploration(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool StopExploration(class ASHPlayerCharacter* PlayerCharacter);
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, bool Temp_bool_Variable, const struct FS_Selection& Temp_struct_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, enum class ECraftTableState Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FText K2Node_Select_Default_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1, const struct FS_Selection& K2Node_Select_Default_2, const struct FS_Selection& K2Node_Select_Default_3);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateStateFromCompleteQuests(enum class ECraftTableState ResultState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class USHQuestGraph* CallFunc_Array_Get_Item, const class FString& CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetCompleteGraphNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class USHQuestGraph* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue_1, TArray<class FName>& CallFunc_GetCompleteGraphNames_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1);
	void CanCompleteQuest(bool* Result, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, TArray<class USHQuestTask*>& CallFunc_GetAllTasksByTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USHQuestTask*>& CallFunc_GetAllTasksByTag_ReturnValue_1, class USHQuestTask* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsComplete_ReturnValue, class URepairCraftTable_C* K2Node_DynamicCast_AsRepair_Craft_Table, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class USHQuestTask* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsComplete_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class URepairCraftTable_C* K2Node_DynamicCast_AsRepair_Craft_Table_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void CanGiveQuest(bool* Result, bool CallFunc_CanSpawnQuestGraphs_ReturnValue, bool CallFunc_CanSpawnQuestGraphs_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void UnlockActor(class FText Password);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void BndEvt__CraftEquipmentVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__CraftEquipmentVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnCraftRequiredEquipmentUpdated();
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericCraftTable(int32 EntryPoint, bool CallFunc_CanCompleteQuest_Result, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class FText K2Node_Event_Password, float K2Node_Event_DeltaSeconds, class ASHPlayerCharacter* K2Node_Event_Character_1, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanGiveQuest_Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanCompleteQuest_Result_1, bool CallFunc_CanGiveQuest_Result_1, bool CallFunc_CanCompleteQuest_Result_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CanGiveQuest_Result_2);
};

}


