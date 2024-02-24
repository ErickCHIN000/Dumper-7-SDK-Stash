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

// 0xA9 (0xA9 - 0x0)
// UserDefinedStruct Struct_StormModeCheckpointSave.Struct_StormModeCheckpointSave
struct FStruct_StormModeCheckpointSave
{
public:
	TMap<class FName, class FName>               Checkpoints_4_E195E2DA4FBA9E33EFCCA09036A15B9F;    // 0x0(0x50)(Edit, BlueprintVisible)
	struct FVector                               DeathStatuLocation_8_0A050DAE4DFC069923122C9B6149C6CD; // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TarToRestore_11_07AC371F42171B84B80B57AFA77F1A9D;  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       ArmorOnDeath_14_EF8EB3084F550B858F3ADA8373571752;  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2189[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LevelName_17_BA7979D04C79E9F9052C918EF4310372;     // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_218C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PlayerPose_20_5E9C98C04730D1A0C19C90821F5D2D57;    // 0x70(0x38)(Edit, BlueprintVisible)
	enum class Enum_ShellDye                     DyeOnDeath_23_C0DFDFC84D00C983951E5F885F8A178E;    // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


