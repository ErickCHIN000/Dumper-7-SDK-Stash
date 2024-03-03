#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoadingScreen.WB_LoadingScreen_C
// (None)

class UClass* UWB_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoadingScreen_C");

	return Clss;
}


// WB_LoadingScreen_C WB_LoadingScreen.Default__WB_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoadingScreen_C* UWB_LoadingScreen_C::GetDefaultObj()
{
	static class UWB_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoadingScreen_C*>(UWB_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoadingScreen.WB_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadingScreen.WB_LoadingScreen_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadingScreen_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "OnAnimationFinished");

	Params::UWB_LoadingScreen_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadingScreen.WB_LoadingScreen_C.ExecuteUbergraph_WB_LoadingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadingScreen_C::ExecuteUbergraph_WB_LoadingScreen(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadingScreen_C", "ExecuteUbergraph_WB_LoadingScreen");

	Params::UWB_LoadingScreen_C_ExecuteUbergraph_WB_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


