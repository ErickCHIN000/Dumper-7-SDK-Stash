#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C
// (Actor, Pawn)

class UClass* ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterCreation_ProxyChar_Child_Ancestry_C");

	return Clss;
}


// BP_CharacterCreation_ProxyChar_Child_Ancestry_C BP_CharacterCreation_ProxyChar_Child_Ancestry.Default__BP_CharacterCreation_ProxyChar_Child_Ancestry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::GetDefaultObj()
{
	static class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterCreation_ProxyChar_Child_Ancestry_C*>(ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C.RND_AnimationBreakerTest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::RND_AnimationBreakerTest(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Child_Ancestry_C", "RND_AnimationBreakerTest");

	Params::ABP_CharacterCreation_ProxyChar_Child_Ancestry_C_RND_AnimationBreakerTest_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = CallFunc_K2_SetTimer_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Child_Ancestry_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C.SetActiveFamilyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::SetActiveFamilyMember(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Child_Ancestry_C", "SetActiveFamilyMember");

	Params::ABP_CharacterCreation_ProxyChar_Child_Ancestry_C_SetActiveFamilyMember_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C.ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Child_Ancestry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Child_Ancestry(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 K2Node_CustomEvent_index, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Child_Ancestry_C", "ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Child_Ancestry");

	Params::ABP_CharacterCreation_ProxyChar_Child_Ancestry_C_ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Child_Ancestry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C.AncesrySelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterCreation_ProxyChar_Child_Ancestry_C::AncesrySelect__DelegateSignature(int32 ActiveIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreation_ProxyChar_Child_Ancestry_C", "AncesrySelect__DelegateSignature");

	Params::ABP_CharacterCreation_ProxyChar_Child_Ancestry_C_AncesrySelect__DelegateSignature_Params Parms{};

	Parms.ActiveIndex = ActiveIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


