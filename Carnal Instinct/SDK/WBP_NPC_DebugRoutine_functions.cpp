#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C
// (None)

class UClass* UWBP_NPC_DebugRoutine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_DebugRoutine_C");

	return Clss;
}


// WBP_NPC_DebugRoutine_C WBP_NPC_DebugRoutine.Default__WBP_NPC_DebugRoutine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_DebugRoutine_C* UWBP_NPC_DebugRoutine_C::GetDefaultObj()
{
	static class UWBP_NPC_DebugRoutine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_DebugRoutine_C*>(UWBP_NPC_DebugRoutine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.fnUpdateValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Profile                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Target_POI                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Current_POI                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Assigned_Station                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Task_Index                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Task_Time                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Station_Time                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        HP                                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Player_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Interrupt_State                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Interrupt_Timer                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NPC_DebugRoutine_C::FnUpdateValues(class FText State, class FText Profile, class FText Target_POI, class FText Current_POI, class FText Assigned_Station, class FText Task_Index, class FText Task_Time, class FText Station_Time, class FText Animation, class FText Time, class FText HP, class FText Player_Name, class FText Interrupt_State, class FText Interrupt_Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugRoutine_C", "fnUpdateValues");

	Params::UWBP_NPC_DebugRoutine_C_FnUpdateValues_Params Parms{};

	Parms.State = State;
	Parms.Profile = Profile;
	Parms.Target_POI = Target_POI;
	Parms.Current_POI = Current_POI;
	Parms.Assigned_Station = Assigned_Station;
	Parms.Task_Index = Task_Index;
	Parms.Task_Time = Task_Time;
	Parms.Station_Time = Station_Time;
	Parms.Animation = Animation;
	Parms.Time = Time;
	Parms.HP = HP;
	Parms.Player_Name = Player_Name;
	Parms.Interrupt_State = Interrupt_State;
	Parms.Interrupt_Timer = Interrupt_Timer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.fnSetNPCName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NPC_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NPC_DebugRoutine_C::FnSetNPCName(class FText NPC_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugRoutine_C", "fnSetNPCName");

	Params::UWBP_NPC_DebugRoutine_C_FnSetNPCName_Params Parms{};

	Parms.NPC_Name = NPC_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.EventDisplayMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message_Text                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Display_Amount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Permanent_Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NPC_DebugRoutine_C::EventDisplayMessage(class FText Message_Text, float Display_Amount, bool Permanent_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugRoutine_C", "EventDisplayMessage");

	Params::UWBP_NPC_DebugRoutine_C_EventDisplayMessage_Params Parms{};

	Parms.Message_Text = Message_Text;
	Parms.Display_Amount = Display_Amount;
	Parms.Permanent_Message = Permanent_Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_DebugRoutine.WBP_NPC_DebugRoutine_C.ExecuteUbergraph_WBP_NPC_DebugRoutine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message_Text                                  (None)
// float                              K2Node_CustomEvent_Display_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Permanent_Message                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NPC_DebugRoutine_C::ExecuteUbergraph_WBP_NPC_DebugRoutine(int32 EntryPoint, class FText K2Node_CustomEvent_Message_Text, float K2Node_CustomEvent_Display_Amount, bool K2Node_CustomEvent_Permanent_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_DebugRoutine_C", "ExecuteUbergraph_WBP_NPC_DebugRoutine");

	Params::UWBP_NPC_DebugRoutine_C_ExecuteUbergraph_WBP_NPC_DebugRoutine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Message_Text = K2Node_CustomEvent_Message_Text;
	Parms.K2Node_CustomEvent_Display_Amount = K2Node_CustomEvent_Display_Amount;
	Parms.K2Node_CustomEvent_Permanent_Message = K2Node_CustomEvent_Permanent_Message;

	UObject::ProcessEvent(Func, &Parms);

}

}


