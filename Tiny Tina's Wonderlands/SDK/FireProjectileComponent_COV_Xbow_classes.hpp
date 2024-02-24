#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x990 - 0x958)
// BlueprintGeneratedClass FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C
class UFireProjectileComponent_COV_Xbow_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	class UClass*                                XbowCOVProjectile_Magic;                           // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSwitchToMagic;                                    // 0x968(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                XbowCOVProjectile_Bolt;                            // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NShotsRequired;                                    // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NShotCounter;                                      // 0x97C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XbowCOV_ShotCount_Min;                             // 0x980(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XbowCOV_ShotCount_Med;                             // 0x984(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XbowCOV_ShotCount_High;                            // 0x988(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XbowCOV_ShotCount_Max;                             // 0x98C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFireProjectileComponent_COV_Xbow_C* GetDefaultObj();

	void ResetShotCounter();
	TSubclassOf<class ULightProjectileData> GetShotLightProjectileData();
	void ReceiveBeginPlay();
	void OnUsed_COVXbow();
	void CompareShotCount(int32 NShotReq);
	void ReloadCoVMagic(bool bAutoReload);
	void ExecuteUbergraph_FireProjectileComponent_COV_Xbow(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_nShotReq, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, bool K2Node_CustomEvent_bAutoReload, class UWeaponReloadComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 Temp_int_Variable);
};

}


