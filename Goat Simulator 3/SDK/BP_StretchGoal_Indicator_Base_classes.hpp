#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5D (0x28D - 0x230)
// BlueprintGeneratedClass BP_StretchGoal_Indicator_Base.BP_StretchGoal_Indicator_Base_C
class ABP_StretchGoal_Indicator_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_StretchGoal_Base_C*                StretchGoal;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicRingMaterial;                               // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInstance>      UnlockedRingMaterial;                              // 0x260(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        RingMaterialIndex;                                 // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretchGoalStates                CurrentGoalState;                                  // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StretchGoal_Indicator_Base_C* GetDefaultObj();

	void Update_Ring_Material_Value(int32 TokenCount, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicRingMaterial_RingMaterial, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue);
	void CreateDynamicRingMaterial(class UMaterialInstanceDynamic** RingMaterial, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ActivateGoalStateEffects(enum class EStretchGoalStates State);
	void ReceiveBeginPlay();
	void TotalChaosChanged(int32 TotalChaos);
	void ExecuteUbergraph_BP_StretchGoal_Indicator_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EStretchGoalStates K2Node_CustomEvent_State, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, int32 K2Node_CustomEvent_TotalChaos, int32 CallFunc_GetTotalWorldChaosAcquired_ReturnValue);
};

}


