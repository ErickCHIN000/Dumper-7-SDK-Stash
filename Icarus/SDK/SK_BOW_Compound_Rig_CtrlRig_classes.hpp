#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x691 - 0x650)
// ControlRigBlueprintGeneratedClass SK_BOW_Compound_Rig_CtrlRig.SK_BOW_Compound_Rig_CtrlRig_C
class USK_BOW_Compound_Rig_CtrlRig_C : public UControlRig
{
public:
	struct FTransform                            AttachArrowToHand;                                 // 0x650(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                               ArrowPlacment;                                     // 0x680(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimBlend;                                          // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is3RD;                                             // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_BOW_Compound_Rig_CtrlRig_C* GetDefaultObj();

};

}


