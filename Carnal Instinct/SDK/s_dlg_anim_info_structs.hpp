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

// 0x52 (0x52 - 0x0)
// UserDefinedStruct s_dlg_anim_info.s_dlg_anim_info
struct FS_dlg_anim_info
{
public:
	class FName                                  Interlocutor_id_17_36A9E1F14F0434CFD4DCBD930C137559; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Anim_info_2_AFC8BE314DBFCE5E9B9CD4B86796AC38;      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Anim_string_19_8FDEDAF746F297B5EA8125A14F17CF78;   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class Enum_dlg_anim_slot                Anim_slot_47_BD191B6B465B35183E182CAEA12D40D5;     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Anim_sequence_45_B4ADB13D440775E510D912824D3DCAEC; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_montage_13_B17B6ADF47D5E7087D8830BDBF4E9E5C;  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Loop_count_49_F93E74E5466FEB7F27095292313645B9;    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        In_play_rate_51_00AE7067459A7E0A17CB7BB15CE935DE;  // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        In_start_time_57_2C44641241A96C5A6B74B0A3C0ED5A06; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        blend_in_54_F69686984A338DBD38C9F59ADAC37185;      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        blend_out_55_DBCA3A074E9D4891C038B5959FE0FB44;     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        blend_out_trigger_time_60_4EA56E32476A314A488285A9873387F0; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stop_all_slots_62_1FFA06DA445766D572EE7E95169E5826; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Stop_all_montage_64_9E9914B142B080481DC510996C304DA4; // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


