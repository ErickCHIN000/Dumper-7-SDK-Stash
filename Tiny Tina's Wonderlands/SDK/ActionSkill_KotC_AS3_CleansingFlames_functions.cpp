#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C
// (None)

class UClass* UActionSkill_KotC_AS3_CleansingFlames_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_KotC_AS3_CleansingFlames_C");

	return Clss;
}


// ActionSkill_KotC_AS3_CleansingFlames_C ActionSkill_KotC_AS3_CleansingFlames.Default__ActionSkill_KotC_AS3_CleansingFlames_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_KotC_AS3_CleansingFlames_C* UActionSkill_KotC_AS3_CleansingFlames_C::GetDefaultObj()
{
	static class UActionSkill_KotC_AS3_CleansingFlames_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_KotC_AS3_CleansingFlames_C*>(UActionSkill_KotC_AS3_CleansingFlames_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionSetBreathWeaponEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS3_CleansingFlames_C::FieryRedemptionSetBreathWeaponEnable(bool Enable, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "FieryRedemptionSetBreathWeaponEnable");

	Params::UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionSetBreathWeaponEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionStartEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS3_CleansingFlames_C::FieryRedemptionStartEffect(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "FieryRedemptionStartEffect");

	Params::UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionStartEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.OnStartActionAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS3_CleansingFlames_C::OnStartActionAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "OnStartActionAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.FieryRedemptionPlayDragonBreath3rd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionSkill_KotC_AS3_CleansingFlames_C::FieryRedemptionPlayDragonBreath3rd(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "FieryRedemptionPlayDragonBreath3rd");

	Params::UActionSkill_KotC_AS3_CleansingFlames_C_FieryRedemptionPlayDragonBreath3rd_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS3_CleansingFlames_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActionSkill_KotC_AS3_CleansingFlames_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionSkill_KotC_AS3_CleansingFlames.ActionSkill_KotC_AS3_CleansingFlames_C.ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_Event_Enable                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionSkill_KotC_AS3_CleansingFlames_C::ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, bool K2Node_Event_Enable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionSkill_KotC_AS3_CleansingFlames_C", "ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames");

	Params::UActionSkill_KotC_AS3_CleansingFlames_C_ExecuteUbergraph_ActionSkill_KotC_AS3_CleansingFlames_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Enable = K2Node_Event_Enable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


