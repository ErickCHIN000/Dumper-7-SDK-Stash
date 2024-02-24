#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x234 - 0x220)
// BlueprintGeneratedClass Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C
class AVanoga_PatrolPoiBase_C : public ATargetPoint
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bReady;                                            // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Cooldown;                                          // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UseChance;                                         // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVanoga_PatrolPoiBase_C* GetDefaultObj();

	void ReadyCooldown();
	void IsReady(bool* Result);
	void Use(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Vanoga_PatrolPoiBase(int32 EntryPoint);
};

}


