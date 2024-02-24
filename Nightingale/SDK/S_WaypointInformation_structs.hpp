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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct S_WaypointInformation.S_WaypointInformation
struct FS_WaypointInformation
{
public:
	struct FGuid                                 ID_29_A5FB030045C417A90F8ECD8618D6FF17;            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldLocation_3_AC9DAB7846196A678E63B1BD082C582A;  // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   WaypointType_25_AF15E6CD44133F1589C83CBA4D49D224;  // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         ServerVerified_47_6727D2344A3A4A8F19C1439C9C0B26BE; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaRadius_50_A3B286DF40743CBE17C12692BBB73875;    // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerPersistentID_53_925D9EEA4161A670B823C08DC528270D; // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Note_56_F72C4FF34E145EAA0916B6A243775B79;          // 0x50(0x18)(Edit, BlueprintVisible)
};

}


