#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1AC (0x25C - 0xB0)
// BlueprintGeneratedClass AC_ActionConsumables.AC_ActionConsumables_C
class UAC_ActionConsumables_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Selection_macro_Index;                             // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_ConsumableActionBars_C*            Consumable_ActionBar_Ref;                          // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthRotationValue;                               // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Use_Consumable_Sound;                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UseSound;                                          // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Limitless_value;                                   // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaRotationValue;                              // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmorRotationValue;                                // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRotationValue;                               // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackSpeedRotationValue;                          // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_EffectsBar_C*                      EffectsBar_Ref;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Cant_use_Notify;                                   // 0x100(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        MovementSpeedRotationValue;                        // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealthRotationValue;                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxStaminaRotationValue;                           // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_SaveBuffs                          HealthEffectData;                                  // 0x128(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          StaminaEffectData;                                 // 0x150(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          ArmorEffectData;                                   // 0x178(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          DamageEffectData;                                  // 0x1A0(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          AttackSpeedEffectData;                             // 0x1C8(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          MaxHealthEffectData;                               // 0x1F0(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveBuffs                          MaxStaminaEffectData;                              // 0x218(0x28)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UExtendedStatComponent_C*              ExtendedHealth;                                    // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UExtendedStatComponent_C*              ExtendedStamina;                                   // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatsManagerComponent_C*              StatsManager;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cooldown;                                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_ActionConsumables_C* GetDefaultObj();

	void Add_For_Duration_from_Save(const struct FS_SaveBuffs& Consumable, bool K2Node_SwitchEnum_CmpSuccess);
	void Add_Over_Duration_from_Save(const struct FS_SaveBuffs& Consumable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1);
	void Add_For_Duration(const struct FS_ConsumableAction& Consumable, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_2, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_3, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_4);
	void Clear_Value(bool MaxValue_, const struct FS_SaveBuffs& Consumable, enum class E_StatCategory Temp_byte_Variable, enum class E_StatType Temp_byte_Variable_1, enum class E_StatType Temp_byte_Variable_2, enum class E_StatType Temp_byte_Variable_3, enum class E_StatType Temp_byte_Variable_4, enum class E_StatType Temp_byte_Variable_5, enum class E_StatType Temp_byte_Variable_6, enum class E_StatType Temp_byte_Variable_7, enum class E_StatType K2Node_Select_Default);
	void Add_Value_and_Increment(struct FS_SaveBuffs& S_ConsumableEffect, int32 Temp_int_Variable, float CallFunc_Get_Max_Stat_Value_Value, float CallFunc_Get_Current_Stat_Value_Value, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Get_Max_Stat_Value_Value_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize_Circle_Animation(const struct FS_ConsumableAction& Consumable);
	void Add_Over_Duration(const struct FS_ConsumableAction& Consumable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1);
	void Set_Max_Stat_Value(enum class E_StatCategory Stat, float Value, bool K2Node_SwitchEnum_CmpSuccess);
	void Create_Widget_Notify(class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue);
	void Set_Stat_Value(enum class E_StatCategory Stat, float Value, bool K2Node_SwitchEnum_CmpSuccess);
	void Get_Current_Stat_Value(enum class E_StatCategory Index, float* Value, enum class E_StatCategory Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_GetStatValue_Value, float CallFunc_GetStatValue_Value_1, float CallFunc_GetStatValue_Value_2, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_GetCurrentValue_CurrentValue_1, float K2Node_Select_Default);
	void Get_Max_Stat_Value(enum class E_StatCategory Index, float* Value, enum class E_StatCategory Temp_byte_Variable, float CallFunc_GetMaxValue_Value, float CallFunc_GetMaxValue_Value_1, float K2Node_Select_Default);
	void Play_Sound_on_Use(bool K2Node_SwitchInteger_CmpSuccess);
	void Decrease_Item_Quantity(class UWB_EquipmentSlot_C* Pot, const struct FS_ItemData& Pot_ItemData, const struct FS_ItemStacks& K2Node_MakeStruct_S_ItemStacks, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnNotifyEnd_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName);
	void OnNotifyBegin_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName);
	void OnInterrupted_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName);
	void OnBlendOut_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName);
	void OnCompleted_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName);
	void On_Z_Key_Pressed();
	void On_X_Key_Pressed();
	void On_C_Key_Pressed();
	void On_V_Key_Pressed();
	void ReceiveBeginPlay();
	void Add_Health_OD();
	void Add_Stamina_OD();
	void Add_Armor_FD();
	void Add_Damage_FD();
	void Add_AttackSpeed_FD();
	void Add_MaxHealth_FD();
	void Add_MaxStamina_FD();
	void Clear_Armor_FD();
	void Clear_Damage_FD();
	void Clear_AttackSpeed_FD();
	void Clear_MaxHealth_FD();
	void Clear_MaxStamina_FD();
	void On_Z_Input();
	void On_X_Input();
	void On_C_Input();
	void On_V_Input();
	void ExecuteUbergraph_AC_ActionConsumables(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool Temp_bool_IsClosed_Variable, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, float CallFunc_Get_Current_Stat_Value_Value, float CallFunc_Get_Max_Stat_Value_Value, float CallFunc_Get_Max_Stat_Value_Value_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Get_Current_Stat_Value_Value_1, float CallFunc_Get_Max_Stat_Value_Value_2, float CallFunc_Get_Max_Stat_Value_Value_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1, int32 Temp_int_Variable_2, bool CallFunc_Is_Game_Paused__Paused, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_Game_Paused__Paused_1, bool CallFunc_Is_Game_Paused__Paused_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Is_Game_Paused__Paused_3, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UWidgetAnimation* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FS_ItemData& K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, float CallFunc_Get_Max_Stat_Value_Value_4, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Get_Current_Stat_Value_Value_2, float CallFunc_Get_Max_Stat_Value_Value_5, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, class UWB_EquipmentSlot_C* K2Node_Select_Default_2, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class II_AbilityComponent_C> CallFunc_CanCastAbility_self_CastInput, bool CallFunc_CanCastAbility_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_IsClosed_Variable_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_8, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_4);
};

}


