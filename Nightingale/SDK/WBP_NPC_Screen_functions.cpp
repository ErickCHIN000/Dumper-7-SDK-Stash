#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_Screen.WBP_NPC_Screen_C
// (None)

class UClass* UWBP_NPC_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_Screen_C");

	return Clss;
}


// WBP_NPC_Screen_C WBP_NPC_Screen.Default__WBP_NPC_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_Screen_C* UWBP_NPC_Screen_C::GetDefaultObj()
{
	static class UWBP_NPC_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_Screen_C*>(UWBP_NPC_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.HandleOnTamageTaken
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEffectContextData    ContextData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::HandleOnTamageTaken(float OldHealth, float NewHealth, struct FDamageEffectContextData& ContextData, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "HandleOnTamageTaken");

	Params::UWBP_NPC_Screen_C_HandleOnTamageTaken_Params Parms{};

	Parms.OldHealth = OldHealth;
	Parms.NewHealth = NewHealth;
	Parms.ContextData = ContextData;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_NPC_Screen_C::DoCustomNavigation(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue, class UWBP_Common_Button_Base_C* CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "DoCustomNavigation");

	Params::UWBP_NPC_Screen_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus = CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Common_Button_Base_C*   CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetEncounterButtonToFocus_Output                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_NPC_Screen_C::BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_Common_Button_Base_C* CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus, class UWidget* CallFunc_GetEncounterButtonToFocus_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_NPC_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus = CallFunc_Get_Employee_Button_to_Focus_ButtonToFocus;
	Parms.CallFunc_GetEncounterButtonToFocus_Output = CallFunc_GetEncounterButtonToFocus_Output;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.TryGetEphemeralContainer
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PersistentEphemeralItemContainer_C*Container                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PersistentEphemeralItemContainer_C*PotentialMatch                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_PersistentEphemeralItemContainer_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PersistentEphemeralItemContainer_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::TryGetEphemeralContainer(class AActor* TargetActor, bool* bSuccess, class ABP_PersistentEphemeralItemContainer_C** Container, class ABP_PersistentEphemeralItemContainer_C* PotentialMatch, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_PersistentEphemeralItemContainer_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_PersistentEphemeralItemContainer_C* CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "TryGetEphemeralContainer");

	Params::UWBP_NPC_Screen_C_TryGetEphemeralContainer_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.PotentialMatch = PotentialMatch;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Container != nullptr)
		*Container = Parms.Container;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_NPC_Screen_C::GetDefaultFocusWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "GetDefaultFocusWidget");

	Params::UWBP_NPC_Screen_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CheckifPlayerhasExchangeBoard(HideContracts)
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Has_Faction_Store                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         L_ExchangeBoardRowRef                                            (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CheckifPlayerhasExchangeBoard_HideContracts_(bool* Has_Faction_Store, const struct FDataTableRowHandle& L_ExchangeBoardRowRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_RowHandlesEqual_Equal_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CheckifPlayerhasExchangeBoard(HideContracts)");

	Params::UWBP_NPC_Screen_C_CheckifPlayerhasExchangeBoard_HideContracts__Params Parms{};

	Parms.L_ExchangeBoardRowRef = L_ExchangeBoardRowRef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_RowHandlesEqual_Equal_1 = CallFunc_RowHandlesEqual_Equal_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Faction_Store != nullptr)
		*Has_Faction_Store = Parms.Has_Faction_Store;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Fetch Encounter Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Inv_TwoInventories_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Inv_TwoInventories_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_EphemeralItemContainer_C*CallFunc_Get_NPC_Actor_Container_EphemeralContainer              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_NPC_Actor_Container_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWBP_Inv_TwoInventories_C* UWBP_NPC_Screen_C::Fetch_Encounter_Menu(class UWBP_Inv_TwoInventories_C* CallFunc_Create_ReturnValue, class ABP_EphemeralItemContainer_C* CallFunc_Get_NPC_Actor_Container_EphemeralContainer, bool CallFunc_Get_NPC_Actor_Container_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Fetch Encounter Menu");

	Params::UWBP_NPC_Screen_C_Fetch_Encounter_Menu_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_NPC_Actor_Container_EphemeralContainer = CallFunc_Get_NPC_Actor_Container_EphemeralContainer;
	Parms.CallFunc_Get_NPC_Actor_Container_Success = CallFunc_Get_NPC_Actor_Container_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.IsScreenHovered
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_NPC_Screen_C::IsScreenHovered(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_IsHovered_ReturnValue_3, bool CallFunc_IsHovered_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "IsScreenHovered");

	Params::UWBP_NPC_Screen_C_IsScreenHovered_Params Parms{};

	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_2 = CallFunc_IsHovered_ReturnValue_2;
	Parms.CallFunc_IsHovered_ReturnValue_3 = CallFunc_IsHovered_ReturnValue_3;
	Parms.CallFunc_IsHovered_ReturnValue_4 = CallFunc_IsHovered_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Get NPC Actor Container
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_EphemeralItemContainer_C*EphemeralContainer                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDynamicData>CallFunc_GetAllDynamicData_OutData                               (ReferenceParm)
// struct FEncounterDynamicData       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetEphemeralContainer_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PersistentEphemeralItemContainer_C*CallFunc_TryGetEphemeralContainer_Container                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::Get_NPC_Actor_Container(class ABP_EphemeralItemContainer_C** EphemeralContainer, bool* Success, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TryGetEphemeralContainer_bSuccess, class ABP_PersistentEphemeralItemContainer_C* CallFunc_TryGetEphemeralContainer_Container, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Get NPC Actor Container");

	Params::UWBP_NPC_Screen_C_Get_NPC_Actor_Container_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllDynamicData_OutData = CallFunc_GetAllDynamicData_OutData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TryGetEphemeralContainer_bSuccess = CallFunc_TryGetEphemeralContainer_bSuccess;
	Parms.CallFunc_TryGetEphemeralContainer_Container = CallFunc_TryGetEphemeralContainer_Container;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EphemeralContainer != nullptr)
		*EphemeralContainer = Parms.EphemeralContainer;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.HandleInputFaceButtonTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasDialog_HasDialog                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::HandleInputFaceButtonTop(bool CallFunc_HasDialog_HasDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "HandleInputFaceButtonTop");

	Params::UWBP_NPC_Screen_C_HandleInputFaceButtonTop_Params Parms{};

	Parms.CallFunc_HasDialog_HasDialog = CallFunc_HasDialog_HasDialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.HandleInputFaceButtonLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasDialog_HasDialog                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::HandleInputFaceButtonLeft(bool CallFunc_HasDialog_HasDialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "HandleInputFaceButtonLeft");

	Params::UWBP_NPC_Screen_C_HandleInputFaceButtonLeft_Params Parms{};

	Parms.CallFunc_HasDialog_HasDialog = CallFunc_HasDialog_HasDialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.HasDialog
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasDialog                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DialogueComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::HasDialog(bool* HasDialog, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "HasDialog");

	Params::UWBP_NPC_Screen_C_HasDialog_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (HasDialog != nullptr)
		*HasDialog = Parms.HasDialog;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.OnInputContext
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContextIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_NPC_Screen_C::OnInputContext(int32 ContextIndex, const struct FEventReply& CallFunc_Handled_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "OnInputContext");

	Params::UWBP_NPC_Screen_C_OnInputContext_Params Parms{};

	Parms.ContextIndex = ContextIndex;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_NPC_Screen_C::OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "OnInputCancel");

	Params::UWBP_NPC_Screen_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetDialogueTemplateFromSpeaker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*                   Dialogue                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundSpeaker                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_Dialogue_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetDataTableRowHandles_RowHandles                       (ReferenceParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DialogueTemplateMapping  CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsWBP_Dialogue_Base                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DialogueBase_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetDialogueTemplateFromSpeaker(class UDialogue* Dialogue, bool FoundSpeaker, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UWBP_Dialogue_C* CallFunc_Create_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_DialogueTemplateMapping& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Dialogue_Base, bool K2Node_ClassDynamicCast_bSuccess, class UWBP_DialogueBase_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetDialogueTemplateFromSpeaker");

	Params::UWBP_NPC_Screen_C_SetDialogueTemplateFromSpeaker_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.FoundSpeaker = FoundSpeaker;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowHandles_RowHandles = CallFunc_GetDataTableRowHandles_RowHandles;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsWBP_Dialogue_Base = K2Node_ClassDynamicCast_AsWBP_Dialogue_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Leave ViaDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::Leave_ViaDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Leave ViaDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.OnReturnFromSubMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::OnReturnFromSubMenu(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "OnReturnFromSubMenu");

	Params::UWBP_NPC_Screen_C_OnReturnFromSubMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.OpenMenuViaDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MenuName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_ui_NPCMenus           MenuType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Menu                                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               FoundMenu                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ui_NPCMenus           CallFunc_GetNPCMenu_Menu_Type                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCMenu_Optional___Menu_Name_                        (None)
// TArray<struct FDataTableRowHandle> CallFunc_GetNPCMenu_Available_Content                            (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::OpenMenuViaDialogue(class FText MenuName, enum class E_ui_NPCMenus MenuType, const struct FDataTableRowHandle& Menu, bool FoundMenu, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class E_ui_NPCMenus CallFunc_GetNPCMenu_Menu_Type, class FText CallFunc_GetNPCMenu_Optional___Menu_Name_, TArray<struct FDataTableRowHandle>& CallFunc_GetNPCMenu_Available_Content, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "OpenMenuViaDialogue");

	Params::UWBP_NPC_Screen_C_OpenMenuViaDialogue_Params Parms{};

	Parms.MenuName = MenuName;
	Parms.MenuType = MenuType;
	Parms.Menu = Menu;
	Parms.FoundMenu = FoundMenu;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNPCMenu_Menu_Type = CallFunc_GetNPCMenu_Menu_Type;
	Parms.CallFunc_GetNPCMenu_Optional___Menu_Name_ = CallFunc_GetNPCMenu_Optional___Menu_Name_;
	Parms.CallFunc_GetNPCMenu_Available_Content = CallFunc_GetNPCMenu_Available_Content;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetupDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBase_C*         OutputPin                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetupDialogue(class UWBP_DialogueBase_C** OutputPin, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetupDialogue");

	Params::UWBP_NPC_Screen_C_SetupDialogue_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetupContractBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ShopScreen_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestGiverFactionExchange_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetupContractBoard(class UWBP_ShopScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetupContractBoard");

	Params::UWBP_NPC_Screen_C_SetupContractBoard_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;
	Parms.CallFunc_IsQuestGiverFactionExchange_ReturnValue = CallFunc_IsQuestGiverFactionExchange_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetupDialogueOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBase_C*         CallFunc_SetupDialogue_OutputPin                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetupDialogueOnly(class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetupDialogueOnly");

	Params::UWBP_NPC_Screen_C_SetupDialogueOnly_Params Parms{};

	Parms.CallFunc_SetupDialogue_OutputPin = CallFunc_SetupDialogue_OutputPin;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetupMenuRoot&Dialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFactionStore                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DialogueBase_C*         CallFunc_SetupDialogue_OutputPin                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetupMenuRoot_Dialogue(bool HasFactionStore, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store, bool CallFunc_IsValid_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_DoesDataTableRowExist_ReturnValue, class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetupMenuRoot&Dialogue");

	Params::UWBP_NPC_Screen_C_SetupMenuRoot_Dialogue_Params Parms{};

	Parms.HasFactionStore = HasFactionStore;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store = CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_SetupDialogue_OutputPin = CallFunc_SetupDialogue_OutputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Display FullscreenMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPC_Menu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ContractBoard_Ref                                                (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::Display_FullscreenMenu(const struct FDataTableRowHandle& NPC_Menu, const struct FDataTableRowHandle& ContractBoard_Ref, bool CallFunc_RowHandlesEqual_Equal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Display FullscreenMenu");

	Params::UWBP_NPC_Screen_C_Display_FullscreenMenu_Params Parms{};

	Parms.NPC_Menu = NPC_Menu;
	Parms.ContractBoard_Ref = ContractBoard_Ref;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Setup Menu Root Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFactionStore                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DialogueBase_C*         CallFunc_SetupDialogue_OutputPin                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::Setup_Menu_Root_Only(bool HasFactionStore, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_DialogueBase_C* CallFunc_SetupDialogue_OutputPin, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Setup Menu Root Only");

	Params::UWBP_NPC_Screen_C_Setup_Menu_Root_Only_Params Parms{};

	Parms.HasFactionStore = HasFactionStore;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store = CallFunc_CheckifPlayerhasExchangeBoard_HideContracts__Has_Faction_Store;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetupDialogue_OutputPin = CallFunc_SetupDialogue_OutputPin;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.HasContractBoard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               HasContractBoard                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ContractBoardFound                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// enum class E_ui_NPCMenus           CallFunc_GetNPCMenu_Menu_Type                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCMenu_Optional___Menu_Name_                        (None)
// TArray<struct FDataTableRowHandle> CallFunc_GetNPCMenu_Available_Content                            (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::HasContractBoard(TArray<struct FDataTableRowHandle>& Array, bool* HasContractBoard, bool ContractBoardFound, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class E_ui_NPCMenus CallFunc_GetNPCMenu_Menu_Type, class FText CallFunc_GetNPCMenu_Optional___Menu_Name_, TArray<struct FDataTableRowHandle>& CallFunc_GetNPCMenu_Available_Content, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "HasContractBoard");

	Params::UWBP_NPC_Screen_C_HasContractBoard_Params Parms{};

	Parms.Array = Array;
	Parms.ContractBoardFound = ContractBoardFound;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetNPCMenu_Menu_Type = CallFunc_GetNPCMenu_Menu_Type;
	Parms.CallFunc_GetNPCMenu_Optional___Menu_Name_ = CallFunc_GetNPCMenu_Optional___Menu_Name_;
	Parms.CallFunc_GetNPCMenu_Available_Content = CallFunc_GetNPCMenu_Available_Content;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasContractBoard != nullptr)
		*HasContractBoard = Parms.HasContractBoard;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.TEMP_img_contracts_!?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_HiringStatus       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (None)

struct FSlateBrush UWBP_NPC_Screen_C::TEMP_img_contracts___(enum class Enum_HiringStatus Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_4, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UTexture2D* K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "TEMP_img_contracts_!?");

	Params::UWBP_NPC_Screen_C_TEMP_img_contracts____Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Setup Menu With Content
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                L_Faction                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Menu                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> MenuContent                                                      (Edit, BlueprintVisible)
// bool                               MenuRowFound                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestGiverFactionExchange_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MotdScreen_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_EmployeeMGMT_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_NPC_Encounter_Escort_C* CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Inv_TwoInventories_C*   CallFunc_Fetch_Encounter_Menu_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetEncounterButtonToFocus_Output                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      K2Node_DynamicCast_AsNWXCommon_Window_Widget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::Setup_Menu_With_Content(const struct FDataTableRowHandle& Row, enum class EFaction L_Faction, class UUserWidget* Menu, const TArray<struct FDataTableRowHandle>& MenuContent, bool MenuRowFound, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_MotdScreen_C* CallFunc_Create_ReturnValue, class UWBP_NPC_EmployeeMGMT_C* CallFunc_Create_ReturnValue_1, class UWBP_NPC_Encounter_Escort_C* CallFunc_Create_ReturnValue_2, class UWBP_Inv_TwoInventories_C* CallFunc_Fetch_Encounter_Menu_ReturnValue, class UWidget* CallFunc_GetEncounterButtonToFocus_Output, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNWXCommonWindowWidget* K2Node_DynamicCast_AsNWXCommon_Window_Widget, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Setup Menu With Content");

	Params::UWBP_NPC_Screen_C_Setup_Menu_With_Content_Params Parms{};

	Parms.Row = Row;
	Parms.L_Faction = L_Faction;
	Parms.Menu = Menu;
	Parms.MenuContent = MenuContent;
	Parms.MenuRowFound = MenuRowFound;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;
	Parms.CallFunc_IsQuestGiverFactionExchange_ReturnValue = CallFunc_IsQuestGiverFactionExchange_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Fetch_Encounter_Menu_ReturnValue = CallFunc_Fetch_Encounter_Menu_ReturnValue;
	Parms.CallFunc_GetEncounterButtonToFocus_Output = CallFunc_GetEncounterButtonToFocus_Output;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNWXCommon_Window_Widget = K2Node_DynamicCast_AsNWXCommon_Window_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.SetupNPCInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetCreatureInfo_UIName                                  (None)
// class FText                        CallFunc_GetCreatureInfo_UIDescription                           (None)
// class UTexture2D*                  CallFunc_GetCreatureInfo_UIIcon                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::SetupNPCInfo(class FText CallFunc_GetCreatureInfo_UIName, class FText CallFunc_GetCreatureInfo_UIDescription, class UTexture2D* CallFunc_GetCreatureInfo_UIIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "SetupNPCInfo");

	Params::UWBP_NPC_Screen_C_SetupNPCInfo_Params Parms{};

	Parms.CallFunc_GetCreatureInfo_UIName = CallFunc_GetCreatureInfo_UIName;
	Parms.CallFunc_GetCreatureInfo_UIDescription = CallFunc_GetCreatureInfo_UIDescription;
	Parms.CallFunc_GetCreatureInfo_UIIcon = CallFunc_GetCreatureInfo_UIIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.RefreshTasksList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Shop_JobBoard_ScreenSpace_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestGiverFactionExchange_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::RefreshTasksList(bool CallFunc_IsFeatureFlagEnabled_ReturnValue, class UWBP_Shop_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_JobBoard_ScreenSpace_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "RefreshTasksList");

	Params::UWBP_NPC_Screen_C_RefreshTasksList_Params Parms{};

	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsQuestGiverFactionExchange_ReturnValue = CallFunc_IsQuestGiverFactionExchange_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Information                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NPC_Screen_C::CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallCreatureKilled");

	Params::UWBP_NPC_Screen_C_CallCreatureKilled_Params Parms{};

	Parms.Creature_Information = Creature_Information;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallGiveTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallGiveTag(const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallGiveTag");

	Params::UWBP_NPC_Screen_C_CallGiveTag_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallStructureBlueprintPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallStructureBlueprintPlaced");

	Params::UWBP_NPC_Screen_C_CallStructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallResourceHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallResourceHarvested");

	Params::UWBP_NPC_Screen_C_CallResourceHarvested_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallStructureCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallStructureCompleted");

	Params::UWBP_NPC_Screen_C_CallStructureCompleted_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallItemDeposited_InWorldContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallItemDeposited_InWorldContainer");

	Params::UWBP_NPC_Screen_C_CallItemDeposited_InWorldContainer_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallWeakpointHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_NPC_Screen_C::CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallWeakpointHit");

	Params::UWBP_NPC_Screen_C_CallWeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallOnSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>SpellCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallOnSpellCast");

	Params::UWBP_NPC_Screen_C_CallOnSpellCast_Params Parms{};

	Parms.SpellCast = SpellCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallOnGlyphRevealed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::CallOnGlyphRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallOnGlyphRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallFishCaught
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_NPC_Screen_C::CallFishCaught(struct FFish& CaughtFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallFishCaught");

	Params::UWBP_NPC_Screen_C_CallFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.CallOnInteractedWithPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::CallOnInteractedWithPlayer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "CallOnInteractedWithPlayer");

	Params::UWBP_NPC_Screen_C_CallOnInteractedWithPlayer_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.OnInternalClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::OnInternalClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "OnInternalClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_NPC_Screen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Screen.WBP_NPC_Screen_C.ExecuteUbergraph_WBP_NPC_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_NPCMenuComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasContractBoard_HasContractBoard                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFish                       K2Node_Event_CaughtFish                                          (ConstParm, ContainsInstancedReference)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_Event_SpellCast                                           (HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_WeakpointType                                       (None)
// struct FGameplayTagContainer       K2Node_Event_CreatureTags                                        (None)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDialog_HasDialog                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemRowHandle                                       (HasGetValueTypeHash)
// int32                              K2Node_Event_Quantity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ContainerTag                                        (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Owning_Actor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Piece_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowHandlesEqual_Equal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasDialog_HasDialog_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Event_ItemEntry                                           (None)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_StructureDataHandle                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_Gameplay_Tag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Creature_Information                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_CreatureTagContainer                                (None)
// struct FGameplayTagContainer       K2Node_Event_KillerTagContainer                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Screen_C::ExecuteUbergraph_WBP_NPC_Screen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_UI_NPCMenuComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_HasContractBoard_HasContractBoard, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APawn* K2Node_Event_InteractingPawn, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFish& K2Node_Event_CaughtFish, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasDialog_HasDialog, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, bool CallFunc_HasDialog_HasDialog_1, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Screen_C", "ExecuteUbergraph_WBP_NPC_Screen");

	Params::UWBP_NPC_Screen_C_ExecuteUbergraph_WBP_NPC_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasContractBoard_HasContractBoard = CallFunc_HasContractBoard_HasContractBoard;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_CaughtFish = K2Node_Event_CaughtFish;
	Parms.K2Node_Event_SpellCast = K2Node_Event_SpellCast;
	Parms.K2Node_Event_WeakpointType = K2Node_Event_WeakpointType;
	Parms.K2Node_Event_CreatureTags = K2Node_Event_CreatureTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasDialog_HasDialog = CallFunc_HasDialog_HasDialog;
	Parms.K2Node_Event_ItemRowHandle = K2Node_Event_ItemRowHandle;
	Parms.K2Node_Event_Quantity = K2Node_Event_Quantity;
	Parms.K2Node_Event_ContainerTag = K2Node_Event_ContainerTag;
	Parms.K2Node_Event_Owning_Actor = K2Node_Event_Owning_Actor;
	Parms.K2Node_Event_Piece_ID = K2Node_Event_Piece_ID;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_RowHandlesEqual_Equal = CallFunc_RowHandlesEqual_Equal;
	Parms.CallFunc_HasDialog_HasDialog_1 = CallFunc_HasDialog_HasDialog_1;
	Parms.K2Node_Event_ItemEntry = K2Node_Event_ItemEntry;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_StructureDataHandle = K2Node_Event_StructureDataHandle;
	Parms.K2Node_Event_Gameplay_Tag = K2Node_Event_Gameplay_Tag;
	Parms.K2Node_Event_Creature_Information = K2Node_Event_Creature_Information;
	Parms.K2Node_Event_CreatureTagContainer = K2Node_Event_CreatureTagContainer;
	Parms.K2Node_Event_KillerTagContainer = K2Node_Event_KillerTagContainer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXCharacter_1 = K2Node_DynamicCast_AsNWXCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


