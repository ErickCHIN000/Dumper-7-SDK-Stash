#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_CraftingMenu_Creation.BP_MenuData_CM_CraftingMenu_Creation_C
// (None)

class UClass* UBP_MenuData_CM_CraftingMenu_Creation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_CraftingMenu_Creation_C");

	return Clss;
}


// BP_MenuData_CM_CraftingMenu_Creation_C BP_MenuData_CM_CraftingMenu_Creation.Default__BP_MenuData_CM_CraftingMenu_Creation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_CraftingMenu_Creation_C* UBP_MenuData_CM_CraftingMenu_Creation_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_CraftingMenu_Creation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_CraftingMenu_Creation_C*>(UBP_MenuData_CM_CraftingMenu_Creation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_CraftingMenu_Creation.BP_MenuData_CM_CraftingMenu_Creation_C.OnRecipeAdded
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCraftingRecipeReference>UpdatedCraftingRecipes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Creation_C::OnRecipeAdded(TArray<struct FCraftingRecipeReference>& UpdatedCraftingRecipes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Creation_C", "OnRecipeAdded");

	Params::UBP_MenuData_CM_CraftingMenu_Creation_C_OnRecipeAdded_Params Parms{};

	Parms.UpdatedCraftingRecipes = UpdatedCraftingRecipes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Creation.BP_MenuData_CM_CraftingMenu_Creation_C.CreateAndQuickAddEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingRecipeReference    CraftingRecipeReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Creation_C::CreateAndQuickAddEntry(const struct FCraftingRecipeReference& CraftingRecipeReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Creation_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_CraftingMenu_Creation_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.CraftingRecipeReference = CraftingRecipeReference;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Creation.BP_MenuData_CM_CraftingMenu_Creation_C.PostInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Creation_C::PostInitialize(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Creation_C", "PostInitialize");

	Params::UBP_MenuData_CM_CraftingMenu_Creation_C_PostInitialize_Params Parms{};

	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1 = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


