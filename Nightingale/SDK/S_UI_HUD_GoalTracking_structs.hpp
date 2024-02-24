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

// 0x87 (0x87 - 0x0)
// UserDefinedStruct S_UI_HUD_GoalTracking.S_UI_HUD_GoalTracking
struct FS_UI_HUD_GoalTracking
{
public:
	enum class E_UI_HudTrackingTypes             TrackType_3_666C50A44F761C54E3E42B8CD483DC7B;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label_11_39F9F19A4910C67B8D9DADB7F562A89F;         // 0x8(0x18)(Edit, BlueprintVisible, SaveGame)
	class FName                                  GroupID_28_9E893F914F388A25DD4D999D55295834;       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   RelatedData_29_FB6C371B410BA3F464FD1B84C6553406;   // 0x28(0x10)(Edit, BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash)
	struct FItemConstraint                       ItemConstraint_32_6302F5104BB0065194CD118CE973D43D; // 0x38(0x40)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        CurrentCount_16_F0877C8B4B5CC730FC284F90D97055A7;  // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DesiredCount_15_8BCE6C8648F3CBE53403569CBBD9CB88;  // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackStackCount_19_17A5506C403C70331CCD13BBE149141B; // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowOnHUD_37_4707BA4943DFC7DE43EDCA8259BA6E40;    // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanUntrack_39_0CEE219C47E54C837F90B4B74720D905;   // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestTaskCompletionRequirements  CompletionRequirement_42_7FE117D644227A2BB138F5AE3739F21B; // 0x86(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


