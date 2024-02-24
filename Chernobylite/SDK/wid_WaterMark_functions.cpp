#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_WaterMark.wid_WaterMark_C
// (None)

class UClass* UWid_WaterMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_WaterMark_C");

	return Clss;
}


// wid_WaterMark_C wid_WaterMark.Default__wid_WaterMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_WaterMark_C* UWid_WaterMark_C::GetDefaultObj()
{
	static class UWid_WaterMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_WaterMark_C*>(UWid_WaterMark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_WaterMark.wid_WaterMark_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_WaterMark_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WaterMark_C", "PreConstruct");

	Params::UWid_WaterMark_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_WaterMark.wid_WaterMark_C.ExecuteUbergraph_wid_WaterMark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSteamUserID_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWid_WaterMark_C::ExecuteUbergraph_wid_WaterMark(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_GetSteamUserID_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_WaterMark_C", "ExecuteUbergraph_wid_WaterMark");

	Params::UWid_WaterMark_C_ExecuteUbergraph_wid_WaterMark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetSteamUserID_ReturnValue = CallFunc_GetSteamUserID_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


