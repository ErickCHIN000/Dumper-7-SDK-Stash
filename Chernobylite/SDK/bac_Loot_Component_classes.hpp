#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0xEA - 0xB0)
// BlueprintGeneratedClass bac_Loot_Component.bac_Loot_Component_C
class Ubac_Loot_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FText                                  NameOfTheLootable;                                 // 0xB8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class Aba_ia_Interactable_Loot_02_C*         Loot;                                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_ia_Interactable_Loot_02_C*         CustomLoot;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SpawnSocket;                                       // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLootEnabled;                                     // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DestroyLootWhenDespawned;                          // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class Ubac_Loot_Component_C* GetDefaultObj();

	void SetIsLootEnabled(bool IsLootEnabled);
	void Spawn(const struct FDataTableRowHandle& LootSetID, int32 LootType, class UStaticMeshComponent* AttachTo, float CustomOffset, int32 MinItemsToSpawn, int32 MaxItemsToSpawn, bool UseAdditionalLootPerDifficulty);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_bac_Loot_Component(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& K2Node_CustomEvent_LootSetID, int32 K2Node_CustomEvent_LootType, class UStaticMeshComponent* K2Node_CustomEvent_AttachTo, float K2Node_CustomEvent_CustomOffset, int32 K2Node_CustomEvent_MinItemsToSpawn, int32 K2Node_CustomEvent_MaxItemsToSpawn, bool K2Node_CustomEvent_UseAdditionalLootPerDifficulty, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 K2Node_Select_Default, class Aba_ia_Interactable_Loot_02_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSt_LootSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue, int32 K2Node_Select_Default_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class Aba_ia_Interactable_Loot_02_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


