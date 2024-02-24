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

// 0x200 (0x200 - 0x0)
// UserDefinedStruct S_Encounter_UI_Details.S_Encounter_UI_Details
struct FS_Encounter_UI_Details
{
public:
	class FText                                  Title_46_F9B1DD604CBBF9BA82756DBC4EE8A822;         // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  SubMinusTitleOptional_49_03E8C17B4F3401F4CFA848AACA014014; // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  BasicDescription_30_B369D0EF4DAD439EE50DCE823F15437D; // 0x30(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>             Marker_Icon_17_E68FA79D4712440768BB128A56641BED;   // 0x48(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             EncounterBanner_18_89EFDAB340CA792E72DAE78B41D4C726; // 0x70(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FS_UI_ImageAndText>            AdvancedDescriptionOptional_60_65A979AE4AE13EC622419EA8B719DF3C; // 0x98(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	uint8                                        Pad_4A76[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_UI_ImageAndText                    SuccessTextImageoverridesdefault_57_BB6F66DE4EAD66BB06F9DF8EE2413C6B; // 0xB0(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_UI_ImageAndText                    FailureTextImageoverridesdefault_59_3BF503A64645A2879222289F40930A0E; // 0x150(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FLinearColor                          Widget_Tint1_72_0FB71C5549C5F53B9C13E091A307D3D5;  // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


