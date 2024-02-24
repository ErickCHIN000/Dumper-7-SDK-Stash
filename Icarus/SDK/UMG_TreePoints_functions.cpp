#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TreePoints.UMG_TreePoints_C
// (None)

class UClass* UUMG_TreePoints_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TreePoints_C");

	return Clss;
}


// UMG_TreePoints_C UMG_TreePoints.Default__UMG_TreePoints_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TreePoints_C* UUMG_TreePoints_C::GetDefaultObj()
{
	static class UUMG_TreePoints_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TreePoints_C*>(UUMG_TreePoints_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TreePoints.UMG_TreePoints_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TreePoints_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TreePoints_C", "PreConstruct");

	Params::UUMG_TreePoints_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TreePoints.UMG_TreePoints_C.SetView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentViewInterface*        InView                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TreePoints_C::SetView(class UTalentViewInterface* InView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TreePoints_C", "SetView");

	Params::UUMG_TreePoints_C_SetView_Params Parms{};

	Parms.InView = InView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TreePoints.UMG_TreePoints_C.OnModelStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TreePoints_C::OnModelStateChanged(class UTalentModelInterface_Const* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TreePoints_C", "OnModelStateChanged");

	Params::UUMG_TreePoints_C_OnModelStateChanged_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TreePoints.UMG_TreePoints_C.UpdatePoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalentModelInterface_Const* Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TreePoints_C::UpdatePoints(class UTalentModelInterface_Const* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TreePoints_C", "UpdatePoints");

	Params::UUMG_TreePoints_C_UpdatePoints_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TreePoints.UMG_TreePoints_C.ExecuteUbergraph_UMG_TreePoints
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* K2Node_CustomEvent_Model                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAvailablePoints_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        K2Node_CustomEvent_InView                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentModelInterface_Const* K2Node_CustomEvent_Model_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelsRowHandle      CallFunc_GetModelRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FTalentModelsEnum           CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TreePoints_C::ExecuteUbergraph_UMG_TreePoints(int32 EntryPoint, class UTalentModelInterface_Const* K2Node_CustomEvent_Model, int32 CallFunc_GetAvailablePoints_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UTalentViewInterface* K2Node_CustomEvent_InView, class UTalentModelInterface_Const* K2Node_CustomEvent_Model_1, const struct FTalentModelsRowHandle& CallFunc_GetModelRowHandle_ReturnValue, const struct FTalentModelsEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TreePoints_C", "ExecuteUbergraph_UMG_TreePoints");

	Params::UUMG_TreePoints_C_ExecuteUbergraph_UMG_TreePoints_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.CallFunc_GetAvailablePoints_ReturnValue = CallFunc_GetAvailablePoints_ReturnValue;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_InView = K2Node_CustomEvent_InView;
	Parms.K2Node_CustomEvent_Model_1 = K2Node_CustomEvent_Model_1;
	Parms.CallFunc_GetModelRowHandle_ReturnValue = CallFunc_GetModelRowHandle_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


