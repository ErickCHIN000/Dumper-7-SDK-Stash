#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C
// (None)

class UClass* UWid_RoomSkillTreeMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_RoomSkillTreeMain_C");

	return Clss;
}


// wid_RoomSkillTreeMain_C wid_RoomSkillTreeMain.Default__wid_RoomSkillTreeMain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_RoomSkillTreeMain_C* UWid_RoomSkillTreeMain_C::GetDefaultObj()
{
	static class UWid_RoomSkillTreeMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_RoomSkillTreeMain_C*>(UWid_RoomSkillTreeMain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.GetUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_GetUpgrades_NewParam                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeMain_C::GetUpgrades(class UVerticalBox** NewParam, class UVerticalBox* CallFunc_GetUpgrades_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "GetUpgrades");

	Params::UWid_RoomSkillTreeMain_C_GetUpgrades_Params Parms{};

	Parms.CallFunc_GetUpgrades_NewParam = CallFunc_GetUpgrades_NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeMain_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "PreConstruct");

	Params::UWid_RoomSkillTreeMain_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowColors                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeMain_C::Start(bool ShowColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "Start");

	Params::UWid_RoomSkillTreeMain_C_Start_Params Parms{};

	Parms.ShowColors = ShowColors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.AnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeMain_C::AnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "AnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeMain.wid_RoomSkillTreeMain_C.ExecuteUbergraph_wid_RoomSkillTreeMain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTextFromDictionary_Text                              (None)
// struct FSt_RoomData                CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowColors                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeMain_C::ExecuteUbergraph_wid_RoomSkillTreeMain(int32 EntryPoint, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetTextFromDictionary_Text, const struct FSt_RoomData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool K2Node_CustomEvent_ShowColors, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeMain_C", "ExecuteUbergraph_wid_RoomSkillTreeMain");

	Params::UWid_RoomSkillTreeMain_C_ExecuteUbergraph_wid_RoomSkillTreeMain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetTextFromDictionary_Text = CallFunc_GetTextFromDictionary_Text;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_CustomEvent_ShowColors = K2Node_CustomEvent_ShowColors;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


