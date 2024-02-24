#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x680 - 0x650)
// ControlRigBlueprintGeneratedClass SK_CRE_Crocodile_LookAt_CtrlRig.SK_CRE_Crocodile_LookAt_CtrlRig_C
class USK_CRE_Crocodile_LookAt_CtrlRig_C : public UControlRig
{
public:
	struct FVector                               LookAtTargetLocation;                              // 0x650(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugTarget;                                       // 0x65C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtDistanceBlendStart;                          // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LookAtDistanceBlendEnd;                            // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        AdditionalTargetHeight;                            // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DoLookAt;                                          // 0x66C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InternalLookAtAlpha;                               // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OffsetTargetLocation;                              // 0x674(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CRE_Crocodile_LookAt_CtrlRig_C* GetDefaultObj();

};

}


