#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AmbientDialogue.BP_AmbientDialogue_C
// (Actor)

class UClass* ABP_AmbientDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AmbientDialogue_C");

	return Clss;
}


// BP_AmbientDialogue_C BP_AmbientDialogue.Default__BP_AmbientDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AmbientDialogue_C* ABP_AmbientDialogue_C::GetDefaultObj()
{
	static class ABP_AmbientDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AmbientDialogue_C*>(ABP_AmbientDialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AmbientDialogue.BP_AmbientDialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AmbientDialogue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientDialogue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientDialogue.BP_AmbientDialogue_C.Destroy Ambient Actor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientDialogue_C::Destroy_Ambient_Actor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientDialogue_C", "Destroy Ambient Actor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientDialogue.BP_AmbientDialogue_C.Check Character In Range
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AmbientDialogue_C::Check_Character_In_Range()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientDialogue_C", "Check Character In Range");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AmbientDialogue.BP_AmbientDialogue_C.ExecuteUbergraph_BP_AmbientDialogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_AmbientDialogue_C*      K2Node_DynamicCast_AsWBP_Ambient_Dialogue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogue*                   CallFunc_GetAmbientDialogue_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AmbientDialogue_C::ExecuteUbergraph_BP_AmbientDialogue(int32 EntryPoint, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UWBP_AmbientDialogue_C* K2Node_DynamicCast_AsWBP_Ambient_Dialogue, bool K2Node_DynamicCast_bSuccess, class UDialogue* CallFunc_GetAmbientDialogue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AmbientDialogue_C", "ExecuteUbergraph_BP_AmbientDialogue");

	Params::ABP_AmbientDialogue_C_ExecuteUbergraph_BP_AmbientDialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Ambient_Dialogue = K2Node_DynamicCast_AsWBP_Ambient_Dialogue;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAmbientDialogue_ReturnValue = CallFunc_GetAmbientDialogue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_AttachToActor_ReturnValue = CallFunc_K2_AttachToActor_ReturnValue;
	Parms.CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled = CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


