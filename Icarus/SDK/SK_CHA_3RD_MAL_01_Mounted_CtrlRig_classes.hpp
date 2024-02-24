#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x69C - 0x650)
// ControlRigBlueprintGeneratedClass SK_CHA_3RD_MAL_01_Mounted_CtrlRig.SK_CHA_3RD_MAL_01_Mounted_CtrlRig_C
class USK_CHA_3RD_MAL_01_Mounted_CtrlRig_C : public UControlRig
{
public:
	struct FVector                               RelativeFeetOffset;                                // 0x650(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpineCurlAmount;                                   // 0x65C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RelativeHandsOffset;                               // 0x660(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               HandSpaceTargetLocation;                           // 0x66C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               RelativeHandSpaceOffset;                           // 0x678(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoLookAt;                                          // 0x684(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtDirection;                                   // 0x688(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerletAlpha;                                       // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VerletStrength;                                    // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CHA_3RD_MAL_01_Mounted_CtrlRig_C* GetDefaultObj();

};

}


