#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x178 - 0x170)
// AIActionBlueprintGeneratedClass AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C
class UAIAction_VehicleTechOutr_DWeapon_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_VehicleTechOutr_DWeapon_C* GetDefaultObj();

	void ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon(int32 EntryPoint);
};

}

