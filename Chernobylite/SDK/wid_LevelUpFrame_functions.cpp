#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelUpFrame.wid_LevelUpFrame_C
// (None)

class UClass* UWid_LevelUpFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelUpFrame_C");

	return Clss;
}


// wid_LevelUpFrame_C wid_LevelUpFrame.Default__wid_LevelUpFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelUpFrame_C* UWid_LevelUpFrame_C::GetDefaultObj()
{
	static class UWid_LevelUpFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelUpFrame_C*>(UWid_LevelUpFrame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelUpFrame.wid_LevelUpFrame_C.GetSoundToPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkAudioEvent*               Event                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelUpFrame_C::GetSoundToPlay(class UAkAudioEvent** Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelUpFrame_C", "GetSoundToPlay");

	Params::UWid_LevelUpFrame_C_GetSoundToPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

}


// Function wid_LevelUpFrame.wid_LevelUpFrame_C.CapitalizeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_LevelUpFrame_C::CapitalizeText(class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelUpFrame_C", "CapitalizeText");

	Params::UWid_LevelUpFrame_C_CapitalizeText_Params Parms{};

	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelUpFrame.wid_LevelUpFrame_C.UpdateSkillPointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_LevelUpFrame_C::UpdateSkillPointsText(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelUpFrame_C", "UpdateSkillPointsText");

	Params::UWid_LevelUpFrame_C_UpdateSkillPointsText_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelUpFrame.wid_LevelUpFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelUpFrame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelUpFrame_C", "PreConstruct");

	Params::UWid_LevelUpFrame_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelUpFrame.wid_LevelUpFrame_C.ExecuteUbergraph_wid_LevelUpFrame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelUpFrame_C::ExecuteUbergraph_wid_LevelUpFrame(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelUpFrame_C", "ExecuteUbergraph_wid_LevelUpFrame");

	Params::UWid_LevelUpFrame_C_ExecuteUbergraph_wid_LevelUpFrame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


