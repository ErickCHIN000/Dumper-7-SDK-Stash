#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C
class UBP_Modifier_LavaHunter_FlameOn_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_LavaHunter_FlameOn_C* GetDefaultObj();

	void ModifierTick(float DeltaTime);
	void InitComponent();
	void OnDamagedReturned(int32 ReturnedAmount, class AActor* ActorReceivingDamage);
	void ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_ReturnedAmount, class AActor* K2Node_CustomEvent_ActorReceivingDamage, class UActorState* CallFunc_GetAIActorState_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


