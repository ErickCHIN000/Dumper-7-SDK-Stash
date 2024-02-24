#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x2D0 - 0x100)
// BlueprintGeneratedClass BP_Emote_Component.BP_Emote_Component_C
class UBP_Emote_Component_C : public UEmoteContextComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x100(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    Cached_VO_Component;                               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EEmoteBreathingState              Breathing_State;                                   // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmoteCallbackState               Callback_State;                                    // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Current_Action_Switch_Value;                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Combat_Cool_Off_Time;                              // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combat_Delay_Cancelled;                            // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Combat;                                         // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Playing_Id;                                        // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Health_Threshold_1;                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Health_Threshold_2;                                // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Health_Threshold_3;                                // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Zero_based_Health_Level;                           // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Current_Health_Switch_Value;                       // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Zero_based_Stamina_Level;                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Stamina_Threshold_1;                               // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Stamina_Threshold_2;                               // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Stamina_Threshold_3;                               // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                        Current_Stamina_Switch_Value;                      // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Pain_Cooldown_Time;                                // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pain_Timestamp;                                    // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                        Current_Combat_Switch_Value;                       // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Ticket_Count;                                      // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Current_Pain_Switch_Value;                         // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Medium_Pain_Magnitude_Threshold;                   // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Heavy_Pain_Magnitude_Threshold;                    // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Out_of_Stamina_Cooldown_Time;                      // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Out_of_Stamina_Timestamp;                          // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Out_of_Stamina_Timeout;                            // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Jump_Cooldown_Time;                                // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Jump_Timestamp;                                    // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Combat_Radius;                                     // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       In_Combat_Normalised;                              // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Combat_Analyser_C*                 Cached_Combat_Component;                           // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorAudioBucket*>             Combat_Buckets_To_Respond_To;                      // 0x200(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkSwitchValue*                        Current_Voice_Set_Switch_Value;                    // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         Body_Type;                                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4506[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Cached_Ability_System_Component;                   // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       BlockingCooldownTime;                              // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BlockingTimestamp;                                 // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EEmoteBreathingState, bool>  BreathStateInputs;                                 // 0x238(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNWXAttributeSet*                      NWXAttributeSet;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CachedStamina;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EmoteSwitchTimestamp;                              // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EmoteRetriggerCooldownTimeSecs;                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    AppearanceComponent;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVoiceSetData                         CurrentVoiceSetData;                               // 0x2B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Emote_Component_C* GetDefaultObj();

	void TriggerYawnEmote(double CallFunc_GetCurrentHealth_CurrentHealth, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void UpdateVoiceSetData(const struct FVoiceSetDataReference& Data, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeAppearanceComponent(class UBP_CharacterAppearanceComponent_C* AppearanceComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, bool CallFunc_IsValid_ReturnValue);
	void HandleEquippedItemChanged(bool CallFunc_Update_Stamina_Switch_Switch_Updated);
	void Is_Unarmed(bool* IsUnarmed, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
	void OnStaminaChangedHandler(float Delta, double CurrStamina, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_On_Stamina_Changed_Internal_Base_Max_Stamina_ImplicitCast, double CallFunc_On_Stamina_Changed_Internal_Max_Stamina_ImplicitCast, double K2Node_VariableSet_CurrStamina_ImplicitCast);
	void CalculateBreathState(enum class EEmoteBreathingState* OutputState, enum class EEmoteBreathingState Temp_byte_Variable, enum class EEmoteBreathingState Temp_byte_Variable_1, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void HandleDamageBlocked(double AmountBlocked, class AActor* Attacker);
	void BindServerCallbacks(class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void Set_Health(double New_Health, double MaxHealth, double MaxHealthClamp, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, double CallFunc_GetMaxHealth_MaxHealth, float CallFunc_GetAudioMaxHealthClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Calculate_Switch_Level_Zero_Based_Level, float CallFunc_GetAudioMaxHealthClamped_MaxHealthValue_ImplicitCast, double K2Node_VariableSet_MaxHealthClamp_ImplicitCast);
	void Update_Health(double CallFunc_GetCurrentHealth_CurrentHealth, bool CallFunc_IsValid_ReturnValue);
	void TriggerBlockEmote(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, double CallFunc_Update_Timestamp_Current_Time);
	void Update_Voice_Set_Switch(class UAkSwitchValue* Voice_Set_Switch_Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Update_Timestamp(double& Timestamp, double* Current_Time, double CallFunc_GetAudioTimeSeconds_ReturnValue);
	void Has_Cooldown_Elapsed(double Cooldown_Time, double Timestamp, bool* Cooldown_Elapsed, double CallFunc_GetAudioTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void Is_In_Combat(bool* In_Combat);
	void Get_Pain_Switch_Value(double Pain_Magnitude, class UAkSwitchValue** Pain_Switch_Value, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class UAkSwitchValue* K2Node_Select_Default_1);
	void Trigger_Pain_Emote(double Pain_Magnitude, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAkSwitchValue* CallFunc_Get_Pain_Switch_Value_Pain_Switch_Value, double CallFunc_GetAudioTimeSeconds_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed);
	void BindClientCallbacks(class ANWXCharacter* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void Get_Breathing_State_Switch_Value(class UAkSwitchValue** Switch_Value, enum class EEmoteBreathingState Temp_byte_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* K2Node_Select_Default);
	void Update_Ambience_Manager(class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, bool CallFunc_Is_in_Combat_In_Combat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
	void Update_Combat_Switch(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_Is_in_Combat_In_Combat, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Sync_Non_Action_Switches(bool CallFunc_Update_Stamina_Switch_Switch_Updated);
	void Calculate_Switch_Level(double New_Value, double MaxValue, double Threshold_Level_1, double Threshold_Level_2, double Threshold_Level_3, double BaseMax, int32* Zero_Based_Level, int32 Temp_int_Variable, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, double CallFunc_FMax_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void Update_Stamina_Switch(bool* Switch_Updated, class UAkSwitchValue* NewSwitchValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_Is_Unarmed_IsUnarmed);
	void On_Stamina_Changed_Internal(double New_Stamina, double Old_Stamina, double Max_Stamina, double Base_Max_Stamina, const class FString& Printmessage, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Update_Stamina_Switch_Switch_Updated, int32 CallFunc_Calculate_Switch_Level_Zero_Based_Level, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void Update_Health_Switch(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Handle_on_Health_Decreased(double Old_Health, double New_Health, bool Suppress_Emote, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_VSize_ReturnValue);
	void Revoke_Emote_Switch_Value(class UAkSwitchValue* Switch_Value, class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Update_Playing_Id(class UAkCallbackInfo* Callback_Info, class UAkMusicSyncCallbackInfo* K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Restart_Event(bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Play_Event(class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
	void Set_Action_Switch(class UAkSwitchValue* New_Switch_Value, bool CallFunc_IsValid_ReturnValue);
	void Enter_Breathing_State(class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value);
	void Handle_Callback(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void Submit_Emote_Switch_Value(class UAkSwitchValue* Switch_Value, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Submit_Emote_Switch_From_Server(class UAkSwitchValue* Switch_Value);
	void Trigger_Pain_Emote_From_Server(double Pain_Magnitude);
	void SubmitEmoteSwitchValue(class UAkSwitchValue* SwitchValue);
	void OnHealthDecreased(float OldHealth, float NewHealth, bool SuppressEmote);
	void TriggerBlockEmoteFromServer();
	void Jump();
	void Character_Ready();
	void Depleted(struct FInventoryEntry& InventoryEntry);
	void Set_Breathing_State(enum class EEmoteBreathingState New_State);
	void Revoke_Breathing_State(enum class EEmoteBreathingState Existing_State);
	void EmotesInCombat(bool SetCombatSwitch);
	void On_Combat_Updated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Emote_Component(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UAkSwitchValue* K2Node_CustomEvent_Switch_Value, double K2Node_CustomEvent_Pain_Magnitude, class UAkSwitchValue* K2Node_Event_SwitchValue, float K2Node_Event_OldHealth, float K2Node_Event_NewHealth, bool K2Node_Event_SuppressEmote, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, const struct FInventoryEntry& K2Node_CustomEvent_InventoryEntry, double CallFunc_Update_Timestamp_Current_Time, enum class EEmoteBreathingState K2Node_CustomEvent_New_State, enum class EEmoteBreathingState K2Node_CustomEvent_Existing_State, class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EEmoteBreathingState CallFunc_CalculateBreathState_OutputState, bool Temp_bool_Variable_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAkSwitchValue* Temp_object_Variable, bool K2Node_CustomEvent_SetCombatSwitch, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActorAudioBucket* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Is_In_Combat_Score, bool CallFunc_Is_In_Combat_Combat, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_2, class UAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, class UBP_Combat_Analyser_C* CallFunc_GetComponentByClass_ReturnValue_1, class UScopedAkComponent* CallFunc_GetScopedAkHead_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_3, class UAkSwitchValue* K2Node_Select_Default, double CallFunc_Handle_on_Health_Decreased_Old_Health_ImplicitCast, double CallFunc_Handle_on_Health_Decreased_New_Health_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_1);
};

}


