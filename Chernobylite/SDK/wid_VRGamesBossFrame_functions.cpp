#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_VRGamesBossFrame.wid_VRGamesBossFrame_C
// (None)

class UClass* UWid_VRGamesBossFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_VRGamesBossFrame_C");

	return Clss;
}


// wid_VRGamesBossFrame_C wid_VRGamesBossFrame.Default__wid_VRGamesBossFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_VRGamesBossFrame_C* UWid_VRGamesBossFrame_C::GetDefaultObj()
{
	static class UWid_VRGamesBossFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_VRGamesBossFrame_C*>(UWid_VRGamesBossFrame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.GetSoundToPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkAudioEvent*               Event                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_VRGamesBossFrame_C::GetSoundToPlay(class UAkAudioEvent** Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_VRGamesBossFrame_C", "GetSoundToPlay");

	Params::UWid_VRGamesBossFrame_C_GetSoundToPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

}


// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.CapitalizeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)

void UWid_VRGamesBossFrame_C::CapitalizeText(class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_TextToUpper_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_VRGamesBossFrame_C", "CapitalizeText");

	Params::UWid_VRGamesBossFrame_C_CapitalizeText_Params Parms{};

	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.UpdateSkillPointsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_VRGamesBossFrame_C::UpdateSkillPointsText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_VRGamesBossFrame_C", "UpdateSkillPointsText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_VRGamesBossFrame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_VRGamesBossFrame_C", "PreConstruct");

	Params::UWid_VRGamesBossFrame_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_VRGamesBossFrame.wid_VRGamesBossFrame_C.ExecuteUbergraph_wid_VRGamesBossFrame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_VRGamesBossFrame_C::ExecuteUbergraph_wid_VRGamesBossFrame(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_VRGamesBossFrame_C", "ExecuteUbergraph_wid_VRGamesBossFrame");

	Params::UWid_VRGamesBossFrame_C_ExecuteUbergraph_wid_VRGamesBossFrame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


