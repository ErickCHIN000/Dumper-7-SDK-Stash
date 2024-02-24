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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct HabHandStateStruct.HabHandStateStruct
struct FHabHandStateStruct
{
public:
	enum class ESpaceHandGripMode                HandMode_2_3BD2AF2C427B5F1B39840BB09F35AD9D;       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reaching_15_9D28D631418D25DF386AD0B1C27F775E;      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D97[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RelativeLocation_25_5AC79C6A4178DE0E1701B6A38044ECF9; // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RelativeNormal_26_1FC6816642E603478894349676EB5AF9; // 0x10(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component_12_CE5FF15A41EC22A879CEF595F50F7185;     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HandDistance_19_6AAC0007451DAB31DD23CDA41E0DBF49;  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Created_29_CFFB62AB43479A6245FF889EF02A8B15;       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


