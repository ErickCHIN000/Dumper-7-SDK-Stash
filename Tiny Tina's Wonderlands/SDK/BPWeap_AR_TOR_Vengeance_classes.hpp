#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B (0xAA4 - 0xA09)
// BlueprintGeneratedClass BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C
class ABPWeap_AR_TOR_Vengeance_C : public ABPWeap_AR_TOR_C
{
public:
	uint8                                        Pad_384B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(Transient, DuplicateTransient)
	TArray<class AProj_Weapon_BaseProjectile_C*> ActiveTrackers;                                    // 0xA18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        HomingTargets;                                     // 0xA28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                          BaseColor;                                         // 0xA38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HighlightColor;                                    // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarkerBaseColor;                                   // 0xA58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarkerHighlightColor;                              // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HomingColorBase;                                   // 0xA78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HomingColorHighlight;                              // 0xA88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrackerLifetime;                                   // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFiredRecently;                                  // 0xA9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3856[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTargetIndex;                                // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_AR_TOR_Vengeance_C* GetDefaultObj();

	void RemoveHomingTarget(class AActor* HomingTarget, class UGbxActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitBaseGlow(const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue);
	void InitMarkerGlow(const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue);
	void InitHoming(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AddHomingTarget(class AActor* Homing_Target, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UserConstructionScript();
	void ReEvaluateEmissive();
	void NotifySwitchedMode_Event();
	void InitializeElementalEmissive();
	void SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight);
	void ReceiveBeginPlay();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void ModeSwitched();
	void DetonateActiveProjectiles();
	void ExecuteUbergraph_BPWeap_AR_TOR_Vengeance(int32 EntryPoint, class UFiringPattern* Temp_object_Variable, uint8 Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsTargetLocked_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Event_BaseColor, const struct FLinearColor& K2Node_Event_HighlightColor, const struct FLinearColor& K2Node_Event_MarkerBaseColor, const struct FLinearColor& K2Node_Event_MarkerHighlightColor, const struct FLinearColor& K2Node_Event_HomingOverrideBase, const struct FLinearColor& K2Node_Event_NewParamHomingOverrideHighlight, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFiringPattern* Temp_object_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AWeapon* K2Node_CustomEvent_EventWeapon, class AProj_Weapon_BaseProjectile_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class UWeaponFireProjectileComponent* CallFunc_GetUseModeComponentByClass_ReturnValue, class UFiringPattern* K2Node_Select_Default, float CallFunc_GetValueOfAttribute_ReturnValue, class UBPWeaponFireProjectileComponent_Torgue_C* CallFunc_GetUseModeComponentByClass_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData);
};

}


