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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct S_CC_SubCategory.S_CC_SubCategory
struct FS_CC_SubCategory
{
public:
	class FText                                  Name_7_F87EB0164CCB1D6385C7FA9BD9F5521C;           // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_5_87CB1216404F8846EAA70ABD45419A2A;    // 0x18(0x18)(Edit, BlueprintVisible)
	TArray<struct FS_CC_SubPanel>                SubGroups_21_933595244C9D4E56AE060394CF64171F;     // 0x30(0x10)(Edit, BlueprintVisible)
	enum class E_UI_CC_AppearanceInputTypes      InputBehaviour_28_7B9834624E7BA55CD43D2298F27682E2; // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled__23_EE55D47F4E789D3EA788F6A4934294F6;      // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CF3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             PanelStyleImage_31_C69FFCC849144A064AE655AA54997B35; // 0x48(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


