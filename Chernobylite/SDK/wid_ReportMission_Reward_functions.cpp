#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_ReportMission_Reward.wid_ReportMission_Reward_C
// (None)

class UClass* UWid_ReportMission_Reward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_ReportMission_Reward_C");

	return Clss;
}


// wid_ReportMission_Reward_C wid_ReportMission_Reward.Default__wid_ReportMission_Reward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_ReportMission_Reward_C* UWid_ReportMission_Reward_C::GetDefaultObj()
{
	static class UWid_ReportMission_Reward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_ReportMission_Reward_C*>(UWid_ReportMission_Reward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_ReportMission_Reward.wid_ReportMission_Reward_C.SelectEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_ReportMission_Reward_Entry_Item_C*Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ReportMission_Reward_C::SelectEntry(class UWid_ReportMission_Reward_Entry_Item_C* Entry, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_C", "SelectEntry");

	Params::UWid_ReportMission_Reward_C_SelectEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ReportMission_Reward.wid_ReportMission_Reward_C.ChangeTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_ReportMission_Reward_C::ChangeTitle(class FText Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_C", "ChangeTitle");

	Params::UWid_ReportMission_Reward_C_ChangeTitle_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ReportMission_Reward.wid_ReportMission_Reward_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ReportMission_Reward_C::AddEntry(class UWidget* Content, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_C", "AddEntry");

	Params::UWid_ReportMission_Reward_C_AddEntry_Params Parms{};

	Parms.Content = Content;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ReportMission_Reward.wid_ReportMission_Reward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ReportMission_Reward_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_C", "PreConstruct");

	Params::UWid_ReportMission_Reward_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ReportMission_Reward.wid_ReportMission_Reward_C.ExecuteUbergraph_wid_ReportMission_Reward
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ReportMission_Reward_Entry_Item_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ReportMission_Reward_C::ExecuteUbergraph_wid_ReportMission_Reward(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_C", "ExecuteUbergraph_wid_ReportMission_Reward");

	Params::UWid_ReportMission_Reward_C_ExecuteUbergraph_wid_ReportMission_Reward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


