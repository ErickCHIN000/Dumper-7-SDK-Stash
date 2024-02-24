#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xA18 - 0x9E4)
// BlueprintGeneratedClass BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C
class ABPWeap_Jakobs_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	uint8                                        Pad_1E17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  AudioComponentManager;                             // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BreakLoadShellAmount;                              // 0x9F0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PumpAction;                                        // 0x9F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BreakAction;                                       // 0x9F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeverAction;                                       // 0x9FC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PumpAction_Type;                                   // 0xA00(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UsesSequence;                                      // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CritStackScale;                                    // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MagBone;                                           // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPWeap_Jakobs_BaseWeapon_C* GetDefaultObj();

	void ShowMagBones();
	void HideMagBones();
	void UserConstructionScript();
};

}


