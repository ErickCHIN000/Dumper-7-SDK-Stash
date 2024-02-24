#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C
// (None)

class UClass* UWBP_GuideBook_DetailPane_Glossary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_DetailPane_Glossary_C");

	return Clss;
}


// WBP_GuideBook_DetailPane_Glossary_C WBP_GuideBook_DetailPane_Glossary.Default__WBP_GuideBook_DetailPane_Glossary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_DetailPane_Glossary_C* UWBP_GuideBook_DetailPane_Glossary_C::GetDefaultObj()
{
	static class UWBP_GuideBook_DetailPane_Glossary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_DetailPane_Glossary_C*>(UWBP_GuideBook_DetailPane_Glossary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.OnRealmCardTilePressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::OnRealmCardTilePressed(class UNWXMenuDataEntry* MenuDataEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "OnRealmCardTilePressed");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_OnRealmCardTilePressed_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.UpdateRelatedRealmCardsGrid
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryGlossary*   GlossaryEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGlossaryToAssociatedRealmsRelationsTracker*LAssociatedRealmsTracker                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   LRelatedRealmCardEntries                                         (Edit, BlueprintVisible)
// class UNWXGlossaryToAssociatedRealmsRelationsTracker*CallFunc_GetRelationsTracker_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CallFunc_GetRelatedEntries_ReturnValue                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::UpdateRelatedRealmCardsGrid(class UNWXMenuDataEntryGlossary* GlossaryEntry, class UNWXGlossaryToAssociatedRealmsRelationsTracker* LAssociatedRealmsTracker, const TArray<class UNWXMenuDataEntry*>& LRelatedRealmCardEntries, class UNWXGlossaryToAssociatedRealmsRelationsTracker* CallFunc_GetRelationsTracker_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UNWXMenuDataEntry*>& CallFunc_GetRelatedEntries_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "UpdateRelatedRealmCardsGrid");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_UpdateRelatedRealmCardsGrid_Params Parms{};

	Parms.GlossaryEntry = GlossaryEntry;
	Parms.LAssociatedRealmsTracker = LAssociatedRealmsTracker;
	Parms.LRelatedRealmCardEntries = LRelatedRealmCardEntries;
	Parms.CallFunc_GetRelationsTracker_ReturnValue = CallFunc_GetRelationsTracker_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetRelatedEntries_ReturnValue = CallFunc_GetRelatedEntries_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.OnRealmCardDoubleClicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue         (NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::OnRealmCardDoubleClicked(class UNWXMenuDataEntry* MenuDataEntry, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "OnRealmCardDoubleClicked");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_OnRealmCardDoubleClicked_Params Parms{};

	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue = CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.OnGridEntryReleased
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Thumb_C*      K2Node_DynamicCast_AsWBP_Guide_Book_Thumb                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::OnGridEntryReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "OnGridEntryReleased");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_OnGridEntryReleased_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.OnGridEntryGenerated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideBook_Thumb_C*      K2Node_DynamicCast_AsWBP_Guide_Book_Thumb                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::OnGridEntryGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "OnGridEntryGenerated");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_OnGridEntryGenerated_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Guide_Book_Thumb = K2Node_DynamicCast_AsWBP_Guide_Book_Thumb;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.UpdateCosmetics
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuDataEntry_Glossary_C*GlossaryEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFiniteMaxLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnsInAllLevels_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResourceLevelRange         CallFunc_GetLevelRange_ReturnValue                               (ConstParm, NoDestructor)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GetImage_IsValidReference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetImage_EntryImage                                     (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class UBP_MenuDataEntry_Glossary_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::UpdateCosmetics(class UBP_MenuDataEntry_Glossary_C* GlossaryEntry, bool Temp_bool_Variable, bool CallFunc_HasFiniteMaxLevel_ReturnValue, bool CallFunc_SpawnsInAllLevels_ReturnValue, const struct FResourceLevelRange& CallFunc_GetLevelRange_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class UBP_MenuDataEntry_Glossary_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "UpdateCosmetics");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_UpdateCosmetics_Params Parms{};

	Parms.GlossaryEntry = GlossaryEntry;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasFiniteMaxLevel_ReturnValue = CallFunc_HasFiniteMaxLevel_ReturnValue;
	Parms.CallFunc_SpawnsInAllLevels_ReturnValue = CallFunc_SpawnsInAllLevels_ReturnValue;
	Parms.CallFunc_GetLevelRange_ReturnValue = CallFunc_GetLevelRange_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetImage_IsValidReference = CallFunc_GetImage_IsValidReference;
	Parms.CallFunc_GetImage_EntryImage = CallFunc_GetImage_EntryImage;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Glossary;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.ResetCosmetics
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Glossary_C::ResetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "ResetCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Glossary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_DetailPane_Glossary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_DetailPane_Glossary.WBP_GuideBook_DetailPane_Glossary_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_Glossary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_DetailPane_Glossary_C::ExecuteUbergraph_WBP_GuideBook_DetailPane_Glossary(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_DetailPane_Glossary_C", "ExecuteUbergraph_WBP_GuideBook_DetailPane_Glossary");

	Params::UWBP_GuideBook_DetailPane_Glossary_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_Glossary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


