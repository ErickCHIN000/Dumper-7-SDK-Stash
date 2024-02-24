#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x98 - 0x90)
// BlueprintGeneratedClass AIAR_Creature_NotFearless.AIAR_Creature_NotFearless_C
class UAIAR_Creature_NotFearless_C : public UAIActionRequirement
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAR_Creature_NotFearless_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool Initialize(class APawn* CallFunc_GetOwnerPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
};

}


