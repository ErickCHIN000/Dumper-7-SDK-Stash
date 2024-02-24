#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3F0 - 0x2F0)
// BlueprintGeneratedClass BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C
class ABP_Deep_Mining_Ore_Deposit_C : public ABP_Deep_Mining_Ore_Deposit_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightableComponent*               Highlightable;                                     // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<struct FOreDepositRowHandle, float>     RandomDesiredRatios;                               // 0x300(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CachedTotalWeight;                                 // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FOreDepositRowHandle, float>     CachedCurrentRatios;                               // 0x358(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       TransformsToVector;                                // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                HighestDropship;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    NodeMaterial;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOreDepositRowHandle                  LocalMaterialType;                                 // 0x3C8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDesertDeposit;                                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInCave;                                          // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    RockMaterial;                                      // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deep_Mining_Ore_Deposit_C* GetDefaultObj();

	void AssignType(int32 ListID, const struct FOreDepositRowHandle& Temp_struct_Variable, const struct FOreDepositRowHandle& Temp_struct_Variable_1, const struct FOreDepositRowHandle& Temp_struct_Variable_2, const struct FOreDepositRowHandle& Temp_struct_Variable_3, const struct FOreDepositRowHandle& Temp_struct_Variable_4, const struct FOreDepositRowHandle& Temp_struct_Variable_5, const struct FOreDepositRowHandle& Temp_struct_Variable_6, const struct FOreDepositRowHandle& Temp_struct_Variable_7, const struct FOreDepositRowHandle& Temp_struct_Variable_8, const struct FOreDepositRowHandle& Temp_struct_Variable_9, const struct FOreDepositRowHandle& Temp_struct_Variable_10, const struct FOreDepositRowHandle& Temp_struct_Variable_11, const struct FOreDepositRowHandle& Temp_struct_Variable_12, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, int32 Temp_int_Variable, const struct FOreDepositRowHandle& Temp_struct_Variable_13, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, const struct FOreDepositRowHandle& Temp_struct_Variable_14, const struct FOreDepositRowHandle& Temp_struct_Variable_15, const struct FOreDepositRowHandle& Temp_struct_Variable_16, const struct FOreDepositRowHandle& Temp_struct_Variable_17, const struct FOreDepositRowHandle& Temp_struct_Variable_18, const struct FOreDepositRowHandle& Temp_struct_Variable_19, const struct FOreDepositRowHandle& Temp_struct_Variable_20, const struct FOreDepositRowHandle& Temp_struct_Variable_21, const struct FOreDepositRowHandle& Temp_struct_Variable_22, int32 Temp_int_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FOreDepositRowHandle& K2Node_Select_Default, const struct FOreDepositRowHandle& K2Node_Select_Default_1);
	TSoftObjectPtr<class UMaterialInterface> GetNodeMaterial(struct FOreDeposit& OreDeposit, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default_1, TSoftObjectPtr<class UMaterialInterface> K2Node_Select_Default_2);
	void BiomeUpdated(bool NewIsDesert, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue, bool CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnRep_LocalMaterialType(const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void OnLoaded_86CD52A24289457079E06B9B6B8EE0DB(class UObject* Loaded);
	void OnLoaded_7A08DCE545D5B147504667BA88769DFC(class UObject* Loaded);
	void SetMaterialType(const struct FOreDepositRowHandle& Row);
	void IcarusBeginPlay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, const struct FOreDepositRowHandle& K2Node_CustomEvent_Row, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UMaterialInterface> CallFunc_GetNodeMaterial_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit_1, enum class EValid CallFunc_GetOreDepositStruct_Paths_1, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable_1, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


