#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5E (0x36E - 0x310)
// BlueprintGeneratedClass GenericContainer.GenericContainer_C
class AGenericContainer_C : public ASHItemContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh_0;                                      // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASHInventory*                          ContainerInventory;                                // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Inventory_Type;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FS_LootTableRecord>            LootLists;                                         // 0x330(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FS_LootRecord>                 SingleItemList;                                    // 0x340(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x350(0x18)(Edit, BlueprintVisible)
	bool                                         bSomeoneSearching;                                 // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsExplored;                                       // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         IsLocked;                                          // 0x36A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_LockedType                      LockLevel;                                         // 0x36B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAchievementComplete;                              // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsEmptySaved;                                     // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericContainer_C* GetDefaultObj();

	bool ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter);
	bool StopExploration(class ASHPlayerCharacter* PlayerCharacter);
	class USoundCue* GetExplorationSound();
	float GetExplorationTime();
	bool StartExploration(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_StartOpeningSearch_Started);
	bool IsExplored();
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText CallFunc_FCheckEmpty_Name, class FText CallFunc_FCheckEmpty_Name_1, class FText CallFunc_FCheckEmpty_Name_2, class FText CallFunc_FCheckEmpty_Name_3, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable_3, class FText Temp_text_Variable_7, bool Temp_bool_Variable_4, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable_5, class FText K2Node_Select_Default, const struct FS_Selection& K2Node_MakeStruct_S_Selection, bool K2Node_SwitchEnum_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, class USHPlayerStat_Skills* CallFunc_GetSkills_Skills, class FText K2Node_Select_Default_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1, bool CallFunc_CanPickThirdLevelLock_ReturnValue, bool CallFunc_CanPickSecondLevelLock_ReturnValue, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, const struct FS_Selection& K2Node_MakeStruct_S_Selection_2, class FText K2Node_Select_Default_5, const struct FS_Selection& K2Node_MakeStruct_S_Selection_3);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	void FCheckEmpty(class FText* Name, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetInventoryReadOnly(bool NewValue, bool CallFunc_IsValid_ReturnValue);
	void GetInventoryReadOnly(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void CanBeExtended(class ASHCharacter* Character, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanBeExtended_ReturnValue);
	void StopOpeningSearch();
	void StartOpeningSearch(class ASHCharacter* Character, bool* Started, TScriptInterface<class IICharacterStatObserver_C> K2Node_DynamicCast_AsICharacter_Stat_Observer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeExtended_Result, class USHPlayerStat_Skills* CallFunc_GetSkills_Skills, bool CallFunc_CanPickThirdLevelLock_ReturnValue, bool CallFunc_CanPickSecondLevelLock_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void AddItem(class UClass* ItemClass, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AddItems(TArray<struct FS_LootTableRecord>& LootTable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LootTableRecord& CallFunc_Array_Get_Item, bool CallFunc_ShouldHappen_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Roll_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnOurInventory(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASHInventory* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_GenerateFromLists_Success);
	void SpawnItem(class UClass* ItemClass, class ASHInventory* Inventory, class UClass* K2Node_ClassDynamicCast_AsGeneric_Ammo_Box, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_AddPlaceholderFromClass_ReturnValue_1);
	void GenerateFromSingleItems(class ASHInventory* TargetInventory, int32 RolledCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FS_LootRecord& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class ASHItem* K2Node_DynamicCast_AsSHItem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GenerateFromLists(class ASHInventory* TargetInventory, class ASHPlayerCharacter* PlayerCharacter, bool* Success, bool HasGenerated, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetLootListChanceModifier_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FS_LootTableRecord& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Roll_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void GetSelection();
	void HasAccess(class ACharacter* Char, bool* HasAccess);
	void UserConstructionScript();
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void UnlockActor(class FText Password);
	void ReceiveBeginPlay();
	void OnUseActor(class ASHPlayerCharacter* Character);
	void Outline(bool IsHighlighted);
	void QuestOutline(bool IsHighlighted);
	void OnContainedOpened(class ASHPlayerCharacter* PlayerCharacter);
	void ExecuteUbergraph_GenericContainer(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_2, class ASHPlayerCharacter* K2Node_Event_Character_1, class FText K2Node_Event_Password, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class ASHPlayerCharacter* K2Node_Event_Character, bool K2Node_Event_isHighlighted_1, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeExtended_ReturnValue, bool K2Node_Event_isHighlighted, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, class ASHPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Variable_3, bool CallFunc_BooleanOR_ReturnValue_2, int32 K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class USHInventorySlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_IsNotEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


