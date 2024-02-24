#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x41 - 0x0)
// UserDefinedStruct S_ReactSettings.S_ReactSettings
struct FS_ReactSettings
{
public:
	TArray<class FName>                          ReactTags_3_0B1EB31340205B1B774807A2583CC984;      // 0x0(0x10)(Edit, BlueprintVisible)
	enum class E_StimuliReaction                 BehaviourResponse_7_39DE9D5C4EE333FAEDB4D88DEF230D9D; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsResponseTemporary_15_F309DD014070D1A5AF5EB0829E0C66C8; // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2838[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TemporaryTime_13_36D1E215449F5B7C7273F08E43A1C251; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CancelOverrideBehaviour_17_29C1086A470F9A4B442B5D83A0727F04; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  Animations_21_084E2E78404169BBDDC195966E7815D4;    // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<class USoundCue*>                     Audio_24_146DA9FE474D0ECA6B72F4B597EFBCA7;         // 0x30(0x10)(Edit, BlueprintVisible)
	bool                                         IgnoreReactCooldown_28_C412BA8447018B48C8623F9EFD398DFF; // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


