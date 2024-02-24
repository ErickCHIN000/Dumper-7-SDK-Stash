#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6D (0x565 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_KotC_AS4.ActionSkill_KotC_AS4_C
class UActionSkill_KotC_AS4_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	class AActor*                                Hammer;                                            // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 DurationRefund;                                    // 0x508(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_KotC_AS4; // 0x520(0x28)(None)
	struct FDataTableValueHandle                 HammerDamageScalar;                                // 0x548(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        StoredDamage;                                      // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideHammer;                                        // 0x564(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class UActionSkill_KotC_AS4_C* GetDefaultObj();

	void KnightOfTheClawGetHammerRef(class AActor** Res);
	void KnightOfTheClawRegisterHammer(class AActor* Hammer, bool* Res);
	void OnRep_HideHammer(TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess);
	float GetCooldownRestartPercent(float CallFunc_GetCooldownRestartPercent_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDurationPercent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnStartActionAbility();
	void OnActionAbilityRetrigger();
	void KnightOfTheClawStartRecall();
	void OnActivated();
	void HammerOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void KnightOfTheClawAllowHammerRecall();
	void OnResumed();
	void OnStopActionAbility();
	void KotC_AS4_OnPlayerDied();
	void ExecuteUbergraph_ActionSkill_KotC_AS4(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGbxAction* CallFunc_K2Play_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Has_Been_Initd_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class UGbxAction* CallFunc_K2Play_ReturnValue1, class UGbxAbility* CallFunc_GetClassFeat_Res1, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res1);
};

}


