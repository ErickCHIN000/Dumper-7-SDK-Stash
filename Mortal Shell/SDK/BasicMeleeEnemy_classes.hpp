#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1108 - 0x10F8)
// BlueprintGeneratedClass BasicMeleeEnemy.BasicMeleeEnemy_C
class ABasicMeleeEnemy_C : public AEnemyCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          NextAttackMontage;                                 // 0x1100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABasicMeleeEnemy_C* GetDefaultObj();

	void ExecuteAttack(float* AI_WaitTime);
	void OnNotifyEnd_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName);
	void OnNotifyBegin_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName);
	void OnInterrupted_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName);
	void OnBlendOut_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName);
	void OnCompleted_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName);
	void ExecuteShortAttack();
	void ExecuteMidAttack();
	void ExecuteLongAttack();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BasicMeleeEnemy(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


