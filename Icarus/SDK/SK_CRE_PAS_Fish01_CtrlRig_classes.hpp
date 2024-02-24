#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x668 - 0x650)
// ControlRigBlueprintGeneratedClass SK_CRE_PAS_Fish01_CtrlRig.SK_CRE_PAS_Fish01_CtrlRig_C
class USK_CRE_PAS_Fish01_CtrlRig_C : public UControlRig
{
public:
	bool                                         AnimateFins;                                       // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InterpolatedDelta;                                 // 0x654(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewSpeed;                                          // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationRate;                                      // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CRE_PAS_Fish01_CtrlRig_C* GetDefaultObj();

};

}


