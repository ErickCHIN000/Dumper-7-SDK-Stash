#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_ToggleFLODDebugOverlay.CF_ToggleFLODDebugOverlay_C
// (None)

class UClass* UCF_ToggleFLODDebugOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_ToggleFLODDebugOverlay_C");

	return Clss;
}


// CF_ToggleFLODDebugOverlay_C CF_ToggleFLODDebugOverlay.Default__CF_ToggleFLODDebugOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_ToggleFLODDebugOverlay_C* UCF_ToggleFLODDebugOverlay_C::GetDefaultObj()
{
	static class UCF_ToggleFLODDebugOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_ToggleFLODDebugOverlay_C*>(UCF_ToggleFLODDebugOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_ToggleFLODDebugOverlay.CF_ToggleFLODDebugOverlay_C.GetCheckboxState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class UUMG_FLODDebugOverlay_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCF_ToggleFLODDebugOverlay_C::GetCheckboxState(TArray<class UUMG_FLODDebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ToggleFLODDebugOverlay_C", "GetCheckboxState");

	Params::UCF_ToggleFLODDebugOverlay_C_GetCheckboxState_Params Parms{};

	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_ToggleFLODDebugOverlay.CF_ToggleFLODDebugOverlay_C.OnCheckboxStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_ToggleFLODDebugOverlay_C::OnCheckboxStateChanged(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ToggleFLODDebugOverlay_C", "OnCheckboxStateChanged");

	Params::UCF_ToggleFLODDebugOverlay_C_OnCheckboxStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_ToggleFLODDebugOverlay.CF_ToggleFLODDebugOverlay_C.ExecuteUbergraph_CF_ToggleFLODDebugOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_FLODDebugOverlay_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FLODDebugOverlay_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_ToggleFLODDebugOverlay_C::ExecuteUbergraph_CF_ToggleFLODDebugOverlay(int32 EntryPoint, TArray<class UUMG_FLODDebugOverlay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_NewState, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_FLODDebugOverlay_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ToggleFLODDebugOverlay_C", "ExecuteUbergraph_CF_ToggleFLODDebugOverlay");

	Params::UCF_ToggleFLODDebugOverlay_C_ExecuteUbergraph_CF_ToggleFLODDebugOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


