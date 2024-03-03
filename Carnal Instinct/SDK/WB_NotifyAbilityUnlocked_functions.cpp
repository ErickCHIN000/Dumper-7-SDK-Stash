#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C
// (None)

class UClass* UWB_NotifyAbilityUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_NotifyAbilityUnlocked_C");

	return Clss;
}


// WB_NotifyAbilityUnlocked_C WB_NotifyAbilityUnlocked.Default__WB_NotifyAbilityUnlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_NotifyAbilityUnlocked_C* UWB_NotifyAbilityUnlocked_C::GetDefaultObj()
{
	static class UWB_NotifyAbilityUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_NotifyAbilityUnlocked_C*>(UWB_NotifyAbilityUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_NotifyAbilityUnlocked_C::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotifyAbilityUnlocked_C", "GetName");

	Params::UWB_NotifyAbilityUnlocked_C_GetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_NotifyAbilityUnlocked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotifyAbilityUnlocked_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotifyAbilityUnlocked_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotifyAbilityUnlocked_C", "OnAnimationFinished");

	Params::UWB_NotifyAbilityUnlocked_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_NotifyAbilityUnlocked.WB_NotifyAbilityUnlocked_C.ExecuteUbergraph_WB_NotifyAbilityUnlocked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NotifyAbilityUnlocked_C::ExecuteUbergraph_WB_NotifyAbilityUnlocked(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_NotifyAbilityUnlocked_C", "ExecuteUbergraph_WB_NotifyAbilityUnlocked");

	Params::UWB_NotifyAbilityUnlocked_C_ExecuteUbergraph_WB_NotifyAbilityUnlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


