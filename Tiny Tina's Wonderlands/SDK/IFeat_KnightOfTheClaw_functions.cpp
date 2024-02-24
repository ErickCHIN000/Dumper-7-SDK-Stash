#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C
// (None)

class UClass* IIFeat_KnightOfTheClaw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_KnightOfTheClaw_C");

	return Clss;
}


// IFeat_KnightOfTheClaw_C IFeat_KnightOfTheClaw.Default__IFeat_KnightOfTheClaw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_KnightOfTheClaw_C* IIFeat_KnightOfTheClaw_C::GetDefaultObj()
{
	static class IIFeat_KnightOfTheClaw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_KnightOfTheClaw_C*>(IIFeat_KnightOfTheClaw_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawStartDragonBreathAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawStartDragonBreathAttack(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawStartDragonBreathAttack");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawStartDragonBreathAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.HammerOfTheDragonGodsSetRecallFXState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::HammerOfTheDragonGodsSetRecallFXState(bool State, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "HammerOfTheDragonGodsSetRecallFXState");

	Params::IIFeat_KnightOfTheClaw_C_HammerOfTheDragonGodsSetRecallFXState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClassPassive7_StartRegen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClassPassive7_StartRegen(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClassPassive7_StartRegen");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClassPassive7_StartRegen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DragonAuraRefresh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::DragonAuraRefresh(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "DragonAuraRefresh");

	Params::IIFeat_KnightOfTheClaw_C_DragonAuraRefresh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DragonAuraRegisterThornyAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::DragonAuraRegisterThornyAura(bool Enable, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "DragonAuraRegisterThornyAura");

	Params::IIFeat_KnightOfTheClaw_C_DragonAuraRegisterThornyAura_Params Parms{};

	Parms.Enable = Enable;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.TryToRemoveDragonAuraEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::TryToRemoveDragonAuraEffect(class AActor* TargetActor, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "TryToRemoveDragonAuraEffect");

	Params::IIFeat_KnightOfTheClaw_C_TryToRemoveDragonAuraEffect_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.UnregisterDragonAuraStatusEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::UnregisterDragonAuraStatusEffect(class AActor* TargetActor, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "UnregisterDragonAuraStatusEffect");

	Params::IIFeat_KnightOfTheClaw_C_UnregisterDragonAuraStatusEffect_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RegisterDragonAuraStatusEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAttributeData*           Attribute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Grade                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration_Optional_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle AttributeHandle                                                  (Parm, OutParm)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::RegisterDragonAuraStatusEffect(class AActor* TargetActor, class UGbxAttributeData* Attribute, int32 Grade, float Duration_Optional_, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "RegisterDragonAuraStatusEffect");

	Params::IIFeat_KnightOfTheClaw_C_RegisterDragonAuraStatusEffect_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Attribute = Attribute;
	Parms.Grade = Grade;
	Parms.Duration_Optional_ = Duration_Optional_;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeHandle != nullptr)
		*AttributeHandle = std::move(Parms.AttributeHandle);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.UnregisterDragonAuraCDM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  CDM                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseDamageCauser                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::UnregisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, bool bUseDamageCauser, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "UnregisterDragonAuraCDM");

	Params::IIFeat_KnightOfTheClaw_C_UnregisterDragonAuraCDM_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CDM = CDM;
	Parms.bUseDamageCauser = bUseDamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RegisterDragonAuraCDM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  CDM                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAttributeData*           PassiveAttribute                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Grade                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseDamageCauser                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAttributeModifierHandle AttributeHandle                                                  (Parm, OutParm)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::RegisterDragonAuraCDM(class AActor* TargetActor, class UConditionalDamageModifier* CDM, class UGbxAttributeData* PassiveAttribute, int32 Grade, bool bUseDamageCauser, struct FGbxAttributeModifierHandle* AttributeHandle, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "RegisterDragonAuraCDM");

	Params::IIFeat_KnightOfTheClaw_C_RegisterDragonAuraCDM_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CDM = CDM;
	Parms.PassiveAttribute = PassiveAttribute;
	Parms.Grade = Grade;
	Parms.bUseDamageCauser = bUseDamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeHandle != nullptr)
		*AttributeHandle = std::move(Parms.AttributeHandle);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RemoveDragonAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIO_KotC_DragonAura_C*       DragonAura                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::RemoveDragonAura(class AIO_KotC_DragonAura_C* DragonAura)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "RemoveDragonAura");

	Params::IIFeat_KnightOfTheClaw_C_RemoveDragonAura_Params Parms{};

	Parms.DragonAura = DragonAura;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.ActivateDragonAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIFeat_KnightOfTheClaw_C::ActivateDragonAura()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "ActivateDragonAura");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawSpawnDragonBreathEmitter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawSpawnDragonBreathEmitter(bool Enable, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawSpawnDragonBreathEmitter");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawSpawnDragonBreathEmitter_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_GetSpentStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stacks                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawPassive9_GetSpentStacks(int32* Stacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawPassive9_GetSpentStacks");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_GetSpentStacks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Stacks != nullptr)
		*Stacks = Parms.Stacks;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_ResetStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawPassive9_ResetStacks(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawPassive9_ResetStacks");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_ResetStacks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_Getstacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawPassive9_Getstacks(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawPassive9_Getstacks");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_Getstacks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_AddStack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::KnightOfTheClawPassive9_AddStack(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "KnightOfTheClawPassive9_AddStack");

	Params::IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_AddStack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.StopDragonRoarEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::StopDragonRoarEffect(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "StopDragonRoarEffect");

	Params::IIFeat_KnightOfTheClaw_C_StopDragonRoarEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.StartDragonRoarEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::StartDragonRoarEffect(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "StartDragonRoarEffect");

	Params::IIFeat_KnightOfTheClaw_C_StartDragonRoarEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DespawnDragonPet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::DespawnDragonPet(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "DespawnDragonPet");

	Params::IIFeat_KnightOfTheClaw_C_DespawnDragonPet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.GetDragonPet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_KnightOfTheClaw_C::GetDragonPet(class AActor** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "GetDragonPet");

	Params::IIFeat_KnightOfTheClaw_C_GetDragonPet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}


// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.SpawnDragonPet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_KnightOfTheClaw_C::SpawnDragonPet(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_KnightOfTheClaw_C", "SpawnDragonPet");

	Params::IIFeat_KnightOfTheClaw_C_SpawnDragonPet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


