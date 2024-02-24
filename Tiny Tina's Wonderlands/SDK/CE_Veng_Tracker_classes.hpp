#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x158 - 0x148)
// BlueprintGeneratedClass CE_Veng_Tracker.CE_Veng_Tracker_C
class UCE_Veng_Tracker_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class ABPWeap_AR_TOR_Vengeance_C*            VengeanceWeaponOwner;                              // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCE_Veng_Tracker_C* GetDefaultObj();

	void SetupTrackerFX(class AActor* CallFunc_K2_GetActor_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess);
	void OnDeath_VengeanceTracker(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_CE_Veng_Tracker(int32 EntryPoint, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue, class ABPWeap_AR_TOR_Vengeance_C* K2Node_DynamicCast_AsBPWeap_AR_TOR_Vengeance, bool K2Node_DynamicCast_bSuccess, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor);
};

}


