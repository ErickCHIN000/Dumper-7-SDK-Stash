#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C
// (None)

class UClass* UShellUpgrade_GainResolveOnTalk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_GainResolveOnTalk_C");

	return Clss;
}


// ShellUpgrade_GainResolveOnTalk_C ShellUpgrade_GainResolveOnTalk.Default__ShellUpgrade_GainResolveOnTalk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_GainResolveOnTalk_C* UShellUpgrade_GainResolveOnTalk_C::GetDefaultObj()
{
	static class UShellUpgrade_GainResolveOnTalk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_GainResolveOnTalk_C*>(UShellUpgrade_GainResolveOnTalk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainResolveOnTalk_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainResolveOnTalk_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainResolveOnTalk_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainResolveOnTalk_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C.OnTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_GainResolveOnTalk_C::OnTalk(class AActor* NPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainResolveOnTalk_C", "OnTalk");

	Params::UShellUpgrade_GainResolveOnTalk_C_OnTalk_Params Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_GainResolveOnTalk.ShellUpgrade_GainResolveOnTalk_C.ExecuteUbergraph_ShellUpgrade_GainResolveOnTalk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NPC                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_GainResolveOnTalk_C::ExecuteUbergraph_ShellUpgrade_GainResolveOnTalk(int32 EntryPoint, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AActor* K2Node_CustomEvent_NPC, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainResolveOnTalk_C", "ExecuteUbergraph_ShellUpgrade_GainResolveOnTalk");

	Params::UShellUpgrade_GainResolveOnTalk_C_ExecuteUbergraph_ShellUpgrade_GainResolveOnTalk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_NPC = K2Node_CustomEvent_NPC;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


