#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25 (0xA09 - 0x9E4)
// BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C
class ABPWeap_Torgue_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_2237[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(Transient, DuplicateTransient)
	float                                        DetonationDelay;                                   // 0x9F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DetonationTime;                                    // 0x9F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileType;                                    // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TOR_ProjectilePerShot;                             // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileDamageScale;                             // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverrideForcedDetonation;                          // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        StickyDetonationMode;                              // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_Torgue_BaseWeapon_C* GetDefaultObj();

	void DetonateActiveProjectiles(bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, class UBPWeaponFireProjectileComponent_Torgue_C* CallFunc_GetUseModeComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_Select_Default, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData1);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ModeSwitched();
	void Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven);
	void DetonateProjectiles();
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AWeapon* K2Node_CustomEvent_EventWeapon);
};

}


