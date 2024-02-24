#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x6C1 - 0x650)
// ControlRigBlueprintGeneratedClass SK_bow_shengong_CtrlRig.SK_bow_shengong_CtrlRig_C
class USK_bow_shengong_CtrlRig_C : public UControlRig
{
public:
	struct FTransform                            AttachArrowToHand;                                 // 0x650(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                               ArrowPlacment;                                     // 0x680(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is3RD;                                             // 0x68C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6089[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            String_Global_Position;                            // 0x690(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         IsGlobal;                                          // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_bow_shengong_CtrlRig_C* GetDefaultObj();

};

}


