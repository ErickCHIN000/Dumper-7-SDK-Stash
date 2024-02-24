#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x2E8 - 0x220)
// BlueprintGeneratedClass BP_StormMode_PlayerStart.BP_StormMode_PlayerStart_C
class ABP_StormMode_PlayerStart_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor1;                                       // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor8;                                       // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor7;                                       // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor6;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor5;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor4;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor3;                                       // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor2;                                       // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Candles;                                     // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Root;                                        // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeArea                Area;                                              // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x294(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AAdvancedEnemySpawner_C>> SpawnersToDisable;                                 // 0x2A0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class AAdvancedEnemySpawner_C*>       SpawnersToDisable_HardRef;                         // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	bool                                         DisableOnlyIf;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        EnemyClassToDisable;                               // 0x2C8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                        DisableSpawners_Debug;                             // 0x2D8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StormMode_PlayerStart_C* GetDefaultObj();

	void DisableEnemySpawner(class AAdvancedEnemySpawner_C* Spawner, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
	void DestroyEnemyWhenSpawned(class AAdvancedEnemySpawner_C* Spawner, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void DisableEnemySpawners(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess, class AAdvancedEnemySpawner_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void GetTeleportTransform(struct FTransform* Transform, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void GetTeleportData(class FName* ID, struct FVector* Loc, struct FRotator* Rot, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void SetUniqueID(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue);
	void UserConstructionScript();
	void DisableSpawners_Event();
	void ExecuteUbergraph_BP_StormMode_PlayerStart(int32 EntryPoint);
};

}


