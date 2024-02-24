#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BaseWeapon_Interface.BaseWeapon_Interface_C
class IBaseWeapon_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBaseWeapon_Interface_C* GetDefaultObj();

	void BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType);
	void GetChargePercent(float* ChargePercent);
};

}


