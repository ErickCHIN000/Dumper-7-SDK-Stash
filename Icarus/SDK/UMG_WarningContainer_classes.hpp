#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WarningContainer.UMG_WarningContainer_C
class UUMG_WarningContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BlinkAll;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_Warning_C*                        Exposure;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Warning_C*                        Food;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Warning_C*                        Health;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Warning_C*                        Oxgen;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Warning_C*                        RepairWarning;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Warning_C*                        Water;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        WarnThreshold_Water;                               // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WarnThreshold_Health;                              // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WarnThreshold_Food;                                // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WarnThreshold_Oxygen;                              // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WarnThreshold_Exposure;                            // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_487A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    Sound;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UPlayerCharacterState*                 PlayerCharacterState;                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WarningContainer_C* GetDefaultObj();

	void OnRepairWarningUpdated(bool CallFunc_IsVisible_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetAudioPlayState(bool ShouldPlay, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue);
	void UpdateAudio(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void OnAliveChanged(class UActorState* ActorState, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetOxygen_ReturnValue, float CallFunc_SafeDivide_ReturnValue, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_GetWater_ReturnValue);
	void OnExposureUpdated(float NewExposure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnHealthUpdated(class UActorState* ActorState, float NewHealth, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnOxygenUpdated(int32 NewOxygen, bool Temp_wildcard_Variable, class FText Temp_wildcard_Variable_1, int32 CallFunc_GetMaxOxygen_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_SafeDivide_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnFoodUpdated(int32 NewFood, bool Temp_wildcard_Variable, class FText Temp_wildcard_Variable_1, int32 CallFunc_GetMaxFood_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void OnWaterUpdated(int32 NewWater, bool Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText Temp_wildcard_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Destruct();
	void OnInitialized();
	void Construct();
	void ExecuteUbergraph_UMG_WarningContainer(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class UPlayerCharacterState* K2Node_DynamicCast_AsPlayer_Character_State, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
};

}


