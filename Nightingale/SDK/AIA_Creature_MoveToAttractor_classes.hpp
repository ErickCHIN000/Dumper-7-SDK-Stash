#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_MoveToAttractor.AIA_Creature_MoveToAttractor_C
class UAIA_Creature_MoveToAttractor_C : public UAIA_Creature_Ambient_C
{
public:
	class AAIC_Creature_Wildlife_Apex_C*         GiantController;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_MoveToAttractor_C* GetDefaultObj();

	float GetNormalizedScore(class AActor* Target);
	bool Initialize(class AAIController* CallFunc_GetOwnerAIController_ReturnValue, class AAIC_Creature_Wildlife_Apex_C* K2Node_DynamicCast_AsAIC_Creature_Wildlife_Apex, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Initialize_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, class AActor* LCurrentOffering, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


