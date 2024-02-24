#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xD8 - 0xC2)
// BlueprintGeneratedClass AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C
class UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C : public UAIA_Creature_NPCFreelance_C
{
public:
	uint8                                        Pad_2302[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinDistance;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C* GetDefaultObj();

	bool CheckOwnerRequirements(class UAILoadoutComponentBase* LLoadout, bool CallFunc_TargetInventoryEntryCooldown_ReturnValue, bool CallFunc_HasAnyResource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAILoadoutComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, class UInWorldItemContainerComponent* TEMPInventory, const TArray<struct FInventoryEntry>& TEMPItems, class UAILoadoutComponentBase* TEMPLoadout, const TArray<class UInWorldItemContainerComponent*>& TEMPContainerList, TScriptInterface<class IItemContainer> LInventory, class UInWorldItemContainerComponent* LAIInventory, class AActor* LTarget, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UInWorldItemContainerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, bool CallFunc_CanAddAnyItem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	float GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, double CallFunc_GetNormalizedDistanceScore_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsPermissionActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


