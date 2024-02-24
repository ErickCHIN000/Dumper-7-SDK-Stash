#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildMode_ContextualAction.WBP_BuildMode_ContextualAction_C
// (None)

class UClass* UWBP_BuildMode_ContextualAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildMode_ContextualAction_C");

	return Clss;
}


// WBP_BuildMode_ContextualAction_C WBP_BuildMode_ContextualAction.Default__WBP_BuildMode_ContextualAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildMode_ContextualAction_C* UWBP_BuildMode_ContextualAction_C::GetDefaultObj()
{
	static class UWBP_BuildMode_ContextualAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildMode_ContextualAction_C*>(UWBP_BuildMode_ContextualAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BuildMode_ContextualAction.WBP_BuildMode_ContextualAction_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildMode_ContextualAction_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_ContextualAction_C", "OnInputMethodChanged");

	Params::UWBP_BuildMode_ContextualAction_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildMode_ContextualAction.WBP_BuildMode_ContextualAction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BuildMode_ContextualAction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_ContextualAction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildMode_ContextualAction.WBP_BuildMode_ContextualAction_C.ExecuteUbergraph_WBP_BuildMode_ContextualAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildMode_ContextualAction_C::ExecuteUbergraph_WBP_BuildMode_ContextualAction(int32 EntryPoint, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildMode_ContextualAction_C", "ExecuteUbergraph_WBP_BuildMode_ContextualAction");

	Params::UWBP_BuildMode_ContextualAction_C_ExecuteUbergraph_WBP_BuildMode_ContextualAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


