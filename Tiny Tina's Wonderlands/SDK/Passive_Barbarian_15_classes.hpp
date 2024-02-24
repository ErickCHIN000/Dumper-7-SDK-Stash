#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x126 (0x3E0 - 0x2BA)
// BlueprintGeneratedClass Passive_Barbarian_15.Passive_Barbarian_15_C
class UPassive_Barbarian_15_C : public U_Passive_Parent_C
{
public:
	uint8                                        Pad_2F2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(Transient, DuplicateTransient)
	class UFightForYourLifeComponent*            MyFFYLComponent;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RestorationPercentage;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 RestorationPercentageHandle;                       // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        FightForYourLifeBaseMaxDuration;                   // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CalcSkillDamage;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FightForYourLifeTotalMaxDuration;                  // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FightForYourLifeMaxMultiplier;                     // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 FightForYourLifeMaxMultiplierHandle;               // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UDamageCauserComponent*                MyDamageCauserComponent;                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_UnendingFury; // 0x320(0x28)(None)
	struct FGameResourcePoolReference            FFYLResourcePool;                                  // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FRuntimeFloatCurve                    Curve;                                             // 0x360(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxAbility*                           RageResource;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Barbarian_15_C* GetDefaultObj();

	void OakPassiveOnDownStateStart();
	void OakPassiveOnDownStateStop();
	void DamageDealtInFFYL(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DeathCausedInFFYL(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Passive_Barbarian_15(int32 EntryPoint, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UFightForYourLifeComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details1, class UDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetAbilityTimerValue_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_GetCurveFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_StartRage_Res);
};

}


