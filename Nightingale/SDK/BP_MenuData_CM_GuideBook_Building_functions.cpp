#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Building.BP_MenuData_CM_GuideBook_Building_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Building_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Building_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Building_C BP_MenuData_CM_GuideBook_Building.Default__BP_MenuData_CM_GuideBook_Building_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Building_C* UBP_MenuData_CM_GuideBook_Building_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Building_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Building_C*>(UBP_MenuData_CM_GuideBook_Building_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Building.BP_MenuData_CM_GuideBook_Building_C.PostInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      LPermLockedEntriesFilter                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureAssetReference>CallFunc_GatherAllUnlockableStructures_OutStructureReferences    (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Building_C::PostInitialize(class UClass* LPermLockedEntriesFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FStructureAssetReference>& CallFunc_GatherAllUnlockableStructures_OutStructureReferences, int32 Temp_int_Loop_Counter_Variable, const struct FStructureAssetReference& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Building_C", "PostInitialize");

	Params::UBP_MenuData_CM_GuideBook_Building_C_PostInitialize_Params Parms{};

	Parms.LPermLockedEntriesFilter = LPermLockedEntriesFilter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GatherAllUnlockableStructures_OutStructureReferences = CallFunc_GatherAllUnlockableStructures_OutStructureReferences;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_1 = CallFunc_GetLocalPlayerState_PlayerState_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Building.BP_MenuData_CM_GuideBook_Building_C.OnStructureSkillsUnlocked
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStructureAssetReference>NewlyUnlockedStructures                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryObservedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryFromID_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Building_C::OnStructureSkillsUnlocked(TArray<struct FStructureAssetReference>& NewlyUnlockedStructures, class UNWXMenuDataEntry* MenuDataEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FStructureAssetReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Building_C", "OnStructureSkillsUnlocked");

	Params::UBP_MenuData_CM_GuideBook_Building_C_OnStructureSkillsUnlocked_Params Parms{};

	Parms.NewlyUnlockedStructures = NewlyUnlockedStructures;
	Parms.MenuDataEntry = MenuDataEntry;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue = CallFunc_GetUniqueIDFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEntryFromID_ReturnValue = CallFunc_GetEntryFromID_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Building.BP_MenuData_CM_GuideBook_Building_C.CreateAndQuickAddEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureAssetReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Building_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Building_C::CreateAndQuickAddEntry(const struct FStructureAssetReference& StructureAssetReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Building_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Building_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_GuideBook_Building_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.StructureAssetReference = StructureAssetReference;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


