#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_GameTip.WB_GameTip_C
// (None)

class UClass* UWB_GameTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_GameTip_C");

	return Clss;
}


// WB_GameTip_C WB_GameTip.Default__WB_GameTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_GameTip_C* UWB_GameTip_C::GetDefaultObj()
{
	static class UWB_GameTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_GameTip_C*>(UWB_GameTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_GameTip.WB_GameTip_C.Get_MainText_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_GameTip_C::Get_MainText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GameTip_C", "Get_MainText_Text_0");

	Params::UWB_GameTip_C_Get_MainText_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_GameTip.WB_GameTip_C.Set Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_GameTip_C::Set_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GameTip_C", "Set Text");

	Params::UWB_GameTip_C_Set_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_GameTip.WB_GameTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_GameTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GameTip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_GameTip.WB_GameTip_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameTip_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GameTip_C", "OnAnimationFinished");

	Params::UWB_GameTip_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_GameTip.WB_GameTip_C.ExecuteUbergraph_WB_GameTip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameTip_C::ExecuteUbergraph_WB_GameTip(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_GameTip_C", "ExecuteUbergraph_WB_GameTip");

	Params::UWB_GameTip_C_ExecuteUbergraph_WB_GameTip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


