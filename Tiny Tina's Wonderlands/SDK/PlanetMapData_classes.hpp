#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x1B0 - 0x130)
// BlueprintGeneratedClass PlanetMapData.PlanetMapData_C
class UPlanetMapData_C : public UPlanetData
{
public:
	struct FTransform                            Desired_Local_Transform;                           // 0x130(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                              Planet_Rotation;                                   // 0x160(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                              Light_Direction;                                   // 0x16C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Sun_Light_Color;                                   // 0x178(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sun_Brightness;                                    // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sun_Radius;                                        // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Initial_Rotation;                                  // 0x190(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FRotator                              TriGrid_Rotation;                                  // 0x19C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                        Seed;                                              // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Seed2;                                             // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlanetMapData_C* GetDefaultObj();

};

}


