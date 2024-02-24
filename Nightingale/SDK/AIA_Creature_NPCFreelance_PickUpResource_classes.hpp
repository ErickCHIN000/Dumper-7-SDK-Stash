#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0xD0 - 0xC2)
// BlueprintGeneratedClass AIA_Creature_NPCFreelance_PickUpResource.AIA_Creature_NPCFreelance_PickUpResource_C
class UAIA_Creature_NPCFreelance_PickUpResource_C : public UAIA_Creature_NPCFreelance_C
{
public:
	uint8                                        Pad_5BD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistance;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCFreelance_PickUpResource_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, class ABP_ItemProxy_C* LItemProxy, TScriptInterface<class IItemContainer> LNPCContainer, const struct FVector& LSearchLocation, double LAdjustedMaxDist, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class ABP_ItemProxy_C* K2Node_DynamicCast_AsBP_Item_Proxy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanAddItem_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double K2Node_VariableSet_LAdjustedMaxDist_ImplicitCast);
	float GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
};

}


