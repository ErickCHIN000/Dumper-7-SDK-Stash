#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x1D0 - 0x148)
// BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C
class UCE_PlayerShared_Skills_Confuse_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class UTeamComponent*                        TeamComp;                                          // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeam*                                 ConfusedActorTeam;                                 // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         ConfusedActor;                                     // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAttributeEffectData                  TrackEffect;                                       // 0x168(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           TrackHandle;                                       // 0x1B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                WhoConfusedMe;                                     // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeam*                                 OriginalTeam;                                      // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCE_PlayerShared_Skills_Confuse_C* GetDefaultObj();

	void On_Confuse_Target_death(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void StartTeamSwap();
	void StopTeamSwap();
	void ExecuteUbergraph_CE_PlayerShared_Skills_Confuse(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UTeamComponent* CallFunc_GetTeamComponent_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_RemoveGameplayTag_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess2, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess3, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue);
};

}


