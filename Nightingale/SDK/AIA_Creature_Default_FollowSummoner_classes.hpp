#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xD0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Default_FollowSummoner.AIA_Creature_Default_FollowSummoner_C
class UAIA_Creature_Default_FollowSummoner_C : public UAIA_Creature_Ambient_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAIC_Creature_NPC_C*                   NPC;                                               // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Distance;                                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_Default_FollowSummoner_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, class UObject* CallFunc_TryGetBlackboardObject_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardObject_Branches, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Default_FollowSummoner(int32 EntryPoint, class AActor* K2Node_Event_Target, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetCreatureDispersionRadius_self_CastInput, float CallFunc_GetCreatureDispersionRadius_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue);
};

}


