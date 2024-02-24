#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResetSkillsSelect.ResetSkillsSelect_C
// (None)

class UClass* UResetSkillsSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResetSkillsSelect_C");

	return Clss;
}


// ResetSkillsSelect_C ResetSkillsSelect.Default__ResetSkillsSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResetSkillsSelect_C* UResetSkillsSelect_C::GetDefaultObj()
{
	static class UResetSkillsSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResetSkillsSelect_C*>(UResetSkillsSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResetSkillsSelect.ResetSkillsSelect_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResetSkillsSelect_C::ClearUI(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "ClearUI");

	Params::UResetSkillsSelect_C_ClearUI_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResetSkillsSelect.ResetSkillsSelect_C.BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResetSkillsSelect_C::BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResetSkillsSelect.ResetSkillsSelect_C.BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResetSkillsSelect_C::BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResetSkillsSelect.ResetSkillsSelect_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResetSkillsSelect_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResetSkillsSelect.ResetSkillsSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResetSkillsSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResetSkillsSelect.ResetSkillsSelect_C.ExecuteUbergraph_ResetSkillsSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UResetSkillsSelect_C::ExecuteUbergraph_ResetSkillsSelect(int32 EntryPoint, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResetSkillsSelect_C", "ExecuteUbergraph_ResetSkillsSelect");

	Params::UResetSkillsSelect_C_ExecuteUbergraph_ResetSkillsSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


