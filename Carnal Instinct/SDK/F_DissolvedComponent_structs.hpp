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

// 0x32 (0x32 - 0x0)
// UserDefinedStruct F_DissolvedComponent.F_DissolvedComponent
struct FF_DissolvedComponent
{
public:
	class UPrimitiveComponent*                   Component_6_9D6E9B1A4B75190BBEF89BA99ADBD8B3;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value_7_5CE3CA5B430AC6DCE08F0CBAB90CB8A9;          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            Materials_10_EC7441004376ECC2D853FBB54673CAB8;     // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class UMaterialInstanceDynamic*>      DissolveMaterials_13_A201DED0493C1625D69A79B22D60095A; // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         Reverse_20_A74BA1544A8280D871D4A89973F4B54F;       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsRunning_19_DA4AAAA141F88ABCACB280B8CB3FA7C6;     // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


