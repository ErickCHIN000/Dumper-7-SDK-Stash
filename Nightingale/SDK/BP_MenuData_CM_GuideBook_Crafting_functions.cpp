#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Crafting.BP_MenuData_CM_GuideBook_Crafting_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Crafting_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Crafting_C BP_MenuData_CM_GuideBook_Crafting.Default__BP_MenuData_CM_GuideBook_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Crafting_C* UBP_MenuData_CM_GuideBook_Crafting_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Crafting_C*>(UBP_MenuData_CM_GuideBook_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Crafting.BP_MenuData_CM_GuideBook_Crafting_C.PostInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LPermLockedEntriesFilter                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>CallFunc_GatherAllUnlockableRecipes_OutRecipeReferences          (ReferenceParm)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Crafting_C::PostInitialize(class UClass* LPermLockedEntriesFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FCraftingRecipeReference>& CallFunc_GatherAllUnlockableRecipes_OutRecipeReferences, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Crafting_C", "PostInitialize");

	Params::UBP_MenuData_CM_GuideBook_Crafting_C_PostInitialize_Params Parms{};

	Parms.LPermLockedEntriesFilter = LPermLockedEntriesFilter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GatherAllUnlockableRecipes_OutRecipeReferences = CallFunc_GatherAllUnlockableRecipes_OutRecipeReferences;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_1 = CallFunc_GetLocalPlayerState_PlayerState_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Crafting.BP_MenuData_CM_GuideBook_Crafting_C.OnRecipeSkillsUnlocked
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingRecipeReference>NewlyUnlockedRecipes                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryObservedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryFromID_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Crafting_C::OnRecipeSkillsUnlocked(TArray<struct FCraftingRecipeReference>& NewlyUnlockedRecipes, class UNWXMenuDataEntry* MenuDataEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Crafting_C", "OnRecipeSkillsUnlocked");

	Params::UBP_MenuData_CM_GuideBook_Crafting_C_OnRecipeSkillsUnlocked_Params Parms{};

	Parms.NewlyUnlockedRecipes = NewlyUnlockedRecipes;
	Parms.MenuDataEntry = MenuDataEntry;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_GetEntryFromID_ReturnValue = CallFunc_GetEntryFromID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Crafting.BP_MenuData_CM_GuideBook_Crafting_C.CreateAndQuickAddEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Crafting_C::CreateAndQuickAddEntry(const struct FCraftingRecipeReference& CraftingRecipeReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Crafting_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_GuideBook_Crafting_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.CraftingRecipeReference = CraftingRecipeReference;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


