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

// 0x1A (0x1A - 0x0)
// UserDefinedStruct STRUCT_EnemyAudioParams.STRUCT_EnemyAudioParams
struct FSTRUCT_EnemyAudioParams
{
public:
	enum class EVocalizationAudioSet             VocalizationSet_11_BF65CE984799A6523584998C771FBAAA; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EWeaponAudioType>          WeaponType_12_1649F8B143691202E0CDD8A0DFA3C090;    // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EClothingType                     ClothingType_8_B126E08B441746E3C3B5E9B595D7AEFF;   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFootstepAudioType                FootstepType_2_4402D88A4B2699847CFFFEA790431C7C;   // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


