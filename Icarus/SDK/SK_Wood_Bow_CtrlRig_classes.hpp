#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D (0x68D - 0x650)
// ControlRigBlueprintGeneratedClass SK_Wood_Bow_CtrlRig.SK_Wood_Bow_CtrlRig_C
class USK_Wood_Bow_CtrlRig_C : public UControlRig
{
public:
	struct FTransform                            AttachArrowToHand;                                 // 0x650(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                               ArrowPlacment;                                     // 0x680(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is3RD;                                             // 0x68C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_Wood_Bow_CtrlRig_C* GetDefaultObj();

};

}


