#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x798 - 0x774)
// BlueprintGeneratedClass BP_LiquidContainerBase.BP_LiquidContainerBase_C
class ABP_LiquidContainerBase_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3594[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  FillableTypeText;                                  // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  CapacityText;                                      // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFillableComponent*                    Fillable;                                          // 0x790(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LiquidContainerBase_C* GetDefaultObj();

	void Deployable_Interact(class AActor* Interactor);
	void UpdateFillableTypeText(bool CallFunc_IsValid_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateCapacityText(int32 CallFunc_GetStoredUnits_ReturnValue, const struct FFillableData& CallFunc_GetFillableData_FillableData, enum class EDataValid CallFunc_GetFillableData_Paths, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Interact(class AActor* Instigator, int32 HeldItemMaxCapacity, int32 HeldItemCapacity, class UFillableComponent* HeldItemFillable, const struct FItemDynamicData& DynamicData, const struct FFillableData& FillableData, const struct FItemData& HeldItemData, class ABP_IcarusPlayerCharacterSurvival_C* Player, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFillableComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_IsFull_ReturnValue, bool CallFunc_FillableSupports_Supports, int32 CallFunc_GetStoredUnits_ReturnValue, enum class EIcarusResourceType CallFunc_GetFillableType_ReturnValue_1, int32 CallFunc_AddUnits_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue_1, const struct FFillableData& CallFunc_GetFillableData_OutData, bool CallFunc_GetFillableData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_RemoveUnits_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFull_ReturnValue_1, bool CallFunc_IsFull_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_AddUnits_ReturnValue_1, int32 CallFunc_RemoveUnits_ReturnValue_1);
	void ReceiveBeginPlay();
	void UpdateDebugText();
	void ExecuteUbergraph_BP_LiquidContainerBase(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


