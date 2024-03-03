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

// 0x61 (0x61 - 0x0)
// UserDefinedStruct Struct_NPC_Task.Struct_NPC_Task
struct FStruct_NPC_Task
{
public:
	enum class Enum_TaskMode                     TaskMode_2_D402DED04861840C145C33A02B1EB815;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        POIClass_27_7901FB694420D4152ABD95A040C3DA43;      // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FName>                          StationTagList_44_F7EF1FFF4253BEEFB157A487389DF68A; // 0x18(0x10)(Edit, BlueprintVisible)
	enum class Enum_StandardTasks                StandardTaskList_26_F26811714BCC7E6F28C63EB801D44DB2; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          BoundsPathIDList_37_37D00E184E5AA709058FA5AC75E20AE3; // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FVector>                       Location_29_C3289FD0409AF8961B568ABA725A49D8;      // 0x40(0x10)(Edit, BlueprintVisible)
	int32                                        CustomTaskIndex_40_96BA31064C7AA983780E5F8D30EB91F0; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TaskDurationRangeMinMax_23_656DDDED45BCE84BE0453CBEE6821BA1; // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PercentChancetoExecute_18_965720F14BC08705D04F35978707C4BF; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Canbeinterrupted_21_897CAEEA4BB0BAE1A5DC4E99D3F061C3; // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


