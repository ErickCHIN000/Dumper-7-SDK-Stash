#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x674 - 0x650)
// ControlRigBlueprintGeneratedClass SK_DPS_SML_DropShip_02_MID_CtrlRig.SK_DPS_SML_DropShip_02_MID_CtrlRig_C
class USK_DPS_SML_DropShip_02_MID_CtrlRig_C : public UControlRig
{
public:
	float                                        DoorExtend;                                        // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorInit;                                          // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorCurrent;                                       // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorOpen_;                                         // 0x65C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6182[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FloorHeight;                                       // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorRelative;                                      // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LadderExtention;                                   // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentLadderExtention;                            // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorSpeed;                                         // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_DPS_SML_DropShip_02_MID_CtrlRig_C* GetDefaultObj();

};

}


