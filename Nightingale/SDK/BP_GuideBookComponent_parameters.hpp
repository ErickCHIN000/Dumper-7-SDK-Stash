#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0xA1 - 0x0)
// Function BP_GuideBookComponent.BP_GuideBookComponent_C.InitializeLastSelectedEntries
struct UBP_GuideBookComponent_C_InitializeLastSelectedEntries_Params
{
public:
	class UBP_UI_PersistenceComponent_C*         LPersistenceComponent;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       LPlayerState;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookGlossaryCategoryTag_ReturnValue; // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GuideBookGlossaryCategoryTag_ReturnValue_1; // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookTutorialCategoryTag_ReturnValue; // 0x24(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookTutorialCategoryTag_ReturnValue_1; // 0x2C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXMenuDataEntry*                     CallFunc_FindEntryWithIDFromCategory_ReturnValue;  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     CallFunc_FindEntryWithIDFromCategory_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookCodexCategoryTag_ReturnValue;    // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookCodexCategoryTag_ReturnValue_1;  // 0x58(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue; // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue_1; // 0x68(0x8)(NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     CallFunc_FindEntryWithIDFromCategory_ReturnValue_2; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookBuildingCategoryTag_ReturnValue; // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     CallFunc_FindEntryWithIDFromCategory_ReturnValue_3; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GuideBookBuildingCategoryTag_ReturnValue_1; // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	class UBP_UI_PersistenceComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     CallFunc_FindEntryWithIDFromCategory_ReturnValue_4; // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


