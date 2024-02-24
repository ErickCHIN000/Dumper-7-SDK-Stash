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

// 0x121 (0x121 - 0x0)
// UserDefinedStruct S_AudioAmbienceEventData.S_AudioAmbienceEventData
struct FS_AudioAmbienceEventData
{
public:
	class FString                                Name_45_88EBA8924491DEEF3C882FA45E788EB5;          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Base_Amb_Tree_Standard_Inner_Play_70_F55E03A04189404E10573FB155F31A42; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Base_Amb_Tree_Standard_Inner_Stop_71_FFA60B4646EE34C64F54618741B01D33; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Base_Amb_Tree_Standard_Outer_Play_72_76160BF54F475F6153776AB044FD50FC; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Base_Amb_Tree_Standard_Outer_Stop_73_7A7B902442733FBBE458C2A31EFDE3AF; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       OS_Plsnt_Day_MinTime_22_4D1419A14676541A391FAC98D0E60E91; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OS_Plsnt_Day_MaxTime_21_1A8E66A8489B947C1D821FBA11807230; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OS_Plsnt_Day_Ak_Event_95_DC38BA764660E62C2C75518E76507374; // 0x40(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       OS_Plsnt_Night_MinTime_25_C35CB69D47AA0AAC5FD860B22645BD45; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OS_Plsnt_Night_MaxTime_18_748BD6334237561A62B722A0DA29EC0F; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OS_Plsnt_Night_Ak_Event_96_320606DB4F3E71B1B80670B7BF705A1A; // 0x78(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       OS_Tense_Day_MinTime_32_F73F4670489EB6749B7DF9BA09262942; // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OS_Tense_Day_MaxTime_31_4EC0512846F035CACEFC6B93F4ED4CE0; // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OS_Tense_Day_Ak_Event_97_4A14C97A488F75536A1B6FB42A37CFCE; // 0xB0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                       OS_Tense_Night_MinTime_36_62F154C5448AFE86A98002B36D3DC3B4; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OS_Tense_Night_MaxTime_38_7EB7971F4F420DB18268328CA6F352D2; // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          OS_Tense_Night_Ak_Event_98_D947322D4013270A2607DBADE785CE00; // 0xE8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAkAudioEvent*                         Wind_OS_Rustle_Inner_81_F2009FA7469D05464F058AB26501958B; // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Wind_OS_Rustle_Outer_79_22E0521C4E91D42BAC6C3CA5C8AA669B; // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreTreeDensity_100_73D1C2144BDE9E44361AD2B087891029; // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


