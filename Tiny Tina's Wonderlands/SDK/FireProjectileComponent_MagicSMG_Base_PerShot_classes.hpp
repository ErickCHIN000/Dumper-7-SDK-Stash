#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x988 - 0x958)
// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C
class UFireProjectileComponent_MagicSMG_Base_PerShot_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	int32                                        NShotCounter;                                      // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandStream;                                        // 0x964(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        NShotsRequired;                                    // 0x96C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseLightningBolt;                                 // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxShotsRequired;                                  // 0x974(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinShotsRequired;                                  // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PerShotOverride;                                   // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFireProjectileComponent_MagicSMG_Base_PerShot_C* GetDefaultObj();

	void ResetShotCounter(int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue);
	TSubclassOf<class ULightProjectileData> GetShotLightProjectileData(bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void OnUsed_MagicSMG();
	void DoSpecialBarrelBehavior();
	void ExecuteUbergraph_FireProjectileComponent_MagicSMG_Base_PerShot(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable);
};

}


