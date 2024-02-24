#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xD0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Encounter_RecallBell.AIA_Creature_Encounter_RecallBell_C
class UAIA_Creature_Encounter_RecallBell_C : public UAIA_Creature_Ambient_C
{
public:
	class FString                                OwnerID;                                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_Creature_NPC_C*                    BPNPC;                                             // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_Encounter_RecallBell_C* GetDefaultObj();

	float GetNormalizedScore(class AActor* Target);
	bool Initialize(class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Initialize_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


