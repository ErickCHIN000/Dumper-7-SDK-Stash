#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x22C - 0x198)
// BlueprintGeneratedClass Ability_Melee_HiltMod_07.Ability_Melee_HiltMod_07_C
class UAbility_Melee_HiltMod_07_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Melee_HiltMod_07; // 0x1A0(0x28)(None)
	int32                                        DamageInstanceDuration;                            // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B4[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageInstanceDurationHandle;                      // 0x1D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ConversionRate;                                    // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ConversionRateHandle;                              // 0x1F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<float>                                DamageInstances;                                   // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         AttackLock;                                        // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageCauserComponent*                MyDamageCauserComponent;                           // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentDamageInst;                                 // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Melee_HiltMod_07_C* GetDefaultObj();

	void HandleDamageInstanceLogic(int32 Temp_int_Variable, float Temp_float_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void HandleAttackLock();
	void GetTotalInstanceDamageStored(float* TotalDamage, float TotalInstanceDamage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void ClearAllDamageInstances(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DealStoredDamage(class UGbxDamageType* DamageType, class AActor* Actor_to_Damage, bool* DamageDealt, float* DamageAmount, float CallFunc_GetTotalInstanceDamageStored_TotalDamage, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& Temp_struct_Variable);
	void StoreDamage(float DamageDealt, float CallFunc_Add_FloatFloat_ReturnValue);
	void InitDamageInstances(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetCurrentHealthPercentage(class AActor* Target, float* Health_Percentage, class UGameResourceData* Temp_object_Variable, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGameResourceData* Temp_object_Variable1, class UGameResourceData* Temp_object_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable1, float CallFunc_Divide_FloatFloat_ReturnValue, class UGameResourceData* K2Node_Select_Default, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnActivated();
	void OnDeactivated();
	void HiltMod07_DamageCaused(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void UnlockHit();
	void ExecuteUbergraph_Ability_Melee_HiltMod_07(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_DealStoredDamage_DamageDealt, float CallFunc_DealStoredDamage_DamageAmount, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1);
};

}


