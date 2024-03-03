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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct F_MontageAction.F_MontageAction
struct FF_MontageAction
{
public:
	enum class E_MontageAction                   Action_7_40BFAA374D1B03BB75FC0FBD65C21B0D;         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  Montages_10_5C40358241BA2988ACCCE19C504F56FD;      // 0x8(0x10)(Edit, BlueprintVisible)
};

}


