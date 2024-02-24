#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Talent_Base.UMG_Talent_Base_C
// (None)

class UClass* UUMG_Talent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Talent_Base_C");

	return Clss;
}


// UMG_Talent_Base_C UMG_Talent_Base.Default__UMG_Talent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Talent_Base_C* UUMG_Talent_Base_C::GetDefaultObj()
{
	static class UUMG_Talent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Talent_Base_C*>(UUMG_Talent_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Talent_Base.UMG_Talent_Base_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Base_C::GetOverlay(class UOverlay** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "GetOverlay");

	Params::UUMG_Talent_Base_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.CanUnlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUnlockTalent_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Base_C::CanUnlock(bool* Result, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanUnlockTalent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "CanUnlock");

	Params::UUMG_Talent_Base_C_CanUnlock_Params Parms{};

	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CanUnlockTalent_ReturnValue = CallFunc_CanUnlockTalent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.Set View
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentViewInterface*        View                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Base_C::Set_View(class UTalentViewInterface* View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "Set View");

	Params::UUMG_Talent_Base_C_Set_View_Params Parms{};

	Parms.View = View;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.Set State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentModelData            New_State                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Talent_Base_C::Set_State(const struct FTalentModelData& New_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "Set State");

	Params::UUMG_Talent_Base_C_Set_State_Params Parms{};

	Parms.New_State = New_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentModelData            NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Talent_Base_C::OnStateChanged(const struct FTalentModelData& NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "OnStateChanged");

	Params::UUMG_Talent_Base_C_OnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.RefreshState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Base_C::RefreshState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "RefreshState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.OnTalentSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Talent_Base_C::OnTalentSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "OnTalentSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.Set Zoom Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Base_C::Set_Zoom_Level(int32 Level, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "Set Zoom Level");

	Params::UUMG_Talent_Base_C_Set_Zoom_Level_Params Parms{};

	Parms.Level = Level;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.ExecuteUbergraph_UMG_Talent_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        K2Node_CustomEvent_View                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            K2Node_CustomEvent_New_State                                     (NoDestructor)
// struct FTalentViewsRowHandle       CallFunc_GetViewData_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            K2Node_CustomEvent_NewState                                      (NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents_1                              (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            CallFunc_GetTalentState_OutData                                  (NoDestructor)
// bool                               CallFunc_GetTalentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlay*                    CallFunc_GetOverlay_Overlay                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Base_C::ExecuteUbergraph_UMG_Talent_Base(int32 EntryPoint, int32 K2Node_CustomEvent_Level, float K2Node_CustomEvent_Scale, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UTalentViewInterface* K2Node_CustomEvent_View, const struct FTalentModelData& K2Node_CustomEvent_New_State, const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentModelData& K2Node_CustomEvent_NewState, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents_1, enum class EValid CallFunc_GetTalentsStruct_Paths_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue, class UOverlay* CallFunc_GetOverlay_Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "ExecuteUbergraph_UMG_Talent_Base");

	Params::UUMG_Talent_Base_C_ExecuteUbergraph_UMG_Talent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_View = K2Node_CustomEvent_View;
	Parms.K2Node_CustomEvent_New_State = K2Node_CustomEvent_New_State;
	Parms.CallFunc_GetViewData_ReturnValue = CallFunc_GetViewData_ReturnValue;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetTalentsStruct_Talents_1 = CallFunc_GetTalentsStruct_Talents_1;
	Parms.CallFunc_GetTalentsStruct_Paths_1 = CallFunc_GetTalentsStruct_Paths_1;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_GetTalentState_OutData = CallFunc_GetTalentState_OutData;
	Parms.CallFunc_GetTalentState_ReturnValue = CallFunc_GetTalentState_ReturnValue;
	Parms.CallFunc_GetOverlay_Overlay = CallFunc_GetOverlay_Overlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Base_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Base.UMG_Talent_Base_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Talent_Base_C*          Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Base_C::OnHover__DelegateSignature(class UUMG_Talent_Base_C* Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Base_C", "OnHover__DelegateSignature");

	Params::UUMG_Talent_Base_C_OnHover__DelegateSignature_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}

}


