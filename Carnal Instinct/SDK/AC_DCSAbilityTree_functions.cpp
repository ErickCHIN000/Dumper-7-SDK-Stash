#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_DCSAbilityTree.AC_DCSAbilityTree_C
// (None)

class UClass* UAC_DCSAbilityTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_DCSAbilityTree_C");

	return Clss;
}


// AC_DCSAbilityTree_C AC_DCSAbilityTree.Default__AC_DCSAbilityTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_DCSAbilityTree_C* UAC_DCSAbilityTree_C::GetDefaultObj()
{
	static class UAC_DCSAbilityTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_DCSAbilityTree_C*>(UAC_DCSAbilityTree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.InitializeAbilitiesWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AbilitiesWindow_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::InitializeAbilitiesWindow(class UWB_AbilitiesWindow_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "InitializeAbilitiesWindow");

	Params::UAC_DCSAbilityTree_C_InitializeAbilitiesWindow_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.UpdateActiveSlotAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::UpdateActiveSlotAbility(const struct FS_AbilityData& AbilityData, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "UpdateActiveSlotAbility");

	Params::UAC_DCSAbilityTree_C_UpdateActiveSlotAbility_Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.GotEnoughAbilityPoints?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Got                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::GotEnoughAbilityPoints_(const struct FS_AbilityData& AbilityData, bool* Got, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "GotEnoughAbilityPoints?");

	Params::UAC_DCSAbilityTree_C_GotEnoughAbilityPoints__Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Got != nullptr)
		*Got = Parms.Got;

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.HasBeenPermanentlyUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::HasBeenPermanentlyUnlocked_(const struct FS_AbilityData& AbilityData, bool* Unlocked, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "HasBeenPermanentlyUnlocked?");

	Params::UAC_DCSAbilityTree_C_HasBeenPermanentlyUnlocked__Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.HasBeenUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Unlocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::HasBeenUnlocked_(const struct FS_AbilityData& AbilityData, bool* Unlocked, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "HasBeenUnlocked?");

	Params::UAC_DCSAbilityTree_C_HasBeenUnlocked__Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked != nullptr)
		*Unlocked = Parms.Unlocked;

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.HasBeenActivated?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Activated                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::HasBeenActivated_(const struct FS_AbilityData& AbilityData, bool* Activated, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "HasBeenActivated?");

	Params::UAC_DCSAbilityTree_C_HasBeenActivated__Params Parms{};

	Parms.AbilityData = AbilityData;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Activated != nullptr)
		*Activated = Parms.Activated;

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.AddAbilityPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PointsToAdd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::AddAbilityPoints(int32 PointsToAdd, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "AddAbilityPoints");

	Params::UAC_DCSAbilityTree_C_AddAbilityPoints_Params Parms{};

	Parms.PointsToAdd = PointsToAdd;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.RemoveAbilityPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PointsToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::RemoveAbilityPoints(int32 PointsToRemove, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "RemoveAbilityPoints");

	Params::UAC_DCSAbilityTree_C_RemoveAbilityPoints_Params Parms{};

	Parms.PointsToRemove = PointsToRemove;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.ActivateAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::ActivateAbility(class UClass* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "ActivateAbility");

	Params::UAC_DCSAbilityTree_C_ActivateAbility_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.UnlockAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_AbilityTreeSlot_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::UnlockAbility(class UClass* Ability, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "UnlockAbility");

	Params::UAC_DCSAbilityTree_C_UnlockAbility_Params Parms{};

	Parms.Ability = Ability;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.UpdateActiveSlotBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::UpdateActiveSlotBorder(class UClass* Ability, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "UpdateActiveSlotBorder");

	Params::UAC_DCSAbilityTree_C_UpdateActiveSlotBorder_Params Parms{};

	Parms.Ability = Ability;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.UnlockAbilityFromItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AbilityData              AbilityData                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               AlreadyUnlocked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_AbilityTreeSlot_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::UnlockAbilityFromItem(class UClass* Ability, struct FS_AbilityData* AbilityData, bool* AlreadyUnlocked, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "UnlockAbilityFromItem");

	Params::UAC_DCSAbilityTree_C_UnlockAbilityFromItem_Params Parms{};

	Parms.Ability = Ability;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilityData != nullptr)
		*AbilityData = std::move(Parms.AbilityData);

	if (AlreadyUnlocked != nullptr)
		*AlreadyUnlocked = Parms.AlreadyUnlocked;

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.RefreshAbilityTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_DCSAbilityTree_C::RefreshAbilityTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "RefreshAbilityTree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.RefreshAbilityBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::RefreshAbilityBar(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "RefreshAbilityBar");

	Params::UAC_DCSAbilityTree_C_RefreshAbilityBar_Params Parms{};

	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.RemoveAbilityFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::RemoveAbilityFromSlot(int32 SlotIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "RemoveAbilityFromSlot");

	Params::UAC_DCSAbilityTree_C_RemoveAbilityFromSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.AssignAbilityToSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AbilityData              AbilityData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_DCSAbilityTree_C::AssignAbilityToSlot(int32 SlotIndex, const struct FS_AbilityData& AbilityData, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "AssignAbilityToSlot");

	Params::UAC_DCSAbilityTree_C_AssignAbilityToSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.AbilityData = AbilityData;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.RemoveAbilitiesWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::RemoveAbilitiesWidget(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "RemoveAbilitiesWidget");

	Params::UAC_DCSAbilityTree_C_RemoveAbilitiesWidget_Params Parms{};

	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.OpenAbilitiesWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AbilitiesWindow_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::OpenAbilitiesWidget(class UWB_AbilitiesWindow_C* CallFunc_Create_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "OpenAbilitiesWidget");

	Params::UAC_DCSAbilityTree_C_OpenAbilitiesWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.InitializeAbilityTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AbilityTree_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::InitializeAbilityTree(class UWB_AbilityTree_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "InitializeAbilityTree");

	Params::UAC_DCSAbilityTree_C_InitializeAbilityTree_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAC_DCSAbilityTree_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.Reset Ability Points
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_DCSAbilityTree_C::Reset_Ability_Points()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "Reset Ability Points");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.OnPressedRadialAbilityBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_DCSAbilityTree_C::OnPressedRadialAbilityBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "OnPressedRadialAbilityBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.OnReleasedRadialAbilityBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_DCSAbilityTree_C::OnReleasedRadialAbilityBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "OnReleasedRadialAbilityBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_DCSAbilityTree.AC_DCSAbilityTree_C.ExecuteUbergraph_AC_DCSAbilityTree
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseOrSwitchItem_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_AbilityTreeSlot_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenActivated__Activated                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_AbilityBarSlot_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWB_AbilityBarSlot_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_RadialAbilityBarWindow_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Game_Paused__Paused                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DCSAbilityTree_C::ExecuteUbergraph_AC_DCSAbilityTree(int32 EntryPoint, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_CanUseOrSwitchItem_Result, int32 Temp_int_Array_Index_Variable_1, class UWB_AbilityTreeSlot_C* CallFunc_Array_Get_Item, bool CallFunc_HasBeenActivated__Activated, int32 CallFunc_Add_IntInt_ReturnValue_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, TArray<class UWB_AbilityBarSlot_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_AbilityBarSlot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWB_RadialAbilityBarWindow_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Is_Game_Paused__Paused, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_DCSAbilityTree_C", "ExecuteUbergraph_AC_DCSAbilityTree");

	Params::UAC_DCSAbilityTree_C_ExecuteUbergraph_AC_DCSAbilityTree_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_CanUseOrSwitchItem_Result = CallFunc_CanUseOrSwitchItem_Result;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasBeenActivated__Activated = CallFunc_HasBeenActivated__Activated;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Is_Game_Paused__Paused = CallFunc_Is_Game_Paused__Paused;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


