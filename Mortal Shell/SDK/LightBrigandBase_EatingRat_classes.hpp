#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x120C - 0x11F0)
// BlueprintGeneratedClass LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C
class ALightBrigandBase_EatingRat_C : public ALightBrigandBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Eating_rat_cue;                                    // 0x11F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Rat;                                               // 0x1200(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        GameTimeLastHit;                                   // 0x1208(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightBrigandBase_EatingRat_C* GetDefaultObj();

	void OnNotifyEnd_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName);
	void OnNotifyBegin_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName);
	void OnInterrupted_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName);
	void OnBlendOut_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName);
	void OnCompleted_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName);
	void SetDistanceCheckTimer();
	void AggroAnimComplete();
	void StopPlaying();
	void ThrowRat();
	void OnAggroDelayOver();
	void AggroAnimInterrupted();
	void UpdateAggroPoseFromSpawner();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_LightBrigandBase_EatingRat(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue);
};

}


