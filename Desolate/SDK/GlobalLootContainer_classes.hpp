#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x38E - 0x36E)
// BlueprintGeneratedClass GlobalLootContainer.GlobalLootContainer_C
class AGlobalLootContainer_C : public AGenericContainer_C
{
public:
	uint8                                        Pad_144E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                             OpenSound;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RespawnTime;                                       // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RespawnTimeLeft;                                   // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LootTimeSeconds;                                   // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnAvailable;                                   // 0x38C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAlwaysRespawn;                                    // 0x38D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGlobalLootContainer_C* GetDefaultObj();

	void GetServerTimeStamp(int32* Timestamp, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetServerTimeStamp_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsExplored(int32 CallFunc_GetServerTimeStamp_Timestamp, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsExplored_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void CheckDestroy(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void SaveLoot(int32 CallFunc_GetServerTimeStamp_Timestamp, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FItemPlaceholderSave>& CallFunc_GetSaveInfo_ReturnValue);
	void CreateInventory(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASHInventory* CallFunc_FinishSpawningActor_ReturnValue);
	void LoadLoot(class ASHPlayerCharacter* Character, int32 CallFunc_GetServerTimeStamp_Timestamp, int32 CallFunc_GetServerTimeStamp_Timestamp_1, int32 CallFunc_GetServerTimeStamp_Timestamp_2, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FItemPlaceholderSave>& CallFunc_GetSaveInfo_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GenerateFromLists_Success, bool CallFunc_IsValid_ReturnValue);
	void OnInventoryContentChanged(class AActor* Inventory);
	void ReceiveTick(float DeltaSeconds);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GlobalLootContainer(int32 EntryPoint, class AActor* K2Node_CustomEvent_Inventory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, TArray<struct FQuestItemSpawnInfo>& CallFunc_GetLootForObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, const struct FQuestItemSpawnInfo& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanBeExtended_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


