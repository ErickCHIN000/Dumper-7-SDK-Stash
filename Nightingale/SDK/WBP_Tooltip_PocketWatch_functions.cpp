#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C
// (None)

class UClass* UWBP_Tooltip_PocketWatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_PocketWatch_C");

	return Clss;
}


// WBP_Tooltip_PocketWatch_C WBP_Tooltip_PocketWatch.Default__WBP_Tooltip_PocketWatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_PocketWatch_C* UWBP_Tooltip_PocketWatch_C::GetDefaultObj()
{
	static class UWBP_Tooltip_PocketWatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_PocketWatch_C*>(UWBP_Tooltip_PocketWatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_PocketWatch_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_PocketWatch_C", "PreConstruct");

	Params::UWBP_Tooltip_PocketWatch_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_PocketWatch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_PocketWatch_C", "Tick");

	Params::UWBP_Tooltip_PocketWatch_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_PocketWatch.WBP_Tooltip_PocketWatch_C.ExecuteUbergraph_WBP_Tooltip_PocketWatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name         (None)
// bool                               CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_MapTable              CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details          (HasGetValueTypeHash)

void UWBP_Tooltip_PocketWatch_C::ExecuteUbergraph_WBP_Tooltip_PocketWatch(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name, bool CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details, const struct FS_UI_MapTable& CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_PocketWatch_C", "ExecuteUbergraph_WBP_Tooltip_PocketWatch");

	Params::UWBP_Tooltip_PocketWatch_C_ExecuteUbergraph_WBP_Tooltip_PocketWatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name = CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name;
	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details = CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details;
	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details = CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details;

	UObject::ProcessEvent(Func, &Parms);

}

}


