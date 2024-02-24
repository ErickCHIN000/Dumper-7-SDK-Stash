#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x800 - 0x7C1)
// BlueprintGeneratedClass BP_Extractor.BP_Extractor_C
class ABP_Extractor_C : public ABP_Drill_Base_C
{
public:
	uint8                                        Pad_4CB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Extractor_ventFX1;                              // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Extractor_ventFX;                               // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Extractor_engineFX;                             // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Extractor_baseFX;                               // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Extractor_C* GetDefaultObj();

	bool ShouldOverrideTargetNeutrality(class AActor* TargetActor, bool* bIsTargetHostile);
	bool IsCriticalHitDisabled();
	TArray<struct FCriticalHitLocation> GetCriticalHitBones();
	struct FAIRelationshipsRowHandle GetRelationshipData();
	int32 GetTargetAlertness();
	struct FVector GetTargetLocation();
	bool IsActorAlive();
	bool IsHidden();
	void UpdateMiningRateFromResourceType(class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void ActiveStateUpdated();
	void IsFunctional(bool* bFunctional, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void OnItemAdded(class UInventory* Inventory, int32 Location);
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Extractor(int32 EntryPoint, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_HasFillableResource_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<class UInventory*>& K2Node_MakeArray_Array, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_3, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


