#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IActionSkill_KotC_AS3.IActionSkill_KotC_AS3_C
// (None)

class UClass* IIActionSkill_KotC_AS3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IActionSkill_KotC_AS3_C");

	return Clss;
}


// IActionSkill_KotC_AS3_C IActionSkill_KotC_AS3.Default__IActionSkill_KotC_AS3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIActionSkill_KotC_AS3_C* IIActionSkill_KotC_AS3_C::GetDefaultObj()
{
	static class IIActionSkill_KotC_AS3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIActionSkill_KotC_AS3_C*>(IIActionSkill_KotC_AS3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IActionSkill_KotC_AS3.IActionSkill_KotC_AS3_C.FieryRedemptionPlayDragonBreath3rd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIActionSkill_KotC_AS3_C::FieryRedemptionPlayDragonBreath3rd(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_KotC_AS3_C", "FieryRedemptionPlayDragonBreath3rd");

	Params::IIActionSkill_KotC_AS3_C_FieryRedemptionPlayDragonBreath3rd_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IActionSkill_KotC_AS3.IActionSkill_KotC_AS3_C.FieryRedemptionSetBreathWeaponEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIActionSkill_KotC_AS3_C::FieryRedemptionSetBreathWeaponEnable(bool Enable, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_KotC_AS3_C", "FieryRedemptionSetBreathWeaponEnable");

	Params::IIActionSkill_KotC_AS3_C_FieryRedemptionSetBreathWeaponEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IActionSkill_KotC_AS3.IActionSkill_KotC_AS3_C.FieryRedemptionStartEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIActionSkill_KotC_AS3_C::FieryRedemptionStartEffect(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IActionSkill_KotC_AS3_C", "FieryRedemptionStartEffect");

	Params::IIActionSkill_KotC_AS3_C_FieryRedemptionStartEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


