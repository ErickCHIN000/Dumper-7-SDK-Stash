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

// 0x78 (0x78 - 0x0)
// UserDefinedStruct S_Persisted_RealmVisitedInfo.S_Persisted_RealmVisitedInfo
struct FS_Persisted_RealmVisitedInfo
{
public:
	class FString                                RealmID_2_17E2FB59449047445E9640B5F5CDBB09;        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RealmCardTags_34_67130B874BC13826BF975AB02EE328FD; // 0x10(0x20)(Edit, BlueprintVisible)
	enum class EBiomeID                          Biome_37_D57457AE4D19214B0EEDC5A4618E622A;         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4996[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRealmInfluenceValues                 Influences_28_36A0CA8344DB15E50A74C1ADFF75FD73;    // 0x34(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        LastKnownRealmPower_16_DC734D3B410CB1C4BC6DBF97B58238A5; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Atmosphere_15_A40014FD4384AA9AE3AE4FA83C2A34DE;    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TotalTimeSpentInRealm_20_D228B5C742058BA5B950E2AEBE9AC8F0; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             LastVisited_GameTime_24_95086018466FBE6110E979950443474D; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             LastVisited_RealTime_26_1E92D46B4B65975A71AFFD99EF3B2487; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                LevelLayoutName_33_533FDC2246F95EF73C1C6182C4F5F069; // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


