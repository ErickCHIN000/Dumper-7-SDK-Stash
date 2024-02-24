#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA00 - 0x9F0)
// BlueprintGeneratedClass BPWeap_PS_VLA.BPWeap_PS_VLA_C
class ABPWeap_PS_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)
	class UWeaponAmmoPoolComponent*              AmmoPool_Mode2;                                    // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_PS_VLA_C* GetDefaultObj();

	void UserConstructionScript();
	void ModeSwitchStarted();
	void Notify_ReloadStarted(bool bAutoReload);
	void ExecuteUbergraph_BPWeap_PS_VLA(int32 EntryPoint, bool K2Node_Event_bAutoReload);
};

}


