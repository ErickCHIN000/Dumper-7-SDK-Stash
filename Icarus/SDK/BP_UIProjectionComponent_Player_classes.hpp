#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x140 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C
class UBP_UIProjectionComponent_Player_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsAlive;                                           // 0x118(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4D62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   Player;                                            // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SettingsEnable;                                    // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StatAbilityEnable;                                 // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D73[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LongDistanceDotProductLimit;                       // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LongDistanceVisibilityRange;                       // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShortDistanceVisibilityRange;                      // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LongDistanceVisible;                               // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShortDistanceVisible;                              // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayerDownedVisible;                               // 0x13A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RangeToSeeDowned;                                  // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_Player_C* GetDefaultObj();

	void UpdateWidget(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void UpdateEnabled(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetPlayerMarker_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, bool CallFunc_GetPlayerMarker_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_DualActorStatCheck_BothActors_have_Stats);
	void OnRep_IsAlive();
	void GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetWidgetLocation_Location, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void OnHealthUpdate(class UActorState* ActorState, float NewHealth);
	void OnActorDeath(class UActorState* ActorState);
	void PlayerUIMarkerApplied(bool Value);
	void StatsUpdated();
	void Ticking_update();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UIProjectionComponent_Player(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState_1, float K2Node_CustomEvent_NewHealth, class UActorState* K2Node_CustomEvent_ActorState, bool K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_IsValid_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


