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

// 0xD8 (0xD8 - 0x0)
// UserDefinedStruct S_Crafting_CraftInProgress.S_Crafting_CraftInProgress
struct FS_Crafting_CraftInProgress
{
public:
	class FString                                CrafterUniqueID_27_39C2618F47D4959A3A9515A15B52A655; // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)
	struct FGuid                                 CraftInProgressID_62_D638438D4CF203DD242642BC1BC94398; // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeReference              RecipeReference_67_B828819B4872DDA5348510BCDBF26C11; // 0x20(0x70)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	int32                                        RequestedQuantity_32_4FE9C7064C60E7D36DF6DB8A9B93D0A8; // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentQuantity_53_86B76F28456824410CA9B4BC53E5D07F; // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClaimedQuantity_65_332BF8BE4D2CE5FE769289A0BF606F06; // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentStepIndex_56_634536B34E9F5249B67F418EE5E337A2; // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Crafting_Fabrication_Status     Status_48_EA68407E4F8E9F562AD80F96F3133D09;        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               InputMaterials_49_67DEBAAF4AE8C357EFAB4AAFCA207908; // 0xA8(0x10)(Edit, BlueprintVisible, SaveGame)
	struct FDynamicTypedStructs                  StepData_59_2B0B29B645775278CF03D684385E64D7;      // 0xB8(0x10)(Edit, BlueprintVisible)
	double                                       RecipeStartTime_73_6C553F60467717DC56AC08AC414DE0A2; // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RecipePauseTime_76_2D57B0244D5B3073426AF68E29916B75; // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


