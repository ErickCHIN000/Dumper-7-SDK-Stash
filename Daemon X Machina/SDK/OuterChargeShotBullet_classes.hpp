#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xB28 - 0xB1C)
// BlueprintGeneratedClass OuterChargeShotBullet.OuterChargeShotBullet_C
class AOuterChargeShotBullet_C : public ANormalBullet_C
{
public:
	uint8                                        Pad_CE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB20(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AOuterChargeShotBullet_C* GetDefaultObj();

	void UserConstructionScript();
	void InitializeProjectileBP();
	void ExecuteUbergraph_OuterChargeShotBullet(int32 EntryPoint, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_CalcOuterAttackWithFluctuation_ReturnValue);
};

}


