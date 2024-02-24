#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuideBookComponent.BP_GuideBookComponent_C
// (None)

class UClass* UBP_GuideBookComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuideBookComponent_C");

	return Clss;
}


// BP_GuideBookComponent_C BP_GuideBookComponent.Default__BP_GuideBookComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GuideBookComponent_C* UBP_GuideBookComponent_C::GetDefaultObj()
{
	static class UBP_GuideBookComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GuideBookComponent_C*>(UBP_GuideBookComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GuideBookComponent.BP_GuideBookComponent_C.InitializeLastSelectedEntries
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UI_PersistenceComponent_C*LPersistenceComponent                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             LPlayerState                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookGlossaryCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookGlossaryCategoryTag_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookTutorialCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookTutorialCategoryTag_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCodexCategoryTag_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCodexCategoryTag_ReturnValue_1                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue_1       (NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue_3               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookBuildingCategoryTag_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_FindEntryWithIDFromCategory_ReturnValue_4               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GuideBookComponent_C::InitializeLastSelectedEntries(class UBP_UI_PersistenceComponent_C* LPersistenceComponent, class ANWXPlayerState* LPlayerState, const struct FGameplayTag& CallFunc_GuideBookGlossaryCategoryTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookGlossaryCategoryTag_ReturnValue_1, const struct FGameplayTag& CallFunc_GuideBookTutorialCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookTutorialCategoryTag_ReturnValue_1, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue_1, const struct FGameplayTag& CallFunc_GuideBookCodexCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCodexCategoryTag_ReturnValue_1, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue_1, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue_2, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue_3, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue_1, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GuideBookComponent_C", "InitializeLastSelectedEntries");

	Params::UBP_GuideBookComponent_C_InitializeLastSelectedEntries_Params Parms{};

	Parms.LPersistenceComponent = LPersistenceComponent;
	Parms.LPlayerState = LPlayerState;
	Parms.CallFunc_GuideBookGlossaryCategoryTag_ReturnValue = CallFunc_GuideBookGlossaryCategoryTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GuideBookGlossaryCategoryTag_ReturnValue_1 = CallFunc_GuideBookGlossaryCategoryTag_ReturnValue_1;
	Parms.CallFunc_GuideBookTutorialCategoryTag_ReturnValue = CallFunc_GuideBookTutorialCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookTutorialCategoryTag_ReturnValue_1 = CallFunc_GuideBookTutorialCategoryTag_ReturnValue_1;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue = CallFunc_FindEntryWithIDFromCategory_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue_1 = CallFunc_FindEntryWithIDFromCategory_ReturnValue_1;
	Parms.CallFunc_GuideBookCodexCategoryTag_ReturnValue = CallFunc_GuideBookCodexCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookCodexCategoryTag_ReturnValue_1 = CallFunc_GuideBookCodexCategoryTag_ReturnValue_1;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue_1 = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue_1;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue_2 = CallFunc_FindEntryWithIDFromCategory_ReturnValue_2;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue = CallFunc_GuideBookBuildingCategoryTag_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue_3 = CallFunc_FindEntryWithIDFromCategory_ReturnValue_3;
	Parms.CallFunc_GuideBookBuildingCategoryTag_ReturnValue_1 = CallFunc_GuideBookBuildingCategoryTag_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindEntryWithIDFromCategory_ReturnValue_4 = CallFunc_FindEntryWithIDFromCategory_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


