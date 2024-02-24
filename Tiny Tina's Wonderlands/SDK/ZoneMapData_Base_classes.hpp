#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x280 - 0x228)
// BlueprintGeneratedClass ZoneMapData_Base.ZoneMapData_Base_C
class UZoneMapData_Base_C : public UZoneMapData
{
public:
	TArray<struct FZoneMapSection>               Zone_Map_Sections;                                 // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	uint8                                        Pad_30AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Planet_Transform;                                  // 0x240(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                        Target_Yaw;                                        // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Pitch;                                      // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Override_Target_Scale;                             // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Target_Scale;                                      // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UZoneMapData_Base_C* GetDefaultObj();

};

}


